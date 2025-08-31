/* Generated code for Python module 'torch._masked'
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

/* The "module_torch$_masked" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$_masked;
PyDictObject *moduledict_torch$_masked;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[237];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[237];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch._masked"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 237; i++) {
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
void checkModuleConstants_torch$_masked(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 237; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_dbc00c0bdbbd5e985043b578bd7b1db2;
static PyCodeObject *codeobj_5abb941b1da17651e50cafbb57e75125;
static PyCodeObject *codeobj_5c83dbaaa7456422cf5040b9e46ae813;
static PyCodeObject *codeobj_1ff53f33d9d23a27f43dd8e2b15addfe;
static PyCodeObject *codeobj_f654732a3af3895264273b15da5afe0c;
static PyCodeObject *codeobj_b148014b4249ca90c7dc4610ca8aa8bc;
static PyCodeObject *codeobj_b9c19dafd23e2e326e8b843f462b9aa9;
static PyCodeObject *codeobj_4c5f2aeeb62bd516f7a4dc3d0a83ff86;
static PyCodeObject *codeobj_05c910e29058e9ba8c7fe0001247d7d0;
static PyCodeObject *codeobj_d30d7486a0393eedf371211d6a897557;
static PyCodeObject *codeobj_7d825c3d9f9d7c33760125795560f88a;
static PyCodeObject *codeobj_05ef8f3fe4d0db1afc0ef76f5bdb86d7;
static PyCodeObject *codeobj_634cc065afb5a1f1bc0c3c8b784ed04e;
static PyCodeObject *codeobj_8ae77c4b3fd507b7d463b96abbe1901b;
static PyCodeObject *codeobj_b2bea1024b79f3a2cc0d00b06cdc1c33;
static PyCodeObject *codeobj_d0a6a3ce620903739fea4bd489668272;
static PyCodeObject *codeobj_dfcf4b68b94cdbc2188e974cf164fe18;
static PyCodeObject *codeobj_e8e59b356631627e355163c75c33037a;
static PyCodeObject *codeobj_3bccf7519b889a5b843b80ad5b5cb10f;
static PyCodeObject *codeobj_90fabf1b0ca7bad00ce877a9ab21f83b;
static PyCodeObject *codeobj_0036b6406b7beb7b88a569a195eaedec;
static PyCodeObject *codeobj_7d061a8279f19524069e0c43066563c1;
static PyCodeObject *codeobj_cd0bc0dff64d7a3f92e3467530bc71bd;
static PyCodeObject *codeobj_dd8711f71552cf3d7f0a2ff441078151;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[216]); CHECK_OBJECT(module_filename_obj);
    codeobj_dbc00c0bdbbd5e985043b578bd7b1db2 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[217], NULL, 1, 0, 0);
    codeobj_5abb941b1da17651e50cafbb57e75125 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[217], NULL, 1, 0, 0);
    codeobj_5c83dbaaa7456422cf5040b9e46ae813 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[218], NULL, 1, 0, 0);
    codeobj_1ff53f33d9d23a27f43dd8e2b15addfe = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[219], NULL, 1, 0, 0);
    codeobj_f654732a3af3895264273b15da5afe0c = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[221], NULL, 1, 0, 0);
    codeobj_b148014b4249ca90c7dc4610ca8aa8bc = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[221], NULL, 1, 0, 0);
    codeobj_b9c19dafd23e2e326e8b843f462b9aa9 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[222], NULL, 1, 0, 0);
    codeobj_4c5f2aeeb62bd516f7a4dc3d0a83ff86 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[223], mod_consts[223], NULL, NULL, 0, 0, 0);
    codeobj_05c910e29058e9ba8c7fe0001247d7d0 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[224], NULL, 1, 0, 0);
    codeobj_d30d7486a0393eedf371211d6a897557 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[225], NULL, 2, 0, 0);
    codeobj_7d825c3d9f9d7c33760125795560f88a = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[226], NULL, 1, 0, 0);
    codeobj_05ef8f3fe4d0db1afc0ef76f5bdb86d7 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[227], NULL, 2, 0, 0);
    codeobj_634cc065afb5a1f1bc0c3c8b784ed04e = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[228], NULL, 2, 0, 0);
    codeobj_8ae77c4b3fd507b7d463b96abbe1901b = MAKE_CODE_OBJECT(module_filename_obj, 463, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[229], NULL, 2, 3, 0);
    codeobj_b2bea1024b79f3a2cc0d00b06cdc1c33 = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[229], NULL, 2, 3, 0);
    codeobj_d0a6a3ce620903739fea4bd489668272 = MAKE_CODE_OBJECT(module_filename_obj, 654, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 2, 2, 0);
    codeobj_dfcf4b68b94cdbc2188e974cf164fe18 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[231], NULL, 2, 3, 0);
    codeobj_e8e59b356631627e355163c75c33037a = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[232], NULL, 3, 3, 0);
    codeobj_3bccf7519b889a5b843b80ad5b5cb10f = MAKE_CODE_OBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[233], NULL, 3, 3, 0);
    codeobj_90fabf1b0ca7bad00ce877a9ab21f83b = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[234], NULL, 2, 3, 0);
    codeobj_0036b6406b7beb7b88a569a195eaedec = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[230], NULL, 2, 2, 0);
    codeobj_7d061a8279f19524069e0c43066563c1 = MAKE_CODE_OBJECT(module_filename_obj, 672, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[230], NULL, 2, 2, 0);
    codeobj_cd0bc0dff64d7a3f92e3467530bc71bd = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[235], NULL, 2, 3, 0);
    codeobj_dd8711f71552cf3d7f0a2ff441078151 = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[236], NULL, 3, 3, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__10_mean(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__11_norm(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__12_var(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__13_softmax(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__14_log_softmax(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__15_softmin(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__16_normalize(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__1__apply_docstring_templates();


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__2__reduction_identity(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__3__canonical_dim(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__4__input_mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__5__output_mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__6_sum(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__7_prod(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__8_amax(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_masked$$$function__9_amin(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torch$_masked$$$function__1__apply_docstring_templates(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_example_args = NULL;
    PyObject *var_operation_args = NULL;
    PyObject *var_operation_kwargs = NULL;
    PyObject *var_docstring_templates = NULL;
    PyObject *var_args_and_kwargs = NULL;
    PyObject *var_argument_declarations = NULL;
    PyObject *var_definitions = NULL;
    PyObject *var_reduction_names = NULL;
    PyObject *var_normalization_names = NULL;
    PyObject *var_operation_names = NULL;
    PyObject *var_example_input = NULL;
    PyObject *var_example_mask = NULL;
    PyObject *var_arg_declarations = NULL;
    PyObject *var_kwarg_declarations = NULL;
    struct Nuitka_CellObject *var_op_kind = Nuitka_Cell_Empty();
    PyObject *var_doc_sections = NULL;
    PyObject *var_example_output = NULL;
    struct Nuitka_CellObject *var_template_data = Nuitka_Cell_Empty();
    PyObject *var_templates = NULL;
    PyObject *var_doc_template = NULL;
    PyObject *outline_0_var_a = NULL;
    PyObject *outline_1_var_a = NULL;
    PyObject *outline_2_var_sec = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
    PyObject *tmp_genexpr_4__$0 = NULL;
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
    struct Nuitka_FrameObject *frame_05c910e29058e9ba8c7fe0001247d7d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
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
    struct Nuitka_FrameObject *frame_f654732a3af3895264273b15da5afe0c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f654732a3af3895264273b15da5afe0c_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_b148014b4249ca90c7dc4610ca8aa8bc_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_b9c19dafd23e2e326e8b843f462b9aa9_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_05c910e29058e9ba8c7fe0001247d7d0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(mod_consts[0]);
        assert(var_docstring_templates == NULL);
        var_docstring_templates = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = DICT_COPY(mod_consts[1]);
        assert(var_args_and_kwargs == NULL);
        var_args_and_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = DICT_COPY(mod_consts[2]);
        assert(var_argument_declarations == NULL);
        var_argument_declarations = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = DICT_COPY(mod_consts[3]);
        assert(var_definitions == NULL);
        var_definitions = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = DICT_COPY(mod_consts[4]);
        assert(var_reduction_names == NULL);
        var_reduction_names = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = DICT_COPY(mod_consts[5]);
        assert(var_normalization_names == NULL);
        var_normalization_names = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(var_operation_names == NULL);
        var_operation_names = tmp_assign_source_7;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_05c910e29058e9ba8c7fe0001247d7d0)) {
        Py_XDECREF(cache_frame_05c910e29058e9ba8c7fe0001247d7d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05c910e29058e9ba8c7fe0001247d7d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05c910e29058e9ba8c7fe0001247d7d0 = MAKE_FUNCTION_FRAME(codeobj_05c910e29058e9ba8c7fe0001247d7d0, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05c910e29058e9ba8c7fe0001247d7d0->m_type_description == NULL);
    frame_05c910e29058e9ba8c7fe0001247d7d0 = cache_frame_05c910e29058e9ba8c7fe0001247d7d0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05c910e29058e9ba8c7fe0001247d7d0);
    assert(Py_REFCNT(frame_05c910e29058e9ba8c7fe0001247d7d0) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(var_operation_names);
        tmp_dict_arg_value_1 = var_operation_names;
        CHECK_OBJECT(var_reduction_names);
        tmp_iterable_value_1 = var_reduction_names;
        assert(PyDict_Check(tmp_dict_arg_value_1));
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_iterable_value_2;
        CHECK_OBJECT(var_operation_names);
        tmp_dict_arg_value_2 = var_operation_names;
        CHECK_OBJECT(var_normalization_names);
        tmp_iterable_value_2 = var_normalization_names;
        assert(PyDict_Check(tmp_dict_arg_value_2));
            tmp_res = PyDict_Merge(tmp_dict_arg_value_2, tmp_iterable_value_2, 1);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = DEEP_COPY_LIST_GUIDED(mod_consts[8], "ll");
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 223;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[7], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        assert(var_example_input == NULL);
        var_example_input = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_2 = DEEP_COPY_LIST_GUIDED(mod_consts[9], "ll");
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 224;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[7], tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        assert(var_example_mask == NULL);
        var_example_mask = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_func);
        tmp_expression_value_1 = par_func;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = PySet_New(mod_consts[11]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooNoooocoocoo";
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[12];
        assert(var_example_args == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_example_args = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_example_input);
        tmp_expression_value_2 = var_example_input;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 228;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 228;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 228;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_example_input;
            assert(old != NULL);
            var_example_input = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_func);
        tmp_expression_value_4 = par_func;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = PySet_New(mod_consts[16]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooNoooocoocoo";
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
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[17];
        assert(var_example_args == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_example_args = tmp_assign_source_12;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[18];
        assert(var_example_args == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_example_args = tmp_assign_source_13;
    }
    branch_end_2:;
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_args_and_kwargs);
        tmp_dict_arg_value_3 = var_args_and_kwargs;
        CHECK_OBJECT(par_func);
        tmp_expression_value_5 = par_func;
        tmp_key_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_key_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_3, tmp_key_value_1);
        Py_DECREF(tmp_key_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooNoooocoocoo";
            exception_lineno = 236;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooNoooocoocoo";
            exception_lineno = 236;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "oooooooooooNoooocoocoo";
                    exception_lineno = 236;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooNoooocoocoo";
            exception_lineno = 236;
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
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        assert(var_operation_args == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_operation_args = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        assert(var_operation_kwargs == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_operation_kwargs = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_operation_args);
            tmp_iter_arg_2 = var_operation_args;
            tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_21;
        }
        if (isFrameUnusable(cache_frame_f654732a3af3895264273b15da5afe0c_2)) {
            Py_XDECREF(cache_frame_f654732a3af3895264273b15da5afe0c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f654732a3af3895264273b15da5afe0c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f654732a3af3895264273b15da5afe0c_2 = MAKE_FUNCTION_FRAME(codeobj_f654732a3af3895264273b15da5afe0c, module_torch$_masked, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f654732a3af3895264273b15da5afe0c_2->m_type_description == NULL);
        frame_f654732a3af3895264273b15da5afe0c_2 = cache_frame_f654732a3af3895264273b15da5afe0c_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f654732a3af3895264273b15da5afe0c_2);
        assert(Py_REFCNT(frame_f654732a3af3895264273b15da5afe0c_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 238;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_23 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_23;
                Py_INCREF(outline_0_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_3;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_format_spec_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_str_arg_value_1 = mod_consts[20];
            if (var_argument_declarations == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }

            tmp_expression_value_7 = var_argument_declarations;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_0_var_a);
            tmp_args_element_value_1 = outline_0_var_a;
            CHECK_OBJECT(outline_0_var_a);
            tmp_expression_value_9 = outline_0_var_a;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 239;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            frame_f654732a3af3895264273b15da5afe0c_2->m_frame.f_lineno = 239;
            tmp_expression_value_8 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[24]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 239;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_subscript_value_1 = mod_consts[25];
            tmp_format_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 239;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 239;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_args_element_value_2 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 239;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            frame_f654732a3af3895264273b15da5afe0c_2->m_frame.f_lineno = 238;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            frame_f654732a3af3895264273b15da5afe0c_2->m_frame.f_lineno = 238;
            tmp_iterable_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iterable_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_append_value_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_3);
            Py_DECREF(tmp_iterable_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_19 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_19);
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
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f654732a3af3895264273b15da5afe0c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f654732a3af3895264273b15da5afe0c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f654732a3af3895264273b15da5afe0c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f654732a3af3895264273b15da5afe0c_2,
            type_description_2,
            outline_0_var_a,
            var_argument_declarations
        );


        // Release cached frame if used for exception.
        if (frame_f654732a3af3895264273b15da5afe0c_2 == cache_frame_f654732a3af3895264273b15da5afe0c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f654732a3af3895264273b15da5afe0c_2);
            cache_frame_f654732a3af3895264273b15da5afe0c_2 = NULL;
        }

        assertFrameObject(frame_f654732a3af3895264273b15da5afe0c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooNoooocoocoo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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
        exception_lineno = 238;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_arg_declarations == NULL);
        var_arg_declarations = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_24;
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_operation_kwargs);
            tmp_iter_arg_3 = var_operation_kwargs;
            tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_26;
        }
        if (isFrameUnusable(cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3)) {
            Py_XDECREF(cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3 = MAKE_FUNCTION_FRAME(codeobj_b148014b4249ca90c7dc4610ca8aa8bc, module_torch$_masked, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_type_description == NULL);
        frame_b148014b4249ca90c7dc4610ca8aa8bc_3 = cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b148014b4249ca90c7dc4610ca8aa8bc_3);
        assert(Py_REFCNT(frame_b148014b4249ca90c7dc4610ca8aa8bc_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_27 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 243;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_28 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_a;
                outline_1_var_a = tmp_assign_source_28;
                Py_INCREF(outline_1_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_str_arg_value_2;
            PyObject *tmp_iterable_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_str_arg_value_2 = mod_consts[20];
            if (var_argument_declarations == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }

            tmp_expression_value_12 = var_argument_declarations;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[22]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_a);
            tmp_expression_value_14 = outline_1_var_a;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[23]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame.f_lineno = 244;
            tmp_expression_value_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[29]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_subscript_value_2 = mod_consts[25];
            tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_2, 0);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_a);
            tmp_expression_value_16 = outline_1_var_a;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[23]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame.f_lineno = 244;
            tmp_expression_value_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[24]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_subscript_value_3 = mod_consts[25];
            tmp_format_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_3, 0);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_format_spec_2 = mod_consts[26];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_args_element_value_4 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame.f_lineno = 243;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[30]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_a);
            tmp_expression_value_18 = outline_1_var_a;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[23]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 245;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame.f_lineno = 245;
            tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[29]);

            Py_DECREF(tmp_called_value_10);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 245;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_subscript_value_4 = mod_consts[31];
            tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_4, 1);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 245;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame.f_lineno = 243;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_expression_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[32]);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[28]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame.f_lineno = 243;
            tmp_iterable_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_iterable_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_append_value_2 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_4);
            Py_DECREF(tmp_iterable_value_4);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_24 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_24);
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
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b148014b4249ca90c7dc4610ca8aa8bc_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b148014b4249ca90c7dc4610ca8aa8bc_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b148014b4249ca90c7dc4610ca8aa8bc_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b148014b4249ca90c7dc4610ca8aa8bc_3,
            type_description_2,
            outline_1_var_a,
            var_argument_declarations
        );


        // Release cached frame if used for exception.
        if (frame_b148014b4249ca90c7dc4610ca8aa8bc_3 == cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3);
            cache_frame_b148014b4249ca90c7dc4610ca8aa8bc_3 = NULL;
        }

        assertFrameObject(frame_b148014b4249ca90c7dc4610ca8aa8bc_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooNoooocoocoo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_a);
        outline_1_var_a = NULL;
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

        Py_XDECREF(outline_1_var_a);
        outline_1_var_a = NULL;
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
        exception_lineno = 243;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_kwarg_declarations == NULL);
        var_kwarg_declarations = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_dict_arg_value_4;
        CHECK_OBJECT(par_func);
        tmp_expression_value_19 = par_func;
        tmp_key_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[10]);
        if (tmp_key_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reduction_names);
        tmp_dict_arg_value_4 = var_reduction_names;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_2);
        Py_DECREF(tmp_key_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[33];
        assert(Nuitka_Cell_GET(var_op_kind) == NULL);
        Py_INCREF(tmp_assign_source_29);
        PyCell_SET(var_op_kind, tmp_assign_source_29);

    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_LIST5(mod_consts[34]);
        assert(var_doc_sections == NULL);
        var_doc_sections = tmp_assign_source_30;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_key_value_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_dict_arg_value_5;
        CHECK_OBJECT(par_func);
        tmp_expression_value_20 = par_func;
        tmp_key_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[10]);
        if (tmp_key_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_normalization_names);
        tmp_dict_arg_value_5 = var_normalization_names;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_5, tmp_key_value_3);
        Py_DECREF(tmp_key_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[35];
        assert(Nuitka_Cell_GET(var_op_kind) == NULL);
        Py_INCREF(tmp_assign_source_31);
        PyCell_SET(var_op_kind, tmp_assign_source_31);

    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_LIST4(mod_consts[36]);
        assert(var_doc_sections == NULL);
        var_doc_sections = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_example_input);
        tmp_expression_value_21 = var_example_input;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[13]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 255;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[14]);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 255;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 255;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_assign_source_33 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_example_input;
            assert(old != NULL);
            var_example_input = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 257;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooNoooocoocoo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_func);
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT(var_example_input);
        tmp_tuple_element_3 = var_example_input;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_example_args);
        tmp_dircall_arg3_1 = var_example_args;
        tmp_dict_key_1 = mod_consts[37];
        CHECK_OBJECT(var_example_mask);
        tmp_dict_value_1 = var_example_mask;
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_34 = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        assert(var_example_output == NULL);
        var_example_output = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_23;
        tmp_dict_key_2 = mod_consts[38];
        CHECK_OBJECT(par_func);
        tmp_expression_value_23 = par_func;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[10]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_dict_arg_value_6;
            PyObject *tmp_key_value_4;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_str_arg_value_3;
            PyObject *tmp_iterable_value_5;
            PyObject *tmp_str_arg_value_4;
            PyObject *tmp_iterable_value_6;
            PyObject *tmp_str_arg_value_5;
            PyObject *tmp_iterable_value_7;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_str_arg_value_6;
            PyObject *tmp_iterable_value_8;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_str_arg_value_7;
            PyObject *tmp_iterable_value_9;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_unicode_arg_2;
            PyObject *tmp_str_arg_value_8;
            PyObject *tmp_iterable_value_10;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_unicode_arg_3;
            PyObject *tmp_str_arg_value_9;
            PyObject *tmp_iterable_value_11;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_unicode_arg_4;
            PyObject *tmp_str_arg_value_10;
            PyObject *tmp_iterable_value_12;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_unicode_arg_5;
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[39];
            CHECK_OBJECT(par_func);
            tmp_expression_value_24 = par_func;
            tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[40]);
            if (tmp_add_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_add_expr_right_2 = mod_consts[41];
            tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_func);
            tmp_expression_value_25 = par_func;
            tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[10]);
            if (tmp_add_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 261;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[42];
            CHECK_OBJECT(var_operation_names);
            tmp_dict_arg_value_6 = var_operation_names;
            CHECK_OBJECT(par_func);
            tmp_expression_value_26 = par_func;
            tmp_key_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[10]);
            if (tmp_key_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_6, tmp_key_value_4);
            Py_DECREF(tmp_key_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[43];
            tmp_str_arg_value_3 = mod_consts[44];
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT(var_operation_args);
                tmp_iter_arg_4 = var_operation_args;
                tmp_assign_source_36 = MAKE_ITERATOR(tmp_iter_arg_4);
                if (tmp_assign_source_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;
                    type_description_1 = "oooooooooooNoooocoocoo";
                    goto dict_build_exception_1;
                }
                assert(tmp_genexpr_1__$0 == NULL);
                tmp_genexpr_1__$0 = tmp_assign_source_36;
            }
            // Tried code:
            {
                struct Nuitka_CellObject *tmp_closure_1[1];

                tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

                tmp_iterable_value_5 = MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr(tmp_closure_1);

                goto try_return_handler_8;
            }
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            CHECK_OBJECT(tmp_genexpr_1__$0);
            Py_DECREF(tmp_genexpr_1__$0);
            tmp_genexpr_1__$0 = NULL;
            goto outline_result_3;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_result_3:;
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_5);
            Py_DECREF(tmp_iterable_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[45];
            tmp_str_arg_value_4 = mod_consts[44];
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT(var_operation_kwargs);
                tmp_iter_arg_5 = var_operation_kwargs;
                tmp_assign_source_37 = MAKE_ITERATOR(tmp_iter_arg_5);
                if (tmp_assign_source_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 264;
                    type_description_1 = "oooooooooooNoooocoocoo";
                    goto dict_build_exception_1;
                }
                assert(tmp_genexpr_2__$0 == NULL);
                tmp_genexpr_2__$0 = tmp_assign_source_37;
            }
            // Tried code:
            {
                struct Nuitka_CellObject *tmp_closure_2[1];

                tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);

                tmp_iterable_value_6 = MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr(tmp_closure_2);

                goto try_return_handler_9;
            }
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT(tmp_genexpr_2__$0);
            Py_DECREF(tmp_genexpr_2__$0);
            tmp_genexpr_2__$0 = NULL;
            goto outline_result_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_result_4:;
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_4, tmp_iterable_value_6);
            Py_DECREF(tmp_iterable_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[46];
            tmp_str_arg_value_5 = mod_consts[47];
            CHECK_OBJECT(var_example_input);
            tmp_unicode_arg_1 = var_example_input;
            tmp_expression_value_27 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[23]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 266;
            tmp_iterable_value_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
            Py_DECREF(tmp_called_value_12);
            if (tmp_iterable_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_5, tmp_iterable_value_7);
            Py_DECREF(tmp_iterable_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[48];
            tmp_str_arg_value_6 = mod_consts[44];
            tmp_called_value_13 = (PyObject *)&PyMap_Type;
            tmp_args_element_value_5 = (PyObject *)&PyUnicode_Type;
            CHECK_OBJECT(var_example_args);
            tmp_args_element_value_6 = var_example_args;
            frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_iterable_value_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
            }

            if (tmp_iterable_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_6, tmp_iterable_value_8);
            Py_DECREF(tmp_iterable_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[49];
            tmp_str_arg_value_7 = mod_consts[47];
            CHECK_OBJECT(var_example_mask);
            tmp_unicode_arg_2 = var_example_mask;
            tmp_expression_value_28 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[23]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 268;
            tmp_iterable_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
            Py_DECREF(tmp_called_value_14);
            if (tmp_iterable_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_7, tmp_iterable_value_9);
            Py_DECREF(tmp_iterable_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[50];
            tmp_str_arg_value_8 = mod_consts[20];
            CHECK_OBJECT(var_example_input);
            tmp_unicode_arg_3 = var_example_input;
            tmp_expression_value_29 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[28]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 270;
            tmp_iterable_value_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
            Py_DECREF(tmp_called_value_15);
            if (tmp_iterable_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_8, tmp_iterable_value_10);
            Py_DECREF(tmp_iterable_value_10);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[51];
            tmp_str_arg_value_9 = mod_consts[20];
            CHECK_OBJECT(var_example_mask);
            tmp_unicode_arg_4 = var_example_mask;
            tmp_expression_value_30 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[28]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 271;
            tmp_iterable_value_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
            Py_DECREF(tmp_called_value_16);
            if (tmp_iterable_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_9, tmp_iterable_value_11);
            Py_DECREF(tmp_iterable_value_11);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[52];
            tmp_str_arg_value_10 = mod_consts[20];
            CHECK_OBJECT(var_example_output);
            tmp_unicode_arg_5 = var_example_output;
            tmp_expression_value_31 = BUILTIN_UNICODE1(tmp_unicode_arg_5);
            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[28]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 272;
            tmp_iterable_value_12 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
            Py_DECREF(tmp_called_value_17);
            if (tmp_iterable_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_10, tmp_iterable_value_12);
            Py_DECREF(tmp_iterable_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_35);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(Nuitka_Cell_GET(var_template_data) == NULL);
        PyCell_SET(var_template_data, tmp_assign_source_35);

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_dict_arg_value_7;
        CHECK_OBJECT(par_func);
        tmp_expression_value_32 = par_func;
        tmp_key_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[10]);
        if (tmp_key_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reduction_names);
        tmp_dict_arg_value_7 = var_reduction_names;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_5);
        Py_DECREF(tmp_key_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_dictupdate_key_1;
        PyObject *tmp_dictupdate_value_1;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_dict_arg_value_8 = Nuitka_Cell_GET(var_template_data);
        assert(PyDict_Check(tmp_dict_arg_value_8));
        tmp_dictupdate_key_1 = mod_consts[53];
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_expression_value_33 = par_func;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[10]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[7]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[55]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 276;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_19, mod_consts[56], kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_dictupdate_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_dictupdate_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_8, tmp_dictupdate_key_1, tmp_dictupdate_value_1);
        Py_DECREF(tmp_dictupdate_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_dictupdate_key_1 = mod_consts[57];
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_expression_value_36 = par_func;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[10]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[7]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[58]);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 277;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_21, mod_consts[56], kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_dictupdate_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_dictupdate_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_8, tmp_dictupdate_key_1, tmp_dictupdate_value_1);
        Py_DECREF(tmp_dictupdate_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_dictupdate_key_1 = mod_consts[59];
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_expression_value_39 = par_func;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[10]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[7]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[14]);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 278;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_23, mod_consts[56], kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_dictupdate_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_dictupdate_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_8, tmp_dictupdate_key_1, tmp_dictupdate_value_1);
        Py_DECREF(tmp_dictupdate_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(par_func);
        tmp_expression_value_42 = par_func;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[10]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[60];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooooNoooocoocoo";
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
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_dictupdate_key_2;
        PyObject *tmp_dictupdate_value_2;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_dict_arg_value_9 = Nuitka_Cell_GET(var_template_data);
        assert(PyDict_Check(tmp_dict_arg_value_9));
        tmp_dictupdate_key_2 = mod_consts[61];
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_expression_value_43 = par_func;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[10]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 282;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[7]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 282;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 282;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[14]);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 282;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 282;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_25, mod_consts[56], kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 282;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[62];
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_dictupdate_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_dictupdate_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_9, tmp_dictupdate_key_2, tmp_dictupdate_value_2);
        Py_DECREF(tmp_dictupdate_value_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_6;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_dict_arg_value_10;
        CHECK_OBJECT(par_func);
        tmp_expression_value_46 = par_func;
        tmp_key_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[10]);
        if (tmp_key_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_normalization_names);
        tmp_dict_arg_value_10 = var_normalization_names;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_6);
        Py_DECREF(tmp_key_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_dictupdate_key_3;
        PyObject *tmp_dictupdate_value_3;
        PyObject *tmp_dict_arg_value_12;
        PyObject *tmp_key_value_7;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_dict_arg_value_11 = Nuitka_Cell_GET(var_template_data);
        assert(PyDict_Check(tmp_dict_arg_value_11));
        tmp_dictupdate_key_3 = mod_consts[63];
        CHECK_OBJECT(var_definitions);
        tmp_dict_arg_value_12 = var_definitions;
        CHECK_OBJECT(par_func);
        tmp_expression_value_47 = par_func;
        tmp_key_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[10]);
        if (tmp_key_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_dictupdate_value_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_12, tmp_key_value_7);
        Py_DECREF(tmp_key_value_7);
        if (tmp_dictupdate_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_11, tmp_dictupdate_key_3, tmp_dictupdate_value_3);
        Py_DECREF(tmp_dictupdate_value_3);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 286;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooNoooocoocoo";
        goto frame_exception_exit_1;
    }
    branch_end_7:;
    branch_end_5:;
    {
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dictupdate_key_4;
        PyObject *tmp_dictupdate_value_4;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_str_arg_value_11;
        PyObject *tmp_iterable_value_13;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_dict_arg_value_13 = Nuitka_Cell_GET(var_template_data);
        assert(PyDict_Check(tmp_dict_arg_value_13));
        tmp_dictupdate_key_4 = mod_consts[64];
        tmp_str_arg_value_11 = mod_consts[20];
        CHECK_OBJECT(var_arg_declarations);
        tmp_iterable_value_13 = var_arg_declarations;
        tmp_expression_value_48 = UNICODE_JOIN(tmp_str_arg_value_11, tmp_iterable_value_13);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[65]);
        Py_DECREF(tmp_expression_value_48);
        assert(!(tmp_called_value_26 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_args_element_value_16 = Nuitka_Cell_GET(var_template_data);
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 287;
        tmp_dictupdate_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_26);
        if (tmp_dictupdate_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_13, tmp_dictupdate_key_4, tmp_dictupdate_value_4);
        Py_DECREF(tmp_dictupdate_value_4);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_dictupdate_key_5;
        PyObject *tmp_dictupdate_value_5;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_str_arg_value_12;
        PyObject *tmp_iterable_value_14;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_dict_arg_value_14 = Nuitka_Cell_GET(var_template_data);
        assert(PyDict_Check(tmp_dict_arg_value_14));
        tmp_dictupdate_key_5 = mod_consts[66];
        tmp_str_arg_value_12 = mod_consts[20];
        CHECK_OBJECT(var_kwarg_declarations);
        tmp_iterable_value_14 = var_kwarg_declarations;
        tmp_expression_value_49 = UNICODE_JOIN(tmp_str_arg_value_12, tmp_iterable_value_14);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[65]);
        Py_DECREF(tmp_expression_value_49);
        assert(!(tmp_called_value_27 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
        tmp_args_element_value_17 = Nuitka_Cell_GET(var_template_data);
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 288;
        tmp_dictupdate_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_27);
        if (tmp_dictupdate_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_arg_value_14, tmp_dictupdate_key_5, tmp_dictupdate_value_5);
        Py_DECREF(tmp_dictupdate_value_5);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_dict_arg_1;
            CHECK_OBJECT(var_docstring_templates);
            tmp_dict_arg_1 = var_docstring_templates;
            tmp_iter_arg_6 = DICT_ITERITEMS(tmp_dict_arg_1);
            assert(!(tmp_iter_arg_6 == NULL));
            tmp_assign_source_39 = MAKE_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_3__$0 == NULL);
            tmp_genexpr_3__$0 = tmp_assign_source_39;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_3[3];

            tmp_closure_3[0] = Nuitka_Cell_New0(tmp_genexpr_3__$0);
            tmp_closure_3[1] = var_op_kind;
            Py_INCREF(tmp_closure_3[1]);
            tmp_closure_3[2] = var_template_data;
            Py_INCREF(tmp_closure_3[2]);

            tmp_dict_seq_1 = MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr(tmp_closure_3);

            goto try_return_handler_10;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_genexpr_3__$0);
        Py_DECREF(tmp_genexpr_3__$0);
        tmp_genexpr_3__$0 = NULL;
        goto outline_result_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        tmp_assign_source_38 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        assert(var_templates == NULL);
        var_templates = tmp_assign_source_38;
    }
    {
        PyObject *tmp_dict_arg_value_15;
        PyObject *tmp_iterable_value_15;
        CHECK_OBJECT(var_templates);
        tmp_dict_arg_value_15 = var_templates;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_dict_arg_2;
            CHECK_OBJECT(Nuitka_Cell_GET(var_template_data));
            tmp_dict_arg_2 = Nuitka_Cell_GET(var_template_data);
            tmp_iter_arg_7 = DICT_ITERITEMS(tmp_dict_arg_2);
            assert(!(tmp_iter_arg_7 == NULL));
            tmp_assign_source_40 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_4__$0 == NULL);
            tmp_genexpr_4__$0 = tmp_assign_source_40;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_4[2];

            tmp_closure_4[0] = Nuitka_Cell_New0(tmp_genexpr_4__$0);
            tmp_closure_4[1] = var_template_data;
            Py_INCREF(tmp_closure_4[1]);

            tmp_iterable_value_15 = MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr(tmp_closure_4);

            goto try_return_handler_11;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_genexpr_4__$0);
        Py_DECREF(tmp_genexpr_4__$0);
        tmp_genexpr_4__$0 = NULL;
        goto outline_result_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        assert(PyDict_Check(tmp_dict_arg_value_15));
        if (HAS_ATTR_BOOL(tmp_iterable_value_15, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_15, tmp_iterable_value_15, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_15, tmp_iterable_value_15, 1);
        }

        Py_DECREF(tmp_iterable_value_15);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(par_func);
        tmp_expression_value_50 = par_func;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[67]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_str_arg_value_13;
        PyObject *tmp_iterable_value_16;
        tmp_str_arg_value_13 = mod_consts[68];
        // Tried code:
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(var_doc_sections);
            tmp_iter_arg_8 = var_doc_sections;
            tmp_assign_source_42 = MAKE_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_1 = "oooooooooooNoooocoocoo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_43;
        }
        if (isFrameUnusable(cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4)) {
            Py_XDECREF(cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4 = MAKE_FUNCTION_FRAME(codeobj_b9c19dafd23e2e326e8b843f462b9aa9, module_torch$_masked, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4->m_type_description == NULL);
        frame_b9c19dafd23e2e326e8b843f462b9aa9_4 = cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b9c19dafd23e2e326e8b843f462b9aa9_4);
        assert(Py_REFCNT(frame_b9c19dafd23e2e326e8b843f462b9aa9_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_44 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oc";
                    exception_lineno = 297;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_45 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_sec;
                outline_2_var_sec = tmp_assign_source_45;
                Py_INCREF(outline_2_var_sec);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_string_concat_values_3;
            PyObject *tmp_tuple_element_4;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_tuple_element_4 = mod_consts[69];
            tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_format_value_3;
                PyObject *tmp_format_spec_3;
                PyObject *tmp_format_value_4;
                PyObject *tmp_format_spec_4;
                PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
                if (Nuitka_Cell_GET(var_op_kind) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 297;
                    type_description_2 = "oc";
                    goto tuple_build_exception_1;
                }

                tmp_format_value_3 = Nuitka_Cell_GET(var_op_kind);
                tmp_format_spec_3 = mod_consts[26];
                tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;
                    type_description_2 = "oc";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[71];
                PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
                CHECK_OBJECT(outline_2_var_sec);
                tmp_format_value_4 = outline_2_var_sec;
                tmp_format_spec_4 = mod_consts[26];
                tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;
                    type_description_2 = "oc";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[72];
                PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_3);
            goto try_except_handler_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_append_value_3 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_3);
            Py_DECREF(tmp_string_concat_values_3);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "oc";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "oc";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_2 = "oc";
            goto try_except_handler_13;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_iterable_value_16 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_iterable_value_16);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
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
        try_except_handler_13:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
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
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b9c19dafd23e2e326e8b843f462b9aa9_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b9c19dafd23e2e326e8b843f462b9aa9_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b9c19dafd23e2e326e8b843f462b9aa9_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b9c19dafd23e2e326e8b843f462b9aa9_4,
            type_description_2,
            outline_2_var_sec,
            var_op_kind
        );


        // Release cached frame if used for exception.
        if (frame_b9c19dafd23e2e326e8b843f462b9aa9_4 == cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4);
            cache_frame_b9c19dafd23e2e326e8b843f462b9aa9_4 = NULL;
        }

        assertFrameObject(frame_b9c19dafd23e2e326e8b843f462b9aa9_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooooooNoooocoocoo";
        goto try_except_handler_12;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_2_var_sec);
        outline_2_var_sec = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_sec);
        outline_2_var_sec = NULL;
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
        exception_lineno = 297;
        goto frame_exception_exit_1;
        outline_result_7:;
        tmp_assign_source_41 = UNICODE_JOIN(tmp_str_arg_value_13, tmp_iterable_value_16);
        Py_DECREF(tmp_iterable_value_16);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        assert(var_doc_template == NULL);
        var_doc_template = tmp_assign_source_41;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(par_func);
        tmp_expression_value_51 = par_func;
        tmp_assign_source_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[67]);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        assert(var_doc_template == NULL);
        var_doc_template = tmp_assign_source_46;
    }
    branch_end_8:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_doc_template);
        tmp_expression_value_52 = var_doc_template;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[65]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_templates);
        tmp_args_element_value_18 = var_templates;
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 300;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_28);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[67], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_54;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[74]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_expression_value_54 = par_func;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[10]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 303;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame.f_lineno = 303;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooNoooocoocoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05c910e29058e9ba8c7fe0001247d7d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05c910e29058e9ba8c7fe0001247d7d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05c910e29058e9ba8c7fe0001247d7d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05c910e29058e9ba8c7fe0001247d7d0,
        type_description_1,
        par_func,
        var_example_args,
        var_operation_args,
        var_operation_kwargs,
        var_docstring_templates,
        var_args_and_kwargs,
        var_argument_declarations,
        var_definitions,
        var_reduction_names,
        var_normalization_names,
        var_operation_names,
        NULL,
        var_example_input,
        var_example_mask,
        var_arg_declarations,
        var_kwarg_declarations,
        var_op_kind,
        var_doc_sections,
        var_example_output,
        var_template_data,
        var_templates,
        var_doc_template
    );


    // Release cached frame if used for exception.
    if (frame_05c910e29058e9ba8c7fe0001247d7d0 == cache_frame_05c910e29058e9ba8c7fe0001247d7d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05c910e29058e9ba8c7fe0001247d7d0);
        cache_frame_05c910e29058e9ba8c7fe0001247d7d0 = NULL;
    }

    assertFrameObject(frame_05c910e29058e9ba8c7fe0001247d7d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_4:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_example_args);
    Py_DECREF(var_example_args);
    var_example_args = NULL;
    CHECK_OBJECT(var_operation_args);
    Py_DECREF(var_operation_args);
    var_operation_args = NULL;
    CHECK_OBJECT(var_operation_kwargs);
    Py_DECREF(var_operation_kwargs);
    var_operation_kwargs = NULL;
    CHECK_OBJECT(var_docstring_templates);
    Py_DECREF(var_docstring_templates);
    var_docstring_templates = NULL;
    CHECK_OBJECT(var_args_and_kwargs);
    Py_DECREF(var_args_and_kwargs);
    var_args_and_kwargs = NULL;
    Py_XDECREF(var_argument_declarations);
    var_argument_declarations = NULL;
    CHECK_OBJECT(var_definitions);
    Py_DECREF(var_definitions);
    var_definitions = NULL;
    CHECK_OBJECT(var_reduction_names);
    Py_DECREF(var_reduction_names);
    var_reduction_names = NULL;
    CHECK_OBJECT(var_normalization_names);
    Py_DECREF(var_normalization_names);
    var_normalization_names = NULL;
    CHECK_OBJECT(var_operation_names);
    Py_DECREF(var_operation_names);
    var_operation_names = NULL;
    CHECK_OBJECT(var_example_input);
    Py_DECREF(var_example_input);
    var_example_input = NULL;
    CHECK_OBJECT(var_example_mask);
    Py_DECREF(var_example_mask);
    var_example_mask = NULL;
    CHECK_OBJECT(var_arg_declarations);
    Py_DECREF(var_arg_declarations);
    var_arg_declarations = NULL;
    CHECK_OBJECT(var_kwarg_declarations);
    Py_DECREF(var_kwarg_declarations);
    var_kwarg_declarations = NULL;
    CHECK_OBJECT(var_op_kind);
    Py_DECREF(var_op_kind);
    var_op_kind = NULL;
    CHECK_OBJECT(var_doc_sections);
    Py_DECREF(var_doc_sections);
    var_doc_sections = NULL;
    CHECK_OBJECT(var_example_output);
    Py_DECREF(var_example_output);
    var_example_output = NULL;
    CHECK_OBJECT(var_template_data);
    Py_DECREF(var_template_data);
    var_template_data = NULL;
    CHECK_OBJECT(var_templates);
    Py_DECREF(var_templates);
    var_templates = NULL;
    CHECK_OBJECT(var_doc_template);
    Py_DECREF(var_doc_template);
    var_doc_template = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_example_args);
    var_example_args = NULL;
    Py_XDECREF(var_operation_args);
    var_operation_args = NULL;
    Py_XDECREF(var_operation_kwargs);
    var_operation_kwargs = NULL;
    CHECK_OBJECT(var_docstring_templates);
    Py_DECREF(var_docstring_templates);
    var_docstring_templates = NULL;
    CHECK_OBJECT(var_args_and_kwargs);
    Py_DECREF(var_args_and_kwargs);
    var_args_and_kwargs = NULL;
    Py_XDECREF(var_argument_declarations);
    var_argument_declarations = NULL;
    CHECK_OBJECT(var_definitions);
    Py_DECREF(var_definitions);
    var_definitions = NULL;
    CHECK_OBJECT(var_reduction_names);
    Py_DECREF(var_reduction_names);
    var_reduction_names = NULL;
    CHECK_OBJECT(var_normalization_names);
    Py_DECREF(var_normalization_names);
    var_normalization_names = NULL;
    CHECK_OBJECT(var_operation_names);
    Py_DECREF(var_operation_names);
    var_operation_names = NULL;
    Py_XDECREF(var_example_input);
    var_example_input = NULL;
    Py_XDECREF(var_example_mask);
    var_example_mask = NULL;
    Py_XDECREF(var_arg_declarations);
    var_arg_declarations = NULL;
    Py_XDECREF(var_kwarg_declarations);
    var_kwarg_declarations = NULL;
    CHECK_OBJECT(var_op_kind);
    Py_DECREF(var_op_kind);
    var_op_kind = NULL;
    Py_XDECREF(var_doc_sections);
    var_doc_sections = NULL;
    Py_XDECREF(var_example_output);
    var_example_output = NULL;
    CHECK_OBJECT(var_template_data);
    Py_DECREF(var_template_data);
    var_template_data = NULL;
    Py_XDECREF(var_templates);
    var_templates = NULL;
    Py_XDECREF(var_doc_template);
    var_doc_template = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr_locals {
    PyObject *var_a;
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

static PyObject *torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_a = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_dbc00c0bdbbd5e985043b578bd7b1db2, module_torch$_masked, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 263;
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
            PyObject *old = generator_heap->var_a;
            generator_heap->var_a = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_a);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_a);
        tmp_expression_value_3 = generator_heap->var_a;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 263;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[24]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 263;
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
            generator_heap->var_a
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

    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;
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
    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr_context,
        module_torch$_masked,
        mod_consts[76],
#if PYTHON_VERSION >= 0x350
        mod_consts[77],
#endif
        codeobj_dbc00c0bdbbd5e985043b578bd7b1db2,
        closure,
        1,
        sizeof(struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__1_genexpr_locals)
    );
}



struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr_locals {
    PyObject *var_a;
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

static PyObject *torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr_locals *generator_heap = (struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_a = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_5abb941b1da17651e50cafbb57e75125, module_torch$_masked, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 264;
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
            PyObject *old = generator_heap->var_a;
            generator_heap->var_a = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_a);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_a);
        tmp_expression_value_3 = generator_heap->var_a;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 264;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[24]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 264;
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
            generator_heap->var_a
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

    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;
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
    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr_context,
        module_torch$_masked,
        mod_consts[76],
#if PYTHON_VERSION >= 0x350
        mod_consts[77],
#endif
        codeobj_5abb941b1da17651e50cafbb57e75125,
        closure,
        1,
        sizeof(struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__2_genexpr_locals)
    );
}



struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr_locals {
    PyObject *var_k;
    PyObject *var_v;
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

static PyObject *torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr_locals *generator_heap = (struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_v = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_5c83dbaaa7456422cf5040b9e46ae813, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noocc";
                generator_heap->exception_lineno = 291;
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


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "Noocc";
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


            generator_heap->type_description_1 = "Noocc";
            generator_heap->exception_lineno = 291;
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


            generator_heap->type_description_1 = "Noocc";
            generator_heap->exception_lineno = 291;
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

                    generator_heap->type_description_1 = "Noocc";
                    generator_heap->exception_lineno = 291;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[19];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noocc";
            generator_heap->exception_lineno = 291;
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
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_k);
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
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_expression_value_1 = generator_heap->var_k;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[78]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Noocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[70]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Noocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Noocc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Noocc";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_tuple_element_1 = generator_heap->var_k;
        tmp_expression_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_v);
            tmp_expression_value_3 = generator_heap->var_v;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[65]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 291;
                generator_heap->type_description_1 = "Noocc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[79]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 291;
                generator_heap->type_description_1 = "Noocc";
                goto tuple_build_exception_1;
            }

            tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
            generator->m_frame->m_frame.f_lineno = 291;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 291;
                generator_heap->type_description_1 = "Noocc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_expression_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "Noocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 291;
        generator_heap->type_description_1 = "Noocc";
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
            generator_heap->var_k,
            generator_heap->var_v,
            generator->m_closure[1],
            generator->m_closure[2]
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

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
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
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr_context,
        module_torch$_masked,
        mod_consts[76],
#if PYTHON_VERSION >= 0x350
        mod_consts[77],
#endif
        codeobj_5c83dbaaa7456422cf5040b9e46ae813,
        closure,
        3,
        sizeof(struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__3_genexpr_locals)
    );
}



struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr_locals {
    PyObject *var_k;
    PyObject *var_v;
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

static PyObject *torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr_locals *generator_heap = (struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_v = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_1ff53f33d9d23a27f43dd8e2b15addfe, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Nooc";
                generator_heap->exception_lineno = 293;
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


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "Nooc";
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


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 293;
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


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 293;
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

                    generator_heap->type_description_1 = "Nooc";
                    generator_heap->exception_lineno = 293;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[19];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 293;
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
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_k);
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
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_tuple_element_1 = generator_heap->var_k;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_v);
            tmp_isinstance_inst_1 = generator_heap->var_v;
            tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
            generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 293;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(generator_heap->var_v);
            tmp_expression_value_2 = generator_heap->var_v;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 293;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[79]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 293;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }

            tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
            generator->m_frame->m_frame.f_lineno = 293;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 293;
                generator_heap->type_description_1 = "Nooc";
                goto tuple_build_exception_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(generator_heap->var_v);
            tmp_tuple_element_1 = generator_heap->var_v;
            Py_INCREF(tmp_tuple_element_1);
            condexpr_end_1:;
            PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 293;
        generator_heap->type_description_1 = "Nooc";
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
            generator_heap->var_k,
            generator_heap->var_v,
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

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
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
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr_context,
        module_torch$_masked,
        mod_consts[76],
#if PYTHON_VERSION >= 0x350
        mod_consts[77],
#endif
        codeobj_1ff53f33d9d23a27f43dd8e2b15addfe,
        closure,
        2,
        sizeof(struct torch$_masked$$$function__1__apply_docstring_templates$$$genexpr__4_genexpr_locals)
    );
}


static PyObject *impl_torch$_masked$$$function__2__reduction_identity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_op_name = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *var_dtype = NULL;
    PyObject *var_device = NULL;
    PyObject *var_ord = NULL;
    struct Nuitka_FrameObject *frame_634cc065afb5a1f1bc0c3c8b784ed04e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e)) {
        Py_XDECREF(cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e = MAKE_FUNCTION_FRAME(codeobj_634cc065afb5a1f1bc0c3c8b784ed04e, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_type_description == NULL);
    frame_634cc065afb5a1f1bc0c3c8b784ed04e = cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_634cc065afb5a1f1bc0c3c8b784ed04e);
    assert(Py_REFCNT(frame_634cc065afb5a1f1bc0c3c8b784ed04e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_input);
        tmp_expression_value_2 = par_input;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[81]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_op_name);
        tmp_expression_value_4 = par_op_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 324;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[83]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[84];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, -1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_op_name;
            assert(old != NULL);
            par_op_name = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_1 = par_op_name;
        tmp_cmp_expr_right_1 = mod_consts[85];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
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
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_value_0_1 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_value_1_1 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 326;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[56], kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_2 = par_op_name;
        tmp_cmp_expr_right_2 = mod_consts[87];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[7]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_value_0_2 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_value_1_2 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 328;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};
            tmp_return_value = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[18], kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_3 = par_op_name;
        tmp_cmp_expr_right_3 = mod_consts[88];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_1 = par_input;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 330;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[89], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 330;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[7]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[90]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_1 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_1 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 331;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_9;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 332;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[91], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_dtype);
        tmp_cmp_expr_left_4 = var_dtype;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[55]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[7]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 333;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_args_element_value_3 = var_dtype;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 333;
        tmp_expression_value_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[92], tmp_args_element_value_3);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 333;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[93]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 333;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_2 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_2 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 333;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_5 = par_op_name;
        tmp_cmp_expr_right_5 = mod_consts[94];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_4 = par_input;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 335;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[89], tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 335;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[7]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 336;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[90]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 336;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_3 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_3 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 336;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_4;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_14;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_5 = par_input;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 337;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[91], tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_dtype);
        tmp_cmp_expr_left_6 = var_dtype;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[55]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_8 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[7]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_args_element_value_6 = var_dtype;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 338;
        tmp_expression_value_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[92], tmp_args_element_value_6);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[95]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_4 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_4 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 338;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_8:;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_7 = par_op_name;
        tmp_cmp_expr_right_7 = mod_consts[96];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_8 = par_op_name;
        tmp_cmp_expr_right_8 = mod_consts[60];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_4;
        bool tmp_condition_result_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_args);
        tmp_condition_result_11 = CHECK_IF_TRUE(par_args) == 1;
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_args);
        tmp_expression_value_17 = par_args;
        tmp_subscript_value_2 = mod_consts[25];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_2, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_4 = mod_consts[97];
        Py_INCREF(tmp_assign_source_4);
        condexpr_end_1:;
        assert(var_ord == NULL);
        var_ord = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_ord);
        tmp_cmp_expr_left_9 = var_ord;
        tmp_cmp_expr_right_9 = mod_consts[62];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_7 = par_input;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 349;
        tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[89], tmp_args_element_value_7);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_18;
        tmp_raise_type_1 = PyExc_AssertionError;
        CHECK_OBJECT(par_input);
        tmp_expression_value_18 = par_input;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[80]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 349;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_5;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[7]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[90]);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_5 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_5 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 350;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_arg_value_0_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_11:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[7]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_value_0_3 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_value_1_3 = var_device;
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 351;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};
            tmp_return_value = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_9, mod_consts[56], kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_10 = par_op_name;
        tmp_cmp_expr_right_10 = mod_consts[98];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_13:;
    branch_end_10:;
    branch_end_9:;
    branch_end_6:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[99];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_op_name);
            tmp_format_value_1 = par_op_name;
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_dtype);
            tmp_format_value_2 = var_dtype;
            tmp_format_spec_2 = mod_consts[26];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame.f_lineno = 354;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 354;
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
        exception_tb = MAKE_TRACEBACK(frame_634cc065afb5a1f1bc0c3c8b784ed04e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_634cc065afb5a1f1bc0c3c8b784ed04e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_634cc065afb5a1f1bc0c3c8b784ed04e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_634cc065afb5a1f1bc0c3c8b784ed04e,
        type_description_1,
        par_op_name,
        par_input,
        par_args,
        var_dtype,
        var_device,
        var_ord
    );


    // Release cached frame if used for exception.
    if (frame_634cc065afb5a1f1bc0c3c8b784ed04e == cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e);
        cache_frame_634cc065afb5a1f1bc0c3c8b784ed04e = NULL;
    }

    assertFrameObject(frame_634cc065afb5a1f1bc0c3c8b784ed04e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_op_name);
    Py_DECREF(par_op_name);
    par_op_name = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_ord);
    var_ord = NULL;
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

    Py_XDECREF(par_op_name);
    par_op_name = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_ord);
    var_ord = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__3__canonical_dim(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dim = python_pars[0];
    PyObject *par_ndim = python_pars[1];
    PyObject *var_dims = NULL;
    PyObject *var_dim_ = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d30d7486a0393eedf371211d6a897557;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d30d7486a0393eedf371211d6a897557 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_dims == NULL);
        var_dims = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d30d7486a0393eedf371211d6a897557)) {
        Py_XDECREF(cache_frame_d30d7486a0393eedf371211d6a897557);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d30d7486a0393eedf371211d6a897557 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d30d7486a0393eedf371211d6a897557 = MAKE_FUNCTION_FRAME(codeobj_d30d7486a0393eedf371211d6a897557, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d30d7486a0393eedf371211d6a897557->m_type_description == NULL);
    frame_d30d7486a0393eedf371211d6a897557 = cache_frame_d30d7486a0393eedf371211d6a897557;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d30d7486a0393eedf371211d6a897557);
    assert(Py_REFCNT(frame_d30d7486a0393eedf371211d6a897557) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_dim);
        tmp_cmp_expr_left_1 = par_dim;
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
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(par_ndim);
        tmp_xrange_low_1 = par_ndim;
        tmp_tuple_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[95]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_ndim);
        tmp_args_element_value_1 = par_ndim;
        tmp_args_element_value_2 = mod_consts[31];
        frame_d30d7486a0393eedf371211d6a897557->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ndim;
            assert(old != NULL);
            par_ndim = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_dim);
        tmp_isinstance_inst_1 = par_dim;
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_dim);
        tmp_tuple_element_1 = par_dim;
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_dim);
        tmp_assign_source_3 = par_dim;
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_1:;
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_dim_);
        tmp_iter_arg_1 = var_dim_;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 365;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_6;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_d);
        tmp_cmp_expr_left_2 = var_d;
        if (var_dims == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_2 = var_dims;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
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
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[104];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_d);
            tmp_format_value_1 = var_d;
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_d30d7486a0393eedf371211d6a897557->m_frame.f_lineno = 367;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 367;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_d);
        tmp_cmp_expr_left_3 = var_d;
        if (par_ndim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_3 = par_ndim;
        tmp_or_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_d);
        tmp_cmp_expr_left_4 = var_d;
        if (par_ndim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_operand_value_1 = par_ndim;
        tmp_cmp_expr_right_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[107];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            if (par_ndim == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }

            tmp_operand_value_2 = par_ndim;
            tmp_format_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[26];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            if (par_ndim == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }

            tmp_sub_expr_left_1 = par_ndim;
            tmp_sub_expr_right_1 = mod_consts[31];
            tmp_format_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[26];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
            CHECK_OBJECT(var_d);
            tmp_format_value_4 = var_d;
            tmp_format_spec_4 = mod_consts[26];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[109];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_d30d7486a0393eedf371211d6a897557->m_frame.f_lineno = 369;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IndexError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 369;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        if (var_dims == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = var_dims;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d);
        tmp_mod_expr_left_1 = var_d;
        if (par_ndim == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = par_ndim;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_d30d7486a0393eedf371211d6a897557->m_frame.f_lineno = 370;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 365;
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
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[110]);
        assert(tmp_called_value_3 != NULL);
        if (var_dims == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_dims;
        frame_d30d7486a0393eedf371211d6a897557->m_frame.f_lineno = 371;
        tmp_tuple_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_tuple_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_2);
        Py_DECREF(tmp_tuple_arg_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
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
        exception_tb = MAKE_TRACEBACK(frame_d30d7486a0393eedf371211d6a897557, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d30d7486a0393eedf371211d6a897557->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d30d7486a0393eedf371211d6a897557, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d30d7486a0393eedf371211d6a897557,
        type_description_1,
        par_dim,
        par_ndim,
        var_dims,
        var_dim_,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_d30d7486a0393eedf371211d6a897557 == cache_frame_d30d7486a0393eedf371211d6a897557) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d30d7486a0393eedf371211d6a897557);
        cache_frame_d30d7486a0393eedf371211d6a897557 = NULL;
    }

    assertFrameObject(frame_d30d7486a0393eedf371211d6a897557);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_ndim);
    par_ndim = NULL;
    Py_XDECREF(var_dims);
    var_dims = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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

    Py_XDECREF(par_ndim);
    par_ndim = NULL;
    Py_XDECREF(var_dims);
    var_dims = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__4__input_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_mask = NULL;
    PyObject *var_inmask = NULL;
    struct Nuitka_FrameObject *frame_7d825c3d9f9d7c33760125795560f88a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d825c3d9f9d7c33760125795560f88a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[37];
        tmp_assign_source_1 = DICT_GET_ITEM0(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_1 == NULL) {
            tmp_assign_source_1 = Py_None;
        }
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_mask == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_mask = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_7d825c3d9f9d7c33760125795560f88a)) {
        Py_XDECREF(cache_frame_7d825c3d9f9d7c33760125795560f88a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d825c3d9f9d7c33760125795560f88a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d825c3d9f9d7c33760125795560f88a = MAKE_FUNCTION_FRAME(codeobj_7d825c3d9f9d7c33760125795560f88a, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d825c3d9f9d7c33760125795560f88a->m_type_description == NULL);
    frame_7d825c3d9f9d7c33760125795560f88a = cache_frame_7d825c3d9f9d7c33760125795560f88a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d825c3d9f9d7c33760125795560f88a);
    assert(Py_REFCNT(frame_7d825c3d9f9d7c33760125795560f88a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_mask);
        tmp_cmp_expr_left_1 = var_mask;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[112]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_expression_value_2 = par_input;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[113]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[114]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 381;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_mask);
        tmp_expression_value_4 = var_mask;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[106]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_expression_value_5 = par_input;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[106]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 382;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[115]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask);
        tmp_called_instance_1 = var_mask;
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 383;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[116]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_expression_value_8 = par_input;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[113]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[114]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 383;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_mask);
        tmp_expression_value_10 = var_mask;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[106]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_expression_value_11 = par_input;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[106]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 384;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[117];
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 385;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IndexError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 385;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_mask);
        tmp_expression_value_12 = var_mask;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[113]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_expression_value_13 = par_input;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[113]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[115]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask);
        tmp_called_instance_2 = var_mask;
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 387;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[116]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_expression_value_16 = par_input;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[113]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[13]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[114]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 387;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_4;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_mask);
        tmp_expression_value_18 = var_mask;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[13]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 389;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[114]);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 389;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7d825c3d9f9d7c33760125795560f88a->m_frame.f_lineno = 389;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_5;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d825c3d9f9d7c33760125795560f88a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d825c3d9f9d7c33760125795560f88a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d825c3d9f9d7c33760125795560f88a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d825c3d9f9d7c33760125795560f88a,
        type_description_1,
        par_input,
        par_args,
        par_kwargs,
        var_mask,
        var_inmask
    );


    // Release cached frame if used for exception.
    if (frame_7d825c3d9f9d7c33760125795560f88a == cache_frame_7d825c3d9f9d7c33760125795560f88a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d825c3d9f9d7c33760125795560f88a);
        cache_frame_7d825c3d9f9d7c33760125795560f88a = NULL;
    }

    assertFrameObject(frame_7d825c3d9f9d7c33760125795560f88a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_inmask);
    tmp_return_value = var_inmask;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    CHECK_OBJECT(var_inmask);
    Py_DECREF(var_inmask);
    var_inmask = NULL;
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

    CHECK_OBJECT(var_mask);
    Py_DECREF(var_mask);
    var_mask = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
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


static PyObject *impl_torch$_masked$$$function__5__output_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_op = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    nuitka_bool var_is_reduction = NUITKA_BOOL_UNASSIGNED;
    nuitka_bool var_is_normalization = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_dim = NULL;
    PyObject *var_outmask = NULL;
    PyObject *var_keepdim = NULL;
    PyObject *var_dim_ = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7)) {
        Py_XDECREF(cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7 = MAKE_FUNCTION_FRAME(codeobj_05ef8f3fe4d0db1afc0ef76f5bdb86d7, module_torch$_masked, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_type_description == NULL);
    frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7 = cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7);
    assert(Py_REFCNT(frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[119]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_op);
        tmp_args_element_value_1 = par_op;
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame.f_lineno = 396;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 396;
            type_description_1 = "oooobbooooo";
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
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_op);
        tmp_expression_value_1 = par_op;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = PySet_New(mod_consts[120]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_is_reduction = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_op);
        tmp_expression_value_2 = par_op;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = PySet_New(mod_consts[121]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_is_normalization = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        assert(var_is_reduction != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_2 = var_is_reduction == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_op);
        tmp_expression_value_3 = par_op;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[60];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooobbooooo";
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
        bool tmp_condition_result_4;
        CHECK_OBJECT(par_args);
        tmp_condition_result_4 = CHECK_IF_TRUE(par_args) == 1;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_args);
        tmp_expression_value_4 = par_args;
        tmp_subscript_value_1 = mod_consts[122];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(par_args);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_args);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_args);
        tmp_expression_value_5 = par_args;
        tmp_subscript_value_2 = mod_consts[25];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[123];
        tmp_assign_source_4 = DICT_GET_ITEM0(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_4 == NULL) {
            tmp_assign_source_4 = Py_None;
        }
        assert(!(tmp_assign_source_4 == NULL));
        Py_INCREF(tmp_assign_source_4);
        condexpr_end_1:;
        assert(var_dim == NULL);
        var_dim = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_5 = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outmask == NULL);
        var_outmask = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_2 = par_kwargs;
        tmp_key_value_2 = mod_consts[125];
        tmp_default_value_1 = Py_False;
        tmp_assign_source_6 = DICT_GET_ITEM1(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_6 == NULL) {
            tmp_assign_source_6 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_6);
        }
        assert(!(tmp_assign_source_6 == NULL));
        assert(var_keepdim == NULL);
        var_keepdim = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dim);
        tmp_args_element_value_2 = var_dim;
        CHECK_OBJECT(par_input);
        tmp_expression_value_6 = par_input;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[106]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT(var_dim_);
        tmp_args_element_value_4 = var_dim_;
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame.f_lineno = 408;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooobbooooo";
                exception_lineno = 408;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_10;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_value_value_1;
        if (var_outmask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "oooobbooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_outmask;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[128]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooobbooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d);
        tmp_kw_call_value_0_1 = var_d;
        CHECK_OBJECT(var_keepdim);
        tmp_value_value_1 = var_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 409;
            type_description_1 = "oooobbooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_1_1 = (tmp_res != 0) ? Py_True : Py_False;
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame.f_lineno = 409;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[129]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooobbooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_outmask;
            var_outmask = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 408;
        type_description_1 = "oooobbooooo";
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
    if (var_outmask == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 410;
        type_description_1 = "oooobbooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_outmask;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_6;
        assert(var_is_normalization != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_6 = var_is_normalization == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dircall_arg4_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_tuple_element_2 = par_input;
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[130];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_op);
            tmp_expression_value_8 = par_op;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooobbooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooobbooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_op);
            tmp_expression_value_9 = par_op;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooobbooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[26];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooobbooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[109];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame.f_lineno = 414;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 414;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooobbooooo";
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[131];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_op);
            tmp_type_arg_1 = par_op;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oooobbooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[26];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oooobbooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[132];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooobbooooo";
            goto frame_exception_exit_1;
        }
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame.f_lineno = 416;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 416;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooobbooooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7,
        type_description_1,
        par_op,
        par_input,
        par_args,
        par_kwargs,
        (int)var_is_reduction,
        (int)var_is_normalization,
        var_dim,
        var_outmask,
        var_keepdim,
        var_dim_,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7 == cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7);
        cache_frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7 = NULL;
    }

    assertFrameObject(frame_05ef8f3fe4d0db1afc0ef76f5bdb86d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    assert(var_is_reduction != NUITKA_BOOL_UNASSIGNED);
    var_is_reduction = NUITKA_BOOL_UNASSIGNED;
    assert(var_is_normalization != NUITKA_BOOL_UNASSIGNED);
    var_is_normalization = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_dim);
    var_dim = NULL;
    Py_XDECREF(var_outmask);
    var_outmask = NULL;
    Py_XDECREF(var_keepdim);
    var_keepdim = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    var_is_reduction = NUITKA_BOOL_UNASSIGNED;
    var_is_normalization = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_dim);
    var_dim = NULL;
    Py_XDECREF(var_outmask);
    var_outmask = NULL;
    Py_XDECREF(var_keepdim);
    var_keepdim = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__6_sum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_keepdim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *par_mask = python_pars[4];
    PyObject *var_mask_input = NULL;
    PyObject *var_dim_ = NULL;
    struct Nuitka_FrameObject *frame_cd0bc0dff64d7a3f92e3467530bc71bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd)) {
        Py_XDECREF(cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd = MAKE_FUNCTION_FRAME(codeobj_cd0bc0dff64d7a3f92e3467530bc71bd, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_type_description == NULL);
    frame_cd0bc0dff64d7a3f92e3467530bc71bd = cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cd0bc0dff64d7a3f92e3467530bc71bd);
    assert(Py_REFCNT(frame_cd0bc0dff64d7a3f92e3467530bc71bd) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_mask);
        tmp_cmp_expr_left_3 = par_mask;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = par_input;
        Py_INCREF(tmp_assign_source_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[137]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask);
        tmp_args_element_value_1 = par_mask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_input;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_input;
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_frame.f_lineno = 433;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[138], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_input;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[106]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[85]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_kw_call_arg_value_0_1 = var_mask_input;
        CHECK_OBJECT(var_dim_);
        tmp_kw_call_arg_value_1_1 = var_dim_;
        CHECK_OBJECT(par_keepdim);
        tmp_value_value_1 = par_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_1 = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_1 = par_dtype;
        frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_frame.f_lineno = 435;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[139];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 437;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_7 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_frame.f_lineno = 437;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 437;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd0bc0dff64d7a3f92e3467530bc71bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd0bc0dff64d7a3f92e3467530bc71bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd0bc0dff64d7a3f92e3467530bc71bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd0bc0dff64d7a3f92e3467530bc71bd,
        type_description_1,
        par_input,
        par_dim,
        par_keepdim,
        par_dtype,
        par_mask,
        var_mask_input,
        var_dim_
    );


    // Release cached frame if used for exception.
    if (frame_cd0bc0dff64d7a3f92e3467530bc71bd == cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd);
        cache_frame_cd0bc0dff64d7a3f92e3467530bc71bd = NULL;
    }

    assertFrameObject(frame_cd0bc0dff64d7a3f92e3467530bc71bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
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
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__7_prod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_keepdim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *par_mask = python_pars[4];
    PyObject *var_mask_input = NULL;
    PyObject *var_dim_ = NULL;
    PyObject *var_result = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_90fabf1b0ca7bad00ce877a9ab21f83b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b)) {
        Py_XDECREF(cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b = MAKE_FUNCTION_FRAME(codeobj_90fabf1b0ca7bad00ce877a9ab21f83b, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_type_description == NULL);
    frame_90fabf1b0ca7bad00ce877a9ab21f83b = cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90fabf1b0ca7bad00ce877a9ab21f83b);
    assert(Py_REFCNT(frame_90fabf1b0ca7bad00ce877a9ab21f83b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[135]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 448;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[136]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 448;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_mask);
        tmp_cmp_expr_left_2 = par_mask;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_input);
        tmp_assign_source_1 = par_input;
        Py_INCREF(tmp_assign_source_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[137]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask);
        tmp_args_element_value_1 = par_mask;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_4 = par_input;
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 449;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[141], tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_5 = par_dim;
        CHECK_OBJECT(par_input);
        tmp_expression_value_4 = par_input;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[106]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_mask_input);
        tmp_assign_source_3 = var_mask_input;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_result = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT(var_dim_);
        tmp_args_element_value_7 = var_dim_;
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 454;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_7);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 454;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_6;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_value_value_1;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_result;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[87]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d);
        tmp_kw_call_value_0_1 = var_d;
        CHECK_OBJECT(par_keepdim);
        tmp_value_value_1 = par_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 455;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_1_1 = (tmp_res != 0) ? Py_True : Py_False;
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 455;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[129]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 454;
        type_description_1 = "ooooooooo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_3 = par_dtype;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_2;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_result;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_value_0_2 = par_dtype;
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 457;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_assign_source_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 458;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[143];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_input);
            tmp_expression_value_7 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame.f_lineno = 460;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 460;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_90fabf1b0ca7bad00ce877a9ab21f83b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90fabf1b0ca7bad00ce877a9ab21f83b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90fabf1b0ca7bad00ce877a9ab21f83b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90fabf1b0ca7bad00ce877a9ab21f83b,
        type_description_1,
        par_input,
        par_dim,
        par_keepdim,
        par_dtype,
        par_mask,
        var_mask_input,
        var_dim_,
        var_result,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_90fabf1b0ca7bad00ce877a9ab21f83b == cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b);
        cache_frame_90fabf1b0ca7bad00ce877a9ab21f83b = NULL;
    }

    assertFrameObject(frame_90fabf1b0ca7bad00ce877a9ab21f83b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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

    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__8_amax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_keepdim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *par_mask = python_pars[4];
    PyObject *var_mask_input = NULL;
    PyObject *var_identity = NULL;
    PyObject *var_dim_ = NULL;
    struct Nuitka_FrameObject *frame_8ae77c4b3fd507b7d463b96abbe1901b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8ae77c4b3fd507b7d463b96abbe1901b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8ae77c4b3fd507b7d463b96abbe1901b)) {
        Py_XDECREF(cache_frame_8ae77c4b3fd507b7d463b96abbe1901b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ae77c4b3fd507b7d463b96abbe1901b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ae77c4b3fd507b7d463b96abbe1901b = MAKE_FUNCTION_FRAME(codeobj_8ae77c4b3fd507b7d463b96abbe1901b, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ae77c4b3fd507b7d463b96abbe1901b->m_type_description == NULL);
    frame_8ae77c4b3fd507b7d463b96abbe1901b = cache_frame_8ae77c4b3fd507b7d463b96abbe1901b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ae77c4b3fd507b7d463b96abbe1901b);
    assert(Py_REFCNT(frame_8ae77c4b3fd507b7d463b96abbe1901b) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_mask);
        tmp_cmp_expr_left_3 = par_mask;
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
        PyObject *tmp_assign_source_2;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = par_input;
        assert(var_mask_input == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_mask_input = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[144]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(0);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[88];
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_input;
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_identity == NULL);
        var_identity = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[137]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask);
        tmp_args_element_value_5 = par_mask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_input;
        CHECK_OBJECT(var_identity);
        tmp_args_element_value_7 = var_identity;
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_4;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_8 = par_dim;
        CHECK_OBJECT(var_mask_input);
        tmp_expression_value_6 = var_mask_input;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[106]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_value_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[88]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_args_element_value_10 = var_mask_input;
        CHECK_OBJECT(var_dim_);
        tmp_args_element_value_11 = var_dim_;
        CHECK_OBJECT(par_keepdim);
        tmp_value_value_1 = par_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 489;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_expression_value_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[13]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_value_0_1 = par_dtype;
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 489;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[145];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 491;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_9 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame.f_lineno = 491;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 491;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ae77c4b3fd507b7d463b96abbe1901b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ae77c4b3fd507b7d463b96abbe1901b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ae77c4b3fd507b7d463b96abbe1901b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ae77c4b3fd507b7d463b96abbe1901b,
        type_description_1,
        par_input,
        par_dim,
        par_keepdim,
        par_dtype,
        par_mask,
        var_mask_input,
        var_identity,
        var_dim_
    );


    // Release cached frame if used for exception.
    if (frame_8ae77c4b3fd507b7d463b96abbe1901b == cache_frame_8ae77c4b3fd507b7d463b96abbe1901b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ae77c4b3fd507b7d463b96abbe1901b);
        cache_frame_8ae77c4b3fd507b7d463b96abbe1901b = NULL;
    }

    assertFrameObject(frame_8ae77c4b3fd507b7d463b96abbe1901b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_identity);
    var_identity = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
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
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_identity);
    var_identity = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__9_amin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_keepdim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *par_mask = python_pars[4];
    PyObject *var_mask_input = NULL;
    PyObject *var_identity = NULL;
    PyObject *var_dim_ = NULL;
    struct Nuitka_FrameObject *frame_b2bea1024b79f3a2cc0d00b06cdc1c33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33)) {
        Py_XDECREF(cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33 = MAKE_FUNCTION_FRAME(codeobj_b2bea1024b79f3a2cc0d00b06cdc1c33, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_type_description == NULL);
    frame_b2bea1024b79f3a2cc0d00b06cdc1c33 = cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2bea1024b79f3a2cc0d00b06cdc1c33);
    assert(Py_REFCNT(frame_b2bea1024b79f3a2cc0d00b06cdc1c33) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_mask);
        tmp_cmp_expr_left_3 = par_mask;
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
        PyObject *tmp_assign_source_2;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = par_input;
        assert(var_mask_input == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_mask_input = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 517;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[144]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(0);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 517;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[94];
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 517;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_input;
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 517;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_identity == NULL);
        var_identity = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[137]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask);
        tmp_args_element_value_5 = par_mask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_input;
        CHECK_OBJECT(var_identity);
        tmp_args_element_value_7 = var_identity;
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_4;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_8 = par_dim;
        CHECK_OBJECT(var_mask_input);
        tmp_expression_value_6 = var_mask_input;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[106]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_value_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[94]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_args_element_value_10 = var_mask_input;
        CHECK_OBJECT(var_dim_);
        tmp_args_element_value_11 = var_dim_;
        CHECK_OBJECT(par_keepdim);
        tmp_value_value_1 = par_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 520;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_expression_value_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[13]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_value_0_1 = par_dtype;
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 520;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[147];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 522;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_9 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 522;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 522;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame.f_lineno = 522;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 522;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2bea1024b79f3a2cc0d00b06cdc1c33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2bea1024b79f3a2cc0d00b06cdc1c33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2bea1024b79f3a2cc0d00b06cdc1c33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2bea1024b79f3a2cc0d00b06cdc1c33,
        type_description_1,
        par_input,
        par_dim,
        par_keepdim,
        par_dtype,
        par_mask,
        var_mask_input,
        var_identity,
        var_dim_
    );


    // Release cached frame if used for exception.
    if (frame_b2bea1024b79f3a2cc0d00b06cdc1c33 == cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33);
        cache_frame_b2bea1024b79f3a2cc0d00b06cdc1c33 = NULL;
    }

    assertFrameObject(frame_b2bea1024b79f3a2cc0d00b06cdc1c33);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_identity);
    var_identity = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
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
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_identity);
    var_identity = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__10_mean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_keepdim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *par_mask = python_pars[4];
    PyObject *var_inmask = NULL;
    PyObject *var_count = NULL;
    PyObject *var_total = NULL;
    struct Nuitka_FrameObject *frame_dfcf4b68b94cdbc2188e974cf164fe18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dfcf4b68b94cdbc2188e974cf164fe18 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dfcf4b68b94cdbc2188e974cf164fe18)) {
        Py_XDECREF(cache_frame_dfcf4b68b94cdbc2188e974cf164fe18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dfcf4b68b94cdbc2188e974cf164fe18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dfcf4b68b94cdbc2188e974cf164fe18 = MAKE_FUNCTION_FRAME(codeobj_dfcf4b68b94cdbc2188e974cf164fe18, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dfcf4b68b94cdbc2188e974cf164fe18->m_type_description == NULL);
    frame_dfcf4b68b94cdbc2188e974cf164fe18 = cache_frame_dfcf4b68b94cdbc2188e974cf164fe18;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dfcf4b68b94cdbc2188e974cf164fe18);
    assert(Py_REFCNT(frame_dfcf4b68b94cdbc2188e974cf164fe18) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 549;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 549;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 550;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_input;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_0_1 = par_mask;
        frame_dfcf4b68b94cdbc2188e974cf164fe18->m_frame.f_lineno = 550;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[148]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inmask);
        tmp_expression_value_4 = var_inmask;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[112]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_input;
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[113]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[149]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfcf4b68b94cdbc2188e974cf164fe18->m_frame.f_lineno = 551;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_1_1 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_0_3 = par_keepdim;
        CHECK_OBJECT(var_inmask);
        tmp_kw_call_dict_value_1_1 = var_inmask;
        frame_dfcf4b68b94cdbc2188e974cf164fe18->m_frame.f_lineno = 551;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_count == NULL);
        var_count = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_4 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_1_2 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_0_4 = par_keepdim;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_1_2 = par_dtype;
        CHECK_OBJECT(var_inmask);
        tmp_kw_call_dict_value_2_1 = var_inmask;
        frame_dfcf4b68b94cdbc2188e974cf164fe18->m_frame.f_lineno = 552;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[151]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total == NULL);
        var_total = tmp_assign_source_4;
    }
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_total);
        tmp_truediv_expr_left_1 = var_total;
        CHECK_OBJECT(var_count);
        tmp_truediv_expr_right_1 = var_count;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[139];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 555;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_7 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfcf4b68b94cdbc2188e974cf164fe18->m_frame.f_lineno = 555;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 555;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dfcf4b68b94cdbc2188e974cf164fe18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfcf4b68b94cdbc2188e974cf164fe18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfcf4b68b94cdbc2188e974cf164fe18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dfcf4b68b94cdbc2188e974cf164fe18,
        type_description_1,
        par_input,
        par_dim,
        par_keepdim,
        par_dtype,
        par_mask,
        var_inmask,
        var_count,
        var_total
    );


    // Release cached frame if used for exception.
    if (frame_dfcf4b68b94cdbc2188e974cf164fe18 == cache_frame_dfcf4b68b94cdbc2188e974cf164fe18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dfcf4b68b94cdbc2188e974cf164fe18);
        cache_frame_dfcf4b68b94cdbc2188e974cf164fe18 = NULL;
    }

    assertFrameObject(frame_dfcf4b68b94cdbc2188e974cf164fe18);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_inmask);
    Py_DECREF(var_inmask);
    var_inmask = NULL;
    CHECK_OBJECT(var_count);
    Py_DECREF(var_count);
    var_count = NULL;
    CHECK_OBJECT(var_total);
    Py_DECREF(var_total);
    var_total = NULL;
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
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__11_norm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_ord = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    PyObject *par_mask = python_pars[5];
    PyObject *var_identity = NULL;
    PyObject *var_mask_input = NULL;
    PyObject *var_dim_ = NULL;
    struct Nuitka_FrameObject *frame_e8e59b356631627e355163c75c33037a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e8e59b356631627e355163c75c33037a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e8e59b356631627e355163c75c33037a)) {
        Py_XDECREF(cache_frame_e8e59b356631627e355163c75c33037a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8e59b356631627e355163c75c33037a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8e59b356631627e355163c75c33037a = MAKE_FUNCTION_FRAME(codeobj_e8e59b356631627e355163c75c33037a, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8e59b356631627e355163c75c33037a->m_type_description == NULL);
    frame_e8e59b356631627e355163c75c33037a = cache_frame_e8e59b356631627e355163c75c33037a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8e59b356631627e355163c75c33037a);
    assert(Py_REFCNT(frame_e8e59b356631627e355163c75c33037a) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 580;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 580;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 580;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[144]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(0);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[60];
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_input;
        CHECK_OBJECT(par_ord);
        tmp_args_element_value_5 = par_ord;
        frame_e8e59b356631627e355163c75c33037a->m_frame.f_lineno = 581;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e59b356631627e355163c75c33037a->m_frame.f_lineno = 581;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_identity == NULL);
        var_identity = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_mask);
        tmp_cmp_expr_left_3 = par_mask;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = par_input;
        Py_INCREF(tmp_assign_source_3);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[137]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask);
        tmp_args_element_value_6 = par_mask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_input;
        CHECK_OBJECT(var_identity);
        tmp_args_element_value_8 = var_identity;
        frame_e8e59b356631627e355163c75c33037a->m_frame.f_lineno = 582;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_9 = par_dim;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 583;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_input;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[106]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e59b356631627e355163c75c33037a->m_frame.f_lineno = 583;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[153]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[154]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_kw_call_arg_value_0_1 = var_mask_input;
        CHECK_OBJECT(par_ord);
        tmp_kw_call_arg_value_1_1 = par_ord;
        CHECK_OBJECT(var_dim_);
        tmp_kw_call_arg_value_2_1 = var_dim_;
        CHECK_OBJECT(par_keepdim);
        tmp_value_value_1 = par_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 584;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_1 = par_dtype;
        frame_e8e59b356631627e355163c75c33037a->m_frame.f_lineno = 584;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[155];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 586;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_9 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e8e59b356631627e355163c75c33037a->m_frame.f_lineno = 586;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 586;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e8e59b356631627e355163c75c33037a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8e59b356631627e355163c75c33037a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8e59b356631627e355163c75c33037a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8e59b356631627e355163c75c33037a,
        type_description_1,
        par_input,
        par_ord,
        par_dim,
        par_keepdim,
        par_dtype,
        par_mask,
        var_identity,
        var_mask_input,
        var_dim_
    );


    // Release cached frame if used for exception.
    if (frame_e8e59b356631627e355163c75c33037a == cache_frame_e8e59b356631627e355163c75c33037a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8e59b356631627e355163c75c33037a);
        cache_frame_e8e59b356631627e355163c75c33037a = NULL;
    }

    assertFrameObject(frame_e8e59b356631627e355163c75c33037a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_identity);
    var_identity = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
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
    Py_XDECREF(var_identity);
    var_identity = NULL;
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_ord);
    Py_DECREF(par_ord);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_ord);
    Py_DECREF(par_ord);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__12_var(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_unbiased = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    PyObject *par_mask = python_pars[5];
    PyObject *var_compute_dtype = NULL;
    PyObject *var_inmask = NULL;
    PyObject *var_count = NULL;
    PyObject *var_sample_total = NULL;
    PyObject *var_sample_mean = NULL;
    PyObject *var_x = NULL;
    PyObject *var_total = NULL;
    struct Nuitka_FrameObject *frame_dd8711f71552cf3d7f0a2ff441078151;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd8711f71552cf3d7f0a2ff441078151 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd8711f71552cf3d7f0a2ff441078151)) {
        Py_XDECREF(cache_frame_dd8711f71552cf3d7f0a2ff441078151);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd8711f71552cf3d7f0a2ff441078151 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd8711f71552cf3d7f0a2ff441078151 = MAKE_FUNCTION_FRAME(codeobj_dd8711f71552cf3d7f0a2ff441078151, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd8711f71552cf3d7f0a2ff441078151->m_type_description == NULL);
    frame_dd8711f71552cf3d7f0a2ff441078151 = cache_frame_dd8711f71552cf3d7f0a2ff441078151;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd8711f71552cf3d7f0a2ff441078151);
    assert(Py_REFCNT(frame_dd8711f71552cf3d7f0a2ff441078151) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_2 = par_dtype;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 611;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_3 = par_dtype;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[157]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooooooooo";
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
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 613;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = par_dtype;
        assert(var_compute_dtype == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_compute_dtype = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_compute_dtype);
        tmp_expression_value_5 = var_compute_dtype;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[89]);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 614;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        CHECK_OBJECT(var_compute_dtype);
        tmp_expression_value_6 = var_compute_dtype;
        tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[157]);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_operand_value_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[14]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_compute_dtype;
            assert(old != NULL);
            var_compute_dtype = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 616;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 616;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 616;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 617;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_input;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_0_1 = par_mask;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 617;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[148]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inmask);
        tmp_expression_value_10 = var_inmask;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[112]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_input;
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[113]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[149]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 618;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_1_1 = par_dim;
        tmp_kw_call_dict_value_0_3 = Py_True;
        CHECK_OBJECT(var_inmask);
        tmp_kw_call_dict_value_1_1 = var_inmask;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 618;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_count == NULL);
        var_count = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 619;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_4 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_1_2 = par_dim;
        tmp_kw_call_dict_value_0_4 = Py_True;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 619;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_2 = par_dtype;
        CHECK_OBJECT(var_inmask);
        tmp_kw_call_dict_value_2_1 = var_inmask;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 619;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[151]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sample_total == NULL);
        var_sample_total = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sample_total);
        tmp_args_element_value_1 = var_sample_total;
        CHECK_OBJECT(var_count);
        tmp_args_element_value_2 = var_count;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[158],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sample_mean == NULL);
        var_sample_mean = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[159]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_input;
        CHECK_OBJECT(var_sample_mean);
        tmp_args_element_value_4 = var_sample_mean;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 624;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_mult_expr_left_1 = var_x;
        CHECK_OBJECT(var_x);
        tmp_called_instance_2 = var_x;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 625;
        tmp_mult_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[160]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_1_3 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_0_5 = par_keepdim;
        if (var_compute_dtype == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[161]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_3 = var_compute_dtype;
        CHECK_OBJECT(var_inmask);
        tmp_kw_call_dict_value_2_2 = var_inmask;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 625;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_2};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total == NULL);
        var_total = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(par_keepdim);
        tmp_operand_value_3 = par_keepdim;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_count);
        tmp_expression_value_14 = var_count;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[162]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_total);
        tmp_expression_value_15 = var_total;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[113]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 627;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_count;
            assert(old != NULL);
            var_count = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_unbiased);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_unbiased);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[159]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_count == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[163]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 629;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_count;
        tmp_args_element_value_7 = mod_consts[31];
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_count;
            var_count = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_arg_element_1;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[164]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_count);
        tmp_args_element_value_8 = var_count;
        CHECK_OBJECT(var_count);
        tmp_called_instance_3 = var_count;
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 630;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[138], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 630;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 630;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_count;
            assert(old != NULL);
            var_count = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[158]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_total == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[165]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_total;
        if (var_count == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[163]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_count;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 631;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_expression_value_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[13]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = par_dtype;
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 631;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[166];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 633;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_20 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd8711f71552cf3d7f0a2ff441078151->m_frame.f_lineno = 633;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 633;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd8711f71552cf3d7f0a2ff441078151, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd8711f71552cf3d7f0a2ff441078151->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd8711f71552cf3d7f0a2ff441078151, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd8711f71552cf3d7f0a2ff441078151,
        type_description_1,
        par_input,
        par_dim,
        par_unbiased,
        par_keepdim,
        par_dtype,
        par_mask,
        var_compute_dtype,
        var_inmask,
        var_count,
        var_sample_total,
        var_sample_mean,
        var_x,
        var_total
    );


    // Release cached frame if used for exception.
    if (frame_dd8711f71552cf3d7f0a2ff441078151 == cache_frame_dd8711f71552cf3d7f0a2ff441078151) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd8711f71552cf3d7f0a2ff441078151);
        cache_frame_dd8711f71552cf3d7f0a2ff441078151 = NULL;
    }

    assertFrameObject(frame_dd8711f71552cf3d7f0a2ff441078151);

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
    Py_XDECREF(var_compute_dtype);
    var_compute_dtype = NULL;
    CHECK_OBJECT(var_inmask);
    Py_DECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    CHECK_OBJECT(var_sample_total);
    Py_DECREF(var_sample_total);
    var_sample_total = NULL;
    CHECK_OBJECT(var_sample_mean);
    Py_DECREF(var_sample_mean);
    var_sample_mean = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
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
    Py_XDECREF(var_compute_dtype);
    var_compute_dtype = NULL;
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_sample_total);
    var_sample_total = NULL;
    Py_XDECREF(var_sample_mean);
    var_sample_mean = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_unbiased);
    Py_DECREF(par_unbiased);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_unbiased);
    Py_DECREF(par_unbiased);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__13_softmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_mask = python_pars[3];
    PyObject *var_dim_ = NULL;
    PyObject *var_fill = NULL;
    PyObject *var_inmask = NULL;
    PyObject *var_mask_input = NULL;
    struct Nuitka_FrameObject *frame_0036b6406b7beb7b88a569a195eaedec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0036b6406b7beb7b88a569a195eaedec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0036b6406b7beb7b88a569a195eaedec)) {
        Py_XDECREF(cache_frame_0036b6406b7beb7b88a569a195eaedec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0036b6406b7beb7b88a569a195eaedec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0036b6406b7beb7b88a569a195eaedec = MAKE_FUNCTION_FRAME(codeobj_0036b6406b7beb7b88a569a195eaedec, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0036b6406b7beb7b88a569a195eaedec->m_type_description == NULL);
    frame_0036b6406b7beb7b88a569a195eaedec = cache_frame_0036b6406b7beb7b88a569a195eaedec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0036b6406b7beb7b88a569a195eaedec);
    assert(Py_REFCNT(frame_0036b6406b7beb7b88a569a195eaedec) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 644;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_input;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 644;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 645;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 645;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 645;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 646;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_input;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[144]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(0);
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 646;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[88];
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 646;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_input;
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 646;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 646;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 646;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 647;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_input;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_0_1 = par_mask;
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 647;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[148]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[137]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inmask);
        tmp_args_element_value_7 = var_inmask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 648;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_input;
        CHECK_OBJECT(var_fill);
        tmp_args_element_value_9 = var_fill;
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 648;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[168]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[169]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[170]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_kw_call_arg_value_0_2 = var_mask_input;
        CHECK_OBJECT(var_dim_);
        tmp_kw_call_arg_value_1_1 = var_dim_;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_2 = par_dtype;
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 649;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[171];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 651;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_11 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_0036b6406b7beb7b88a569a195eaedec->m_frame.f_lineno = 651;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 651;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0036b6406b7beb7b88a569a195eaedec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0036b6406b7beb7b88a569a195eaedec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0036b6406b7beb7b88a569a195eaedec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0036b6406b7beb7b88a569a195eaedec,
        type_description_1,
        par_input,
        par_dim,
        par_dtype,
        par_mask,
        var_dim_,
        var_fill,
        var_inmask,
        var_mask_input
    );


    // Release cached frame if used for exception.
    if (frame_0036b6406b7beb7b88a569a195eaedec == cache_frame_0036b6406b7beb7b88a569a195eaedec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0036b6406b7beb7b88a569a195eaedec);
        cache_frame_0036b6406b7beb7b88a569a195eaedec = NULL;
    }

    assertFrameObject(frame_0036b6406b7beb7b88a569a195eaedec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
    CHECK_OBJECT(var_fill);
    Py_DECREF(var_fill);
    var_fill = NULL;
    CHECK_OBJECT(var_inmask);
    Py_DECREF(var_inmask);
    var_inmask = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
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
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__14_log_softmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_mask = python_pars[3];
    PyObject *var_dim_ = NULL;
    PyObject *var_fill = NULL;
    PyObject *var_inmask = NULL;
    PyObject *var_mask_input = NULL;
    struct Nuitka_FrameObject *frame_d0a6a3ce620903739fea4bd489668272;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d0a6a3ce620903739fea4bd489668272 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d0a6a3ce620903739fea4bd489668272)) {
        Py_XDECREF(cache_frame_d0a6a3ce620903739fea4bd489668272);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0a6a3ce620903739fea4bd489668272 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0a6a3ce620903739fea4bd489668272 = MAKE_FUNCTION_FRAME(codeobj_d0a6a3ce620903739fea4bd489668272, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0a6a3ce620903739fea4bd489668272->m_type_description == NULL);
    frame_d0a6a3ce620903739fea4bd489668272 = cache_frame_d0a6a3ce620903739fea4bd489668272;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0a6a3ce620903739fea4bd489668272);
    assert(Py_REFCNT(frame_d0a6a3ce620903739fea4bd489668272) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 662;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_input;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 662;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 663;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 663;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 663;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 664;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_input;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[144]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(0);
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 664;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[88];
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 664;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_input;
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 664;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 664;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 664;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 665;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_input;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_0_1 = par_mask;
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 665;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[148]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[137]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inmask);
        tmp_args_element_value_7 = var_inmask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 666;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_input;
        CHECK_OBJECT(var_fill);
        tmp_args_element_value_9 = var_fill;
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 666;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[168]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[169]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[172]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_kw_call_arg_value_0_2 = var_mask_input;
        CHECK_OBJECT(var_dim_);
        tmp_kw_call_arg_value_1_1 = var_dim_;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_2 = par_dtype;
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 667;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[173];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 669;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_11 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0a6a3ce620903739fea4bd489668272->m_frame.f_lineno = 669;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 669;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0a6a3ce620903739fea4bd489668272, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0a6a3ce620903739fea4bd489668272->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0a6a3ce620903739fea4bd489668272, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0a6a3ce620903739fea4bd489668272,
        type_description_1,
        par_input,
        par_dim,
        par_dtype,
        par_mask,
        var_dim_,
        var_fill,
        var_inmask,
        var_mask_input
    );


    // Release cached frame if used for exception.
    if (frame_d0a6a3ce620903739fea4bd489668272 == cache_frame_d0a6a3ce620903739fea4bd489668272) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0a6a3ce620903739fea4bd489668272);
        cache_frame_d0a6a3ce620903739fea4bd489668272 = NULL;
    }

    assertFrameObject(frame_d0a6a3ce620903739fea4bd489668272);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
    CHECK_OBJECT(var_fill);
    Py_DECREF(var_fill);
    var_fill = NULL;
    CHECK_OBJECT(var_inmask);
    Py_DECREF(var_inmask);
    var_inmask = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
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
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__15_softmin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_mask = python_pars[3];
    PyObject *var_dim_ = NULL;
    PyObject *var_fill = NULL;
    PyObject *var_inmask = NULL;
    PyObject *var_mask_input = NULL;
    struct Nuitka_FrameObject *frame_7d061a8279f19524069e0c43066563c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d061a8279f19524069e0c43066563c1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7d061a8279f19524069e0c43066563c1)) {
        Py_XDECREF(cache_frame_7d061a8279f19524069e0c43066563c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d061a8279f19524069e0c43066563c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d061a8279f19524069e0c43066563c1 = MAKE_FUNCTION_FRAME(codeobj_7d061a8279f19524069e0c43066563c1, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d061a8279f19524069e0c43066563c1->m_type_description == NULL);
    frame_7d061a8279f19524069e0c43066563c1 = cache_frame_7d061a8279f19524069e0c43066563c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d061a8279f19524069e0c43066563c1);
    assert(Py_REFCNT(frame_7d061a8279f19524069e0c43066563c1) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_input;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 680;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 681;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 681;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 681;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 682;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_input;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[144]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(0);
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 682;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[94];
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 682;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_input;
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 682;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 682;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 682;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 683;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_input;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_0_1 = par_mask;
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 683;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[148]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[137]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inmask);
        tmp_args_element_value_7 = var_inmask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 684;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_input;
        CHECK_OBJECT(var_fill);
        tmp_args_element_value_9 = var_fill;
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 684;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[168]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[169]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[174]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_kw_call_arg_value_0_2 = var_mask_input;
        CHECK_OBJECT(var_dim_);
        tmp_kw_call_arg_value_1_1 = var_dim_;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_2 = par_dtype;
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 685;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[175];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 687;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_11 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 687;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 687;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7d061a8279f19524069e0c43066563c1->m_frame.f_lineno = 687;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 687;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d061a8279f19524069e0c43066563c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d061a8279f19524069e0c43066563c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d061a8279f19524069e0c43066563c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d061a8279f19524069e0c43066563c1,
        type_description_1,
        par_input,
        par_dim,
        par_dtype,
        par_mask,
        var_dim_,
        var_fill,
        var_inmask,
        var_mask_input
    );


    // Release cached frame if used for exception.
    if (frame_7d061a8279f19524069e0c43066563c1 == cache_frame_7d061a8279f19524069e0c43066563c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d061a8279f19524069e0c43066563c1);
        cache_frame_7d061a8279f19524069e0c43066563c1 = NULL;
    }

    assertFrameObject(frame_7d061a8279f19524069e0c43066563c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
    CHECK_OBJECT(var_fill);
    Py_DECREF(var_fill);
    var_fill = NULL;
    CHECK_OBJECT(var_inmask);
    Py_DECREF(var_inmask);
    var_inmask = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
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
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_masked$$$function__16_normalize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_ord = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_eps = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    PyObject *par_mask = python_pars[5];
    PyObject *var_dim_ = NULL;
    PyObject *var_nrm_ = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_inmask = NULL;
    PyObject *var_mask_input = NULL;
    struct Nuitka_FrameObject *frame_3bccf7519b889a5b843b80ad5b5cb10f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3bccf7519b889a5b843b80ad5b5cb10f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3bccf7519b889a5b843b80ad5b5cb10f)) {
        Py_XDECREF(cache_frame_3bccf7519b889a5b843b80ad5b5cb10f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3bccf7519b889a5b843b80ad5b5cb10f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3bccf7519b889a5b843b80ad5b5cb10f = MAKE_FUNCTION_FRAME(codeobj_3bccf7519b889a5b843b80ad5b5cb10f, module_torch$_masked, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3bccf7519b889a5b843b80ad5b5cb10f->m_type_description == NULL);
    frame_3bccf7519b889a5b843b80ad5b5cb10f = cache_frame_3bccf7519b889a5b843b80ad5b5cb10f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3bccf7519b889a5b843b80ad5b5cb10f);
    assert(Py_REFCNT(frame_3bccf7519b889a5b843b80ad5b5cb10f) == 2);

    // Framed code:
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 700;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_input;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 700;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_ == NULL);
        var_dim_ = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 701;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_input;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[135]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 701;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[136]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 701;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 702;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_input;
        CHECK_OBJECT(par_ord);
        tmp_kw_call_arg_value_1_1 = par_ord;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_2_1 = par_dim;
        tmp_kw_call_dict_value_0_1 = Py_True;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_1_1 = par_dtype;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_2_1 = par_mask;
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 702;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[151]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nrm_ == NULL);
        var_nrm_ = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[164]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_nrm_);
        tmp_args_element_value_3 = var_nrm_;
        CHECK_OBJECT(var_nrm_);
        tmp_called_instance_1 = var_nrm_;
        tmp_args_element_value_5 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_6 = par_eps;
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 704;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[144],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 704;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 704;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_denom == NULL);
        var_denom = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 706;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = par_input;
        CHECK_OBJECT(par_mask);
        tmp_kw_call_dict_value_0_2 = par_mask;
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 706;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[148]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inmask == NULL);
        var_inmask = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_mask);
        tmp_cmp_expr_left_3 = par_mask;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_input == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_6 = par_input;
        Py_INCREF(tmp_assign_source_6);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[137]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_inmask);
        tmp_args_element_value_7 = var_inmask;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_input;
        if (par_input == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_input;
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 707;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[138], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 707;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_mask_input == NULL);
        var_mask_input = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask_input);
        tmp_args_element_value_10 = var_mask_input;
        CHECK_OBJECT(var_denom);
        tmp_args_element_value_11 = var_denom;
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 709;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[158],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[176];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_input == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 711;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_8 = par_input;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[135]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 711;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 711;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame.f_lineno = 711;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 711;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3bccf7519b889a5b843b80ad5b5cb10f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3bccf7519b889a5b843b80ad5b5cb10f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3bccf7519b889a5b843b80ad5b5cb10f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3bccf7519b889a5b843b80ad5b5cb10f,
        type_description_1,
        par_input,
        par_ord,
        par_dim,
        par_eps,
        par_dtype,
        par_mask,
        var_dim_,
        var_nrm_,
        var_denom,
        var_inmask,
        var_mask_input
    );


    // Release cached frame if used for exception.
    if (frame_3bccf7519b889a5b843b80ad5b5cb10f == cache_frame_3bccf7519b889a5b843b80ad5b5cb10f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3bccf7519b889a5b843b80ad5b5cb10f);
        cache_frame_3bccf7519b889a5b843b80ad5b5cb10f = NULL;
    }

    assertFrameObject(frame_3bccf7519b889a5b843b80ad5b5cb10f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_dim_);
    Py_DECREF(var_dim_);
    var_dim_ = NULL;
    CHECK_OBJECT(var_nrm_);
    Py_DECREF(var_nrm_);
    var_nrm_ = NULL;
    CHECK_OBJECT(var_denom);
    Py_DECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    CHECK_OBJECT(var_mask_input);
    Py_DECREF(var_mask_input);
    var_mask_input = NULL;
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
    Py_XDECREF(var_dim_);
    var_dim_ = NULL;
    Py_XDECREF(var_nrm_);
    var_nrm_ = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_inmask);
    var_inmask = NULL;
    Py_XDECREF(var_mask_input);
    var_mask_input = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_ord);
    Py_DECREF(par_ord);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_ord);
    Py_DECREF(par_ord);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__10_mean(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__10_mean,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dfcf4b68b94cdbc2188e974cf164fe18,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[152],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__11_norm(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__11_norm,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e8e59b356631627e355163c75c33037a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[156],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__12_var(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__12_var,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd8711f71552cf3d7f0a2ff441078151,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[167],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__13_softmax(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__13_softmax,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0036b6406b7beb7b88a569a195eaedec,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__14_log_softmax(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__14_log_softmax,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0a6a3ce620903739fea4bd489668272,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__15_softmin(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__15_softmin,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d061a8279f19524069e0c43066563c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__16_normalize(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__16_normalize,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3bccf7519b889a5b843b80ad5b5cb10f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__1__apply_docstring_templates() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__1__apply_docstring_templates,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05c910e29058e9ba8c7fe0001247d7d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_masked,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__2__reduction_identity(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__2__reduction_identity,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_634cc065afb5a1f1bc0c3c8b784ed04e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__3__canonical_dim(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__3__canonical_dim,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d30d7486a0393eedf371211d6a897557,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__4__input_mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__4__input_mask,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d825c3d9f9d7c33760125795560f88a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__5__output_mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__5__output_mask,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05ef8f3fe4d0db1afc0ef76f5bdb86d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__6_sum(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__6_sum,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd0bc0dff64d7a3f92e3467530bc71bd,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__7_prod(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__7_prod,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90fabf1b0ca7bad00ce877a9ab21f83b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__8_amax(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__8_amax,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ae77c4b3fd507b7d463b96abbe1901b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_masked$$$function__9_amin(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_masked$$$function__9_amin,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b2bea1024b79f3a2cc0d00b06cdc1c33,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torch$_masked,
        mod_consts[146],
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

function_impl_code functable_torch$_masked[] = {
    impl_torch$_masked$$$function__1__apply_docstring_templates,
    impl_torch$_masked$$$function__2__reduction_identity,
    impl_torch$_masked$$$function__3__canonical_dim,
    impl_torch$_masked$$$function__4__input_mask,
    impl_torch$_masked$$$function__5__output_mask,
    impl_torch$_masked$$$function__6_sum,
    impl_torch$_masked$$$function__7_prod,
    impl_torch$_masked$$$function__8_amax,
    impl_torch$_masked$$$function__9_amin,
    impl_torch$_masked$$$function__10_mean,
    impl_torch$_masked$$$function__11_norm,
    impl_torch$_masked$$$function__12_var,
    impl_torch$_masked$$$function__13_softmax,
    impl_torch$_masked$$$function__14_log_softmax,
    impl_torch$_masked$$$function__15_softmin,
    impl_torch$_masked$$$function__16_normalize,
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

    function_impl_code *current = functable_torch$_masked;
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

    if (offset > sizeof(functable_torch$_masked) || offset < 0) {
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
        functable_torch$_masked[offset],
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
        module_torch$_masked,
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
PyObject *modulecode_torch$_masked(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch._masked");

    // Store the module for future use.
    module_torch$_masked = module;

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
        PRINT_STRING("torch._masked: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._masked: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._masked: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$_masked\n");

    moduledict_torch$_masked = MODULE_DICT(module_torch$_masked);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$_masked,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$_masked,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[26]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$_masked,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_masked,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_masked,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$_masked);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$_masked);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_2);
    }
    frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86 = MAKE_MODULE_FRAME(codeobj_4c5f2aeeb62bd516f7a4dc3d0a83ff86, module_torch$_masked);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86);
    assert(Py_REFCNT(frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[178]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[179]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[178]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[180]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[181]);
                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[182]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[183];
            frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[181]);
                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[184]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_subscript_value_1 = mod_consts[25];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[187], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[188], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[189], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$_masked,
                mod_consts[191],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[191]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$_masked,
                mod_consts[192],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[192]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$_masked,
                mod_consts[193],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[193]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$_masked,
                mod_consts[194],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[194]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$_masked,
                mod_consts[195],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[195]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_10);
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
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$_masked;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[25];
        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 5;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[6];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$_masked;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[196];
        tmp_level_value_2 = mod_consts[25];
        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$_masked,
                mod_consts[197],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[197]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_False;
        UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = (PyObject *)&PyLong_Type;
        UPDATE_STRING_DICT0(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
        tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$_masked$$$function__1__apply_docstring_templates();

        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[202];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[134];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_18 = MAKE_FUNCTION_torch$_masked$$$function__2__reduction_identity(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[123];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[106];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[203];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[192]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = mod_consts[204];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$_masked$$$function__3__canonical_dim(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[134];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[203];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$_masked$$$function__4__input_mask(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[134];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[203];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$_masked$$$function__5__output_mask(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_1;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[206];
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_5 = mod_consts[134];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[123];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[125];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_5 = (PyObject *)&PyBool_Type;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[80];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[37];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[203];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_4 = MAKE_FUNCTION_torch$_masked$$$function__6_sum(tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_5);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 419;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_2;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[206];
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_6 = mod_consts[134];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[123];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[125];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_8 = (PyObject *)&PyBool_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[80];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[37];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_10 == NULL)) {
                tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[203];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_5 = MAKE_FUNCTION_torch$_masked$$$function__7_prod(tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_6);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 440;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_3;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[206];
        tmp_kw_defaults_3 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_7 = mod_consts[134];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_3);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[123];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[125];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[80];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_12 == NULL)) {
                tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[37];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_13 == NULL)) {
                tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_13);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[203];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_kw_defaults_3);
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_6 = MAKE_FUNCTION_torch$_masked$$$function__8_amax(tmp_defaults_3, tmp_kw_defaults_3, tmp_annotations_7);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 463;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_defaults_4;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[206];
        tmp_kw_defaults_4 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_8 = mod_consts[134];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_4);

            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_16;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[123];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[125];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_14);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[80];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_15 == NULL)) {
                tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_15);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[37];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_16 == NULL)) {
                tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_16);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[203];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_kw_defaults_4);
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_value_7 = MAKE_FUNCTION_torch$_masked$$$function__9_amin(tmp_defaults_4, tmp_kw_defaults_4, tmp_annotations_8);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 494;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_defaults_5;
        PyObject *tmp_kw_defaults_5;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = mod_consts[206];
        tmp_kw_defaults_5 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_9 = mod_consts[134];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_5);

            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_19;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[123];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[125];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_17);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[80];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_18 == NULL)) {
                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_18);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[37];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_19 == NULL)) {
                tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_19);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[203];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_kw_defaults_5);
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        Py_INCREF(tmp_defaults_5);


        tmp_args_element_value_8 = MAKE_FUNCTION_torch$_masked$$$function__10_mean(tmp_defaults_5, tmp_kw_defaults_5, tmp_annotations_9);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 525;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_defaults_6;
        PyObject *tmp_kw_defaults_6;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = mod_consts[208];
        tmp_kw_defaults_6 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_10 = mod_consts[134];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_6);

            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_23;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[209];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_20 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_20);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[123];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[125];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_21 = (PyObject *)&PyBool_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_21);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[80];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_22);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[37];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_23 == NULL)) {
                tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_23);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[203];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_kw_defaults_6);
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_6);


        tmp_args_element_value_9 = MAKE_FUNCTION_torch$_masked$$$function__11_norm(tmp_defaults_6, tmp_kw_defaults_6, tmp_annotations_10);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 558;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_defaults_7;
        PyObject *tmp_kw_defaults_7;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = mod_consts[210];
        tmp_kw_defaults_7 = DICT_COPY(mod_consts[207]);
        tmp_dict_key_11 = mod_consts[134];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_7);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[123];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 591;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[211];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 592;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_24 = (PyObject *)&PyBool_Type;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_24);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 592;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[125];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_25);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[80];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_26 == NULL)) {
                tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_26);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[37];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_27 == NULL)) {
                tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_27);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[203];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_kw_defaults_7);
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        Py_INCREF(tmp_defaults_7);


        tmp_args_element_value_10 = MAKE_FUNCTION_torch$_masked$$$function__12_var(tmp_defaults_7, tmp_kw_defaults_7, tmp_annotations_11);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 589;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_kw_defaults_8;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_8 = DICT_COPY(mod_consts[212]);
        tmp_dict_key_12 = mod_consts[134];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 637;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_29;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[123];
            tmp_dict_value_12 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[80];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_28);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[37];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_29 == NULL)) {
                tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_29);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[203];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_kw_defaults_8);
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_args_element_value_11 = MAKE_FUNCTION_torch$_masked$$$function__13_softmax(tmp_kw_defaults_8, tmp_annotations_12);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 636;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_kw_defaults_9;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_9 = DICT_COPY(mod_consts[212]);
        tmp_dict_key_13 = mod_consts[134];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_31;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[123];
            tmp_dict_value_13 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[80];
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_30 == NULL)) {
                tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;

                goto dict_build_exception_13;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_30);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[37];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_31 == NULL)) {
                tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;

                goto dict_build_exception_13;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_31);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[203];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_kw_defaults_9);
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_args_element_value_12 = MAKE_FUNCTION_torch$_masked$$$function__14_log_softmax(tmp_kw_defaults_9, tmp_annotations_13);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 654;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_kw_defaults_10;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_10 = DICT_COPY(mod_consts[212]);
        tmp_dict_key_14 = mod_consts[134];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_10);

            exception_lineno = 673;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_33;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[123];
            tmp_dict_value_14 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[80];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_32 == NULL)) {
                tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_32);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[37];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_33 == NULL)) {
                tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_33);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[203];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_kw_defaults_10);
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;


        tmp_args_element_value_13 = MAKE_FUNCTION_torch$_masked$$$function__15_softmin(tmp_kw_defaults_10, tmp_annotations_14);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 672;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_kw_defaults_11;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_11 = DICT_COPY(mod_consts[213]);
        tmp_dict_key_15 = mod_consts[134];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_11);

            exception_lineno = 691;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_35;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[209];
            tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[123];
            tmp_dict_value_15 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[214];
            tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[80];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[199]);

            if (unlikely(tmp_subscript_value_34 == NULL)) {
                tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
            }

            if (tmp_subscript_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;

                goto dict_build_exception_15;
            }
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_34);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[37];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_subscript_value_35 == NULL)) {
                tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_subscript_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;

                goto dict_build_exception_15;
            }
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_35);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[203];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_kw_defaults_11);
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;


        tmp_args_element_value_14 = MAKE_FUNCTION_torch$_masked$$$function__16_normalize(tmp_kw_defaults_11, tmp_annotations_15);

        frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame.f_lineno = 690;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_masked, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_32);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86, exception_lineno);
    }



    assertFrameObject(frame_4c5f2aeeb62bd516f7a4dc3d0a83ff86);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch._masked", false);

    Py_INCREF(module_torch$_masked);
    return module_torch$_masked;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_masked, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$_masked", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
