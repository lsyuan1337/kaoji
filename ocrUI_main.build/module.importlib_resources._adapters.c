/* Generated code for Python module 'importlib_resources._adapters'
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

/* The "module_importlib_resources$_adapters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_importlib_resources$_adapters;
PyDictObject *moduledict_importlib_resources$_adapters;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[130];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[130];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("importlib_resources._adapters"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 130; i++) {
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
void checkModuleConstants_importlib_resources$_adapters(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 130; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2f9522b438d43fbc2670e7ea70ea04b7;
static PyCodeObject *codeobj_af57344a5f36864f84c73e728eb8f9a8;
static PyCodeObject *codeobj_8a5d6547872a13660fd17d6b76f41a09;
static PyCodeObject *codeobj_5b550f0e169d24fffd2db051776774b2;
static PyCodeObject *codeobj_516313355d4edbfd06f80166be42de66;
static PyCodeObject *codeobj_4a62cd76ea3823e6f1d0e1b1a513feab;
static PyCodeObject *codeobj_ca7d626a024cc0bdcd64a3635fe3fbcf;
static PyCodeObject *codeobj_2bf0e9f6c3847b713e7823e14c71b4b1;
static PyCodeObject *codeobj_4ee53f4912b2da218fb0949b53036ef5;
static PyCodeObject *codeobj_faee2e97c3f351567f858bf5969577f5;
static PyCodeObject *codeobj_56b64c3fb16b114e6066dfae3a25ed05;
static PyCodeObject *codeobj_8f8a64514e3c1b89576dfcbea5f6292f;
static PyCodeObject *codeobj_d837cba8db39322017aefe5a84e05be6;
static PyCodeObject *codeobj_c02e8c7c82896d4deeaf9e5633d5516d;
static PyCodeObject *codeobj_eaa9cc483b8c767942e503716ad65072;
static PyCodeObject *codeobj_020832f1f207b0c857db8311b5edbcb1;
static PyCodeObject *codeobj_c20a58d52a2d79f3b9a614481cd2e8f6;
static PyCodeObject *codeobj_36d6f5a31e460587a87210cd78181dd5;
static PyCodeObject *codeobj_c72feceda49ac6cba2baa8b05aa99384;
static PyCodeObject *codeobj_16f548ea526cdeef18186454423b6b02;
static PyCodeObject *codeobj_a59734725e1b206ddc53093a11732dbb;
static PyCodeObject *codeobj_d505e1b84a012730876373ba2dcf3ff2;
static PyCodeObject *codeobj_49a84855554f7ab383dc1dd4ba292d6d;
static PyCodeObject *codeobj_f1f1ef249116e6f64f0eff6697d9f26d;
static PyCodeObject *codeobj_f180f0a2b3319ea50dd815b40eb32b67;
static PyCodeObject *codeobj_35d1f375f794621808d6f5ab53cecc40;
static PyCodeObject *codeobj_3ee0a97b928faa03e14ce781717d0f53;
static PyCodeObject *codeobj_7756ab8b0e837cacc5f1d072013bc446;
static PyCodeObject *codeobj_4a13b030727c37cd29e53c8491317247;
static PyCodeObject *codeobj_ed7e65a8cf470a86b42a0aa63248ba4c;
static PyCodeObject *codeobj_80bd8f328e93f021aebc608016d243f7;
static PyCodeObject *codeobj_058626ecd8c699052d3111387980b8d4;
static PyCodeObject *codeobj_de4eee5c3d8d0739c02aa19ee0720a8f;
static PyCodeObject *codeobj_71220df3285cb34918d564dc55beb191;
static PyCodeObject *codeobj_1c3f35602187795c76c68d5dd0b0697f;
static PyCodeObject *codeobj_9101ee54e46dcdf552cca4bfbc7aabff;
static PyCodeObject *codeobj_10fbfb5f0cdef1e21377b9aab5b7ba7f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[112]); CHECK_OBJECT(module_filename_obj);
    codeobj_2f9522b438d43fbc2670e7ea70ea04b7 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[113], NULL, 1, 0, 0);
    codeobj_af57344a5f36864f84c73e728eb8f9a8 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[114], NULL, 1, 0, 0);
    codeobj_8a5d6547872a13660fd17d6b76f41a09 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[115], mod_consts[115], NULL, NULL, 0, 0, 0);
    codeobj_5b550f0e169d24fffd2db051776774b2 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[116], NULL, 0, 0, 0);
    codeobj_516313355d4edbfd06f80166be42de66 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[116], NULL, 0, 0, 0);
    codeobj_4a62cd76ea3823e6f1d0e1b1a513feab = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[116], NULL, 0, 0, 0);
    codeobj_ca7d626a024cc0bdcd64a3635fe3fbcf = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[116], NULL, 0, 0, 0);
    codeobj_2bf0e9f6c3847b713e7823e14c71b4b1 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[117], NULL, 2, 0, 0);
    codeobj_4ee53f4912b2da218fb0949b53036ef5 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[118], NULL, 2, 0, 0);
    codeobj_faee2e97c3f351567f858bf5969577f5 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[119], NULL, 1, 0, 0);
    codeobj_56b64c3fb16b114e6066dfae3a25ed05 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[120], NULL, 3, 0, 0);
    codeobj_8f8a64514e3c1b89576dfcbea5f6292f = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[121], NULL, 2, 0, 0);
    codeobj_d837cba8db39322017aefe5a84e05be6 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[121], NULL, 2, 0, 0);
    codeobj_c02e8c7c82896d4deeaf9e5633d5516d = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[122], NULL, 3, 0, 0);
    codeobj_eaa9cc483b8c767942e503716ad65072 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[123], NULL, 3, 0, 0);
    codeobj_020832f1f207b0c857db8311b5edbcb1 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[124], NULL, 2, 0, 0);
    codeobj_c20a58d52a2d79f3b9a614481cd2e8f6 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[125], NULL, 1, 0, 0);
    codeobj_36d6f5a31e460587a87210cd78181dd5 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[126], NULL, 1, 0, 0);
    codeobj_c72feceda49ac6cba2baa8b05aa99384 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[126], NULL, 1, 0, 0);
    codeobj_16f548ea526cdeef18186454423b6b02 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[118], NULL, 2, 0, 0);
    codeobj_a59734725e1b206ddc53093a11732dbb = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[126], NULL, 1, 0, 0);
    codeobj_d505e1b84a012730876373ba2dcf3ff2 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[126], NULL, 1, 0, 0);
    codeobj_49a84855554f7ab383dc1dd4ba292d6d = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[126], NULL, 1, 0, 0);
    codeobj_f1f1ef249116e6f64f0eff6697d9f26d = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[126], NULL, 1, 0, 0);
    codeobj_f180f0a2b3319ea50dd815b40eb32b67 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[126], NULL, 1, 0, 0);
    codeobj_35d1f375f794621808d6f5ab53cecc40 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[126], NULL, 1, 0, 0);
    codeobj_3ee0a97b928faa03e14ce781717d0f53 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[126], NULL, 1, 0, 0);
    codeobj_7756ab8b0e837cacc5f1d072013bc446 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[127], NULL, 2, 0, 0);
    codeobj_4a13b030727c37cd29e53c8491317247 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[127], NULL, 2, 0, 0);
    codeobj_ed7e65a8cf470a86b42a0aa63248ba4c = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[127], NULL, 2, 0, 0);
    codeobj_80bd8f328e93f021aebc608016d243f7 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[126], NULL, 1, 0, 0);
    codeobj_058626ecd8c699052d3111387980b8d4 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[126], NULL, 1, 0, 0);
    codeobj_de4eee5c3d8d0739c02aa19ee0720a8f = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[126], NULL, 1, 0, 0);
    codeobj_71220df3285cb34918d564dc55beb191 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[128], NULL, 2, 0, 0);
    codeobj_1c3f35602187795c76c68d5dd0b0697f = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[128], NULL, 2, 0, 0);
    codeobj_9101ee54e46dcdf552cca4bfbc7aabff = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[128], NULL, 2, 0, 0);
    codeobj_10fbfb5f0cdef1e21377b9aab5b7ba7f = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[129], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12__unpack_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__10_joinpath();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__11_name();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__12_open(PyObject *defaults);


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__13___init__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__14_iterdir();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__15_is_file();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__16_is_dir();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__17_joinpath();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__18_name();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__19_open(PyObject *defaults);


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__20___init__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__21_iterdir();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__22_is_file();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__23_joinpath();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__24_name();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__25_open(PyObject *defaults);


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__26___init__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__27__reader();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__28__native();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__29___getattr__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__30_files();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__31_wrap_spec();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__3___getattr__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__4___init__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__5_get_resource_reader();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__6__io_wrapper(PyObject *defaults);


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__7___init__();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__8_iterdir();


static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__9_is_file();


// The module function definitions.
static PyObject *impl_importlib_resources$_adapters$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_spec = python_pars[0];
    struct Nuitka_FrameObject *frame_af57344a5f36864f84c73e728eb8f9a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af57344a5f36864f84c73e728eb8f9a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af57344a5f36864f84c73e728eb8f9a8)) {
        Py_XDECREF(cache_frame_af57344a5f36864f84c73e728eb8f9a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af57344a5f36864f84c73e728eb8f9a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af57344a5f36864f84c73e728eb8f9a8 = MAKE_FUNCTION_FRAME(codeobj_af57344a5f36864f84c73e728eb8f9a8, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af57344a5f36864f84c73e728eb8f9a8->m_type_description == NULL);
    frame_af57344a5f36864f84c73e728eb8f9a8 = cache_frame_af57344a5f36864f84c73e728eb8f9a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af57344a5f36864f84c73e728eb8f9a8);
    assert(Py_REFCNT(frame_af57344a5f36864f84c73e728eb8f9a8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_spec);
        tmp_expression_value_1 = par_spec;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
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
        exception_tb = MAKE_TRACEBACK(frame_af57344a5f36864f84c73e728eb8f9a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af57344a5f36864f84c73e728eb8f9a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af57344a5f36864f84c73e728eb8f9a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af57344a5f36864f84c73e728eb8f9a8,
        type_description_1,
        par_spec
    );


    // Release cached frame if used for exception.
    if (frame_af57344a5f36864f84c73e728eb8f9a8 == cache_frame_af57344a5f36864f84c73e728eb8f9a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af57344a5f36864f84c73e728eb8f9a8);
        cache_frame_af57344a5f36864f84c73e728eb8f9a8 = NULL;
    }

    assertFrameObject(frame_af57344a5f36864f84c73e728eb8f9a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_spec = python_pars[1];
    PyObject *par_adapter = python_pars[2];
    struct Nuitka_FrameObject *frame_c02e8c7c82896d4deeaf9e5633d5516d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c02e8c7c82896d4deeaf9e5633d5516d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c02e8c7c82896d4deeaf9e5633d5516d)) {
        Py_XDECREF(cache_frame_c02e8c7c82896d4deeaf9e5633d5516d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c02e8c7c82896d4deeaf9e5633d5516d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c02e8c7c82896d4deeaf9e5633d5516d = MAKE_FUNCTION_FRAME(codeobj_c02e8c7c82896d4deeaf9e5633d5516d, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c02e8c7c82896d4deeaf9e5633d5516d->m_type_description == NULL);
    frame_c02e8c7c82896d4deeaf9e5633d5516d = cache_frame_c02e8c7c82896d4deeaf9e5633d5516d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c02e8c7c82896d4deeaf9e5633d5516d);
    assert(Py_REFCNT(frame_c02e8c7c82896d4deeaf9e5633d5516d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_spec);
        tmp_assattr_value_1 = par_spec;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_adapter);
        tmp_called_value_1 = par_adapter;
        CHECK_OBJECT(par_spec);
        tmp_args_element_value_1 = par_spec;
        frame_c02e8c7c82896d4deeaf9e5633d5516d->m_frame.f_lineno = 14;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c02e8c7c82896d4deeaf9e5633d5516d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c02e8c7c82896d4deeaf9e5633d5516d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c02e8c7c82896d4deeaf9e5633d5516d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c02e8c7c82896d4deeaf9e5633d5516d,
        type_description_1,
        par_self,
        par_spec,
        par_adapter
    );


    // Release cached frame if used for exception.
    if (frame_c02e8c7c82896d4deeaf9e5633d5516d == cache_frame_c02e8c7c82896d4deeaf9e5633d5516d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c02e8c7c82896d4deeaf9e5633d5516d);
        cache_frame_c02e8c7c82896d4deeaf9e5633d5516d = NULL;
    }

    assertFrameObject(frame_c02e8c7c82896d4deeaf9e5633d5516d);

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
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    CHECK_OBJECT(par_adapter);
    Py_DECREF(par_adapter);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    CHECK_OBJECT(par_adapter);
    Py_DECREF(par_adapter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__3___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_4ee53f4912b2da218fb0949b53036ef5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ee53f4912b2da218fb0949b53036ef5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ee53f4912b2da218fb0949b53036ef5)) {
        Py_XDECREF(cache_frame_4ee53f4912b2da218fb0949b53036ef5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ee53f4912b2da218fb0949b53036ef5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ee53f4912b2da218fb0949b53036ef5 = MAKE_FUNCTION_FRAME(codeobj_4ee53f4912b2da218fb0949b53036ef5, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ee53f4912b2da218fb0949b53036ef5->m_type_description == NULL);
    frame_4ee53f4912b2da218fb0949b53036ef5 = cache_frame_4ee53f4912b2da218fb0949b53036ef5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ee53f4912b2da218fb0949b53036ef5);
    assert(Py_REFCNT(frame_4ee53f4912b2da218fb0949b53036ef5) == 2);

    // Framed code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_getattr_attr_1 = par_name;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
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
        exception_tb = MAKE_TRACEBACK(frame_4ee53f4912b2da218fb0949b53036ef5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ee53f4912b2da218fb0949b53036ef5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ee53f4912b2da218fb0949b53036ef5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ee53f4912b2da218fb0949b53036ef5,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_4ee53f4912b2da218fb0949b53036ef5 == cache_frame_4ee53f4912b2da218fb0949b53036ef5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ee53f4912b2da218fb0949b53036ef5);
        cache_frame_4ee53f4912b2da218fb0949b53036ef5 = NULL;
    }

    assertFrameObject(frame_4ee53f4912b2da218fb0949b53036ef5);

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


static PyObject *impl_importlib_resources$_adapters$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_spec = python_pars[1];
    struct Nuitka_FrameObject *frame_8f8a64514e3c1b89576dfcbea5f6292f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f8a64514e3c1b89576dfcbea5f6292f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f8a64514e3c1b89576dfcbea5f6292f)) {
        Py_XDECREF(cache_frame_8f8a64514e3c1b89576dfcbea5f6292f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f8a64514e3c1b89576dfcbea5f6292f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f8a64514e3c1b89576dfcbea5f6292f = MAKE_FUNCTION_FRAME(codeobj_8f8a64514e3c1b89576dfcbea5f6292f, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f8a64514e3c1b89576dfcbea5f6292f->m_type_description == NULL);
    frame_8f8a64514e3c1b89576dfcbea5f6292f = cache_frame_8f8a64514e3c1b89576dfcbea5f6292f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f8a64514e3c1b89576dfcbea5f6292f);
    assert(Py_REFCNT(frame_8f8a64514e3c1b89576dfcbea5f6292f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_spec);
        tmp_assattr_value_1 = par_spec;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f8a64514e3c1b89576dfcbea5f6292f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f8a64514e3c1b89576dfcbea5f6292f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f8a64514e3c1b89576dfcbea5f6292f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f8a64514e3c1b89576dfcbea5f6292f,
        type_description_1,
        par_self,
        par_spec
    );


    // Release cached frame if used for exception.
    if (frame_8f8a64514e3c1b89576dfcbea5f6292f == cache_frame_8f8a64514e3c1b89576dfcbea5f6292f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f8a64514e3c1b89576dfcbea5f6292f);
        cache_frame_8f8a64514e3c1b89576dfcbea5f6292f = NULL;
    }

    assertFrameObject(frame_8f8a64514e3c1b89576dfcbea5f6292f);

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
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__5_get_resource_reader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_16f548ea526cdeef18186454423b6b02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_16f548ea526cdeef18186454423b6b02 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_16f548ea526cdeef18186454423b6b02)) {
        Py_XDECREF(cache_frame_16f548ea526cdeef18186454423b6b02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16f548ea526cdeef18186454423b6b02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16f548ea526cdeef18186454423b6b02 = MAKE_FUNCTION_FRAME(codeobj_16f548ea526cdeef18186454423b6b02, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16f548ea526cdeef18186454423b6b02->m_type_description == NULL);
    frame_16f548ea526cdeef18186454423b6b02 = cache_frame_16f548ea526cdeef18186454423b6b02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16f548ea526cdeef18186454423b6b02);
    assert(Py_REFCNT(frame_16f548ea526cdeef18186454423b6b02) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_16f548ea526cdeef18186454423b6b02->m_frame.f_lineno = 29;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_16f548ea526cdeef18186454423b6b02->m_frame.f_lineno = 29;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_16f548ea526cdeef18186454423b6b02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16f548ea526cdeef18186454423b6b02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16f548ea526cdeef18186454423b6b02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16f548ea526cdeef18186454423b6b02,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_16f548ea526cdeef18186454423b6b02 == cache_frame_16f548ea526cdeef18186454423b6b02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16f548ea526cdeef18186454423b6b02);
        cache_frame_16f548ea526cdeef18186454423b6b02 = NULL;
    }

    assertFrameObject(frame_16f548ea526cdeef18186454423b6b02);

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


static PyObject *impl_importlib_resources$_adapters$$$function__6__io_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_020832f1f207b0c857db8311b5edbcb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_020832f1f207b0c857db8311b5edbcb1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_020832f1f207b0c857db8311b5edbcb1)) {
        Py_XDECREF(cache_frame_020832f1f207b0c857db8311b5edbcb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_020832f1f207b0c857db8311b5edbcb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_020832f1f207b0c857db8311b5edbcb1 = MAKE_FUNCTION_FRAME(codeobj_020832f1f207b0c857db8311b5edbcb1, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_020832f1f207b0c857db8311b5edbcb1->m_type_description == NULL);
    frame_020832f1f207b0c857db8311b5edbcb1 = cache_frame_020832f1f207b0c857db8311b5edbcb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_020832f1f207b0c857db8311b5edbcb1);
    assert(Py_REFCNT(frame_020832f1f207b0c857db8311b5edbcb1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_mode);
        tmp_cmp_expr_left_1 = par_mode;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooo";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_tuple_element_1 = par_file;
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
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
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
        CHECK_OBJECT(par_mode);
        tmp_cmp_expr_left_2 = par_mode;
        tmp_cmp_expr_right_2 = mod_consts[6];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_file);
    tmp_return_value = par_file;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[7];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_mode);
            tmp_format_value_1 = par_mode;
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_020832f1f207b0c857db8311b5edbcb1->m_frame.f_lineno = 37;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 37;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_020832f1f207b0c857db8311b5edbcb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_020832f1f207b0c857db8311b5edbcb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_020832f1f207b0c857db8311b5edbcb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_020832f1f207b0c857db8311b5edbcb1,
        type_description_1,
        par_file,
        par_mode,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_020832f1f207b0c857db8311b5edbcb1 == cache_frame_020832f1f207b0c857db8311b5edbcb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_020832f1f207b0c857db8311b5edbcb1);
        cache_frame_020832f1f207b0c857db8311b5edbcb1 = NULL;
    }

    assertFrameObject(frame_020832f1f207b0c857db8311b5edbcb1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
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


static PyObject *impl_importlib_resources$_adapters$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_spec = python_pars[1];
    PyObject *par_reader = python_pars[2];
    struct Nuitka_FrameObject *frame_eaa9cc483b8c767942e503716ad65072;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eaa9cc483b8c767942e503716ad65072 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eaa9cc483b8c767942e503716ad65072)) {
        Py_XDECREF(cache_frame_eaa9cc483b8c767942e503716ad65072);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eaa9cc483b8c767942e503716ad65072 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eaa9cc483b8c767942e503716ad65072 = MAKE_FUNCTION_FRAME(codeobj_eaa9cc483b8c767942e503716ad65072, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eaa9cc483b8c767942e503716ad65072->m_type_description == NULL);
    frame_eaa9cc483b8c767942e503716ad65072 = cache_frame_eaa9cc483b8c767942e503716ad65072;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eaa9cc483b8c767942e503716ad65072);
    assert(Py_REFCNT(frame_eaa9cc483b8c767942e503716ad65072) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_spec);
        tmp_assattr_value_1 = par_spec;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_reader);
        tmp_assattr_value_2 = par_reader;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eaa9cc483b8c767942e503716ad65072, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eaa9cc483b8c767942e503716ad65072->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaa9cc483b8c767942e503716ad65072, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eaa9cc483b8c767942e503716ad65072,
        type_description_1,
        par_self,
        par_spec,
        par_reader
    );


    // Release cached frame if used for exception.
    if (frame_eaa9cc483b8c767942e503716ad65072 == cache_frame_eaa9cc483b8c767942e503716ad65072) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eaa9cc483b8c767942e503716ad65072);
        cache_frame_eaa9cc483b8c767942e503716ad65072 = NULL;
    }

    assertFrameObject(frame_eaa9cc483b8c767942e503716ad65072);

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
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    CHECK_OBJECT(par_reader);
    Py_DECREF(par_reader);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    CHECK_OBJECT(par_reader);
    Py_DECREF(par_reader);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__8_iterdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_f180f0a2b3319ea50dd815b40eb32b67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f180f0a2b3319ea50dd815b40eb32b67 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f180f0a2b3319ea50dd815b40eb32b67)) {
        Py_XDECREF(cache_frame_f180f0a2b3319ea50dd815b40eb32b67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f180f0a2b3319ea50dd815b40eb32b67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f180f0a2b3319ea50dd815b40eb32b67 = MAKE_FUNCTION_FRAME(codeobj_f180f0a2b3319ea50dd815b40eb32b67, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f180f0a2b3319ea50dd815b40eb32b67->m_type_description == NULL);
    frame_f180f0a2b3319ea50dd815b40eb32b67 = cache_frame_f180f0a2b3319ea50dd815b40eb32b67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f180f0a2b3319ea50dd815b40eb32b67);
    assert(Py_REFCNT(frame_f180f0a2b3319ea50dd815b40eb32b67) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "c";
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
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[12];
        tmp_return_value = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_return_value == NULL));
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_iter_arg_2;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "c";
                goto frame_exception_exit_1;
            }
            frame_f180f0a2b3319ea50dd815b40eb32b67->m_frame.f_lineno = 61;
            tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[13]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "c";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "c";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_self;
            Py_INCREF(tmp_closure_1[1]);

            tmp_iter_arg_2 = MAKE_GENERATOR_importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_f180f0a2b3319ea50dd815b40eb32b67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f180f0a2b3319ea50dd815b40eb32b67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f180f0a2b3319ea50dd815b40eb32b67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f180f0a2b3319ea50dd815b40eb32b67,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f180f0a2b3319ea50dd815b40eb32b67 == cache_frame_f180f0a2b3319ea50dd815b40eb32b67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f180f0a2b3319ea50dd815b40eb32b67);
        cache_frame_f180f0a2b3319ea50dd815b40eb32b67 = NULL;
    }

    assertFrameObject(frame_f180f0a2b3319ea50dd815b40eb32b67);

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



struct importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr_locals {
    PyObject *var_path;
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

static PyObject *importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr_locals *generator_heap = (struct importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_path = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2f9522b438d43fbc2670e7ea70ea04b7, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 60;
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
            PyObject *old = generator_heap->var_path;
            generator_heap->var_path = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[15]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_path);
        tmp_args_element_value_2 = generator_heap->var_path;
        generator->m_frame->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 60;
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
            generator_heap->var_path,
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

    Py_XDECREF(generator_heap->var_path);
    generator_heap->var_path = NULL;
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
    Py_XDECREF(generator_heap->var_path);
    generator_heap->var_path = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr_context,
        module_importlib_resources$_adapters,
        mod_consts[16],
#if PYTHON_VERSION >= 0x350
        mod_consts[17],
#endif
        codeobj_2f9522b438d43fbc2670e7ea70ea04b7,
        closure,
        2,
        sizeof(struct importlib_resources$_adapters$$$function__8_iterdir$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_importlib_resources$_adapters$$$function__10_joinpath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_7756ab8b0e837cacc5f1d072013bc446;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7756ab8b0e837cacc5f1d072013bc446 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7756ab8b0e837cacc5f1d072013bc446)) {
        Py_XDECREF(cache_frame_7756ab8b0e837cacc5f1d072013bc446);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7756ab8b0e837cacc5f1d072013bc446 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7756ab8b0e837cacc5f1d072013bc446 = MAKE_FUNCTION_FRAME(codeobj_7756ab8b0e837cacc5f1d072013bc446, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7756ab8b0e837cacc5f1d072013bc446->m_type_description == NULL);
    frame_7756ab8b0e837cacc5f1d072013bc446 = cache_frame_7756ab8b0e837cacc5f1d072013bc446;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7756ab8b0e837cacc5f1d072013bc446);
    assert(Py_REFCNT(frame_7756ab8b0e837cacc5f1d072013bc446) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_7756ab8b0e837cacc5f1d072013bc446->m_frame.f_lineno = 71;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[18], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_7756ab8b0e837cacc5f1d072013bc446->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_7756ab8b0e837cacc5f1d072013bc446, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7756ab8b0e837cacc5f1d072013bc446->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7756ab8b0e837cacc5f1d072013bc446, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7756ab8b0e837cacc5f1d072013bc446,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_7756ab8b0e837cacc5f1d072013bc446 == cache_frame_7756ab8b0e837cacc5f1d072013bc446) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7756ab8b0e837cacc5f1d072013bc446);
        cache_frame_7756ab8b0e837cacc5f1d072013bc446 = NULL;
    }

    assertFrameObject(frame_7756ab8b0e837cacc5f1d072013bc446);

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


static PyObject *impl_importlib_resources$_adapters$$$function__11_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_80bd8f328e93f021aebc608016d243f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80bd8f328e93f021aebc608016d243f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80bd8f328e93f021aebc608016d243f7)) {
        Py_XDECREF(cache_frame_80bd8f328e93f021aebc608016d243f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80bd8f328e93f021aebc608016d243f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80bd8f328e93f021aebc608016d243f7 = MAKE_FUNCTION_FRAME(codeobj_80bd8f328e93f021aebc608016d243f7, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80bd8f328e93f021aebc608016d243f7->m_type_description == NULL);
    frame_80bd8f328e93f021aebc608016d243f7 = cache_frame_80bd8f328e93f021aebc608016d243f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80bd8f328e93f021aebc608016d243f7);
    assert(Py_REFCNT(frame_80bd8f328e93f021aebc608016d243f7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_80bd8f328e93f021aebc608016d243f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80bd8f328e93f021aebc608016d243f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80bd8f328e93f021aebc608016d243f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80bd8f328e93f021aebc608016d243f7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_80bd8f328e93f021aebc608016d243f7 == cache_frame_80bd8f328e93f021aebc608016d243f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80bd8f328e93f021aebc608016d243f7);
        cache_frame_80bd8f328e93f021aebc608016d243f7 = NULL;
    }

    assertFrameObject(frame_80bd8f328e93f021aebc608016d243f7);

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


static PyObject *impl_importlib_resources$_adapters$$$function__12_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_71220df3285cb34918d564dc55beb191;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_71220df3285cb34918d564dc55beb191 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_71220df3285cb34918d564dc55beb191)) {
        Py_XDECREF(cache_frame_71220df3285cb34918d564dc55beb191);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71220df3285cb34918d564dc55beb191 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71220df3285cb34918d564dc55beb191 = MAKE_FUNCTION_FRAME(codeobj_71220df3285cb34918d564dc55beb191, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71220df3285cb34918d564dc55beb191->m_type_description == NULL);
    frame_71220df3285cb34918d564dc55beb191 = cache_frame_71220df3285cb34918d564dc55beb191;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71220df3285cb34918d564dc55beb191);
    assert(Py_REFCNT(frame_71220df3285cb34918d564dc55beb191) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_71220df3285cb34918d564dc55beb191->m_frame.f_lineno = 79;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_mode);
        tmp_tuple_element_1 = par_mode;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_71220df3285cb34918d564dc55beb191, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71220df3285cb34918d564dc55beb191->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71220df3285cb34918d564dc55beb191, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71220df3285cb34918d564dc55beb191,
        type_description_1,
        par_self,
        par_mode,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_71220df3285cb34918d564dc55beb191 == cache_frame_71220df3285cb34918d564dc55beb191) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71220df3285cb34918d564dc55beb191);
        cache_frame_71220df3285cb34918d564dc55beb191 = NULL;
    }

    assertFrameObject(frame_71220df3285cb34918d564dc55beb191);

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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
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


static PyObject *impl_importlib_resources$_adapters$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_reader = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_56b64c3fb16b114e6066dfae3a25ed05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56b64c3fb16b114e6066dfae3a25ed05 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56b64c3fb16b114e6066dfae3a25ed05)) {
        Py_XDECREF(cache_frame_56b64c3fb16b114e6066dfae3a25ed05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56b64c3fb16b114e6066dfae3a25ed05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56b64c3fb16b114e6066dfae3a25ed05 = MAKE_FUNCTION_FRAME(codeobj_56b64c3fb16b114e6066dfae3a25ed05, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56b64c3fb16b114e6066dfae3a25ed05->m_type_description == NULL);
    frame_56b64c3fb16b114e6066dfae3a25ed05 = cache_frame_56b64c3fb16b114e6066dfae3a25ed05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56b64c3fb16b114e6066dfae3a25ed05);
    assert(Py_REFCNT(frame_56b64c3fb16b114e6066dfae3a25ed05) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_reader);
        tmp_assattr_value_1 = par_reader;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_2 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56b64c3fb16b114e6066dfae3a25ed05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56b64c3fb16b114e6066dfae3a25ed05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56b64c3fb16b114e6066dfae3a25ed05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56b64c3fb16b114e6066dfae3a25ed05,
        type_description_1,
        par_self,
        par_reader,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_56b64c3fb16b114e6066dfae3a25ed05 == cache_frame_56b64c3fb16b114e6066dfae3a25ed05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56b64c3fb16b114e6066dfae3a25ed05);
        cache_frame_56b64c3fb16b114e6066dfae3a25ed05 = NULL;
    }

    assertFrameObject(frame_56b64c3fb16b114e6066dfae3a25ed05);

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
    CHECK_OBJECT(par_reader);
    Py_DECREF(par_reader);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reader);
    Py_DECREF(par_reader);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__14_iterdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[12];
        tmp_return_value = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_return_value == NULL));
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


static PyObject *impl_importlib_resources$_adapters$$$function__15_is_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_49a84855554f7ab383dc1dd4ba292d6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_49a84855554f7ab383dc1dd4ba292d6d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_49a84855554f7ab383dc1dd4ba292d6d)) {
        Py_XDECREF(cache_frame_49a84855554f7ab383dc1dd4ba292d6d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49a84855554f7ab383dc1dd4ba292d6d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49a84855554f7ab383dc1dd4ba292d6d = MAKE_FUNCTION_FRAME(codeobj_49a84855554f7ab383dc1dd4ba292d6d, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49a84855554f7ab383dc1dd4ba292d6d->m_type_description == NULL);
    frame_49a84855554f7ab383dc1dd4ba292d6d = cache_frame_49a84855554f7ab383dc1dd4ba292d6d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49a84855554f7ab383dc1dd4ba292d6d);
    assert(Py_REFCNT(frame_49a84855554f7ab383dc1dd4ba292d6d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_49a84855554f7ab383dc1dd4ba292d6d->m_frame.f_lineno = 95;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_49a84855554f7ab383dc1dd4ba292d6d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49a84855554f7ab383dc1dd4ba292d6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49a84855554f7ab383dc1dd4ba292d6d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49a84855554f7ab383dc1dd4ba292d6d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_49a84855554f7ab383dc1dd4ba292d6d == cache_frame_49a84855554f7ab383dc1dd4ba292d6d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49a84855554f7ab383dc1dd4ba292d6d);
        cache_frame_49a84855554f7ab383dc1dd4ba292d6d = NULL;
    }

    assertFrameObject(frame_49a84855554f7ab383dc1dd4ba292d6d);

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


static PyObject *impl_importlib_resources$_adapters$$$function__16_is_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a59734725e1b206ddc53093a11732dbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a59734725e1b206ddc53093a11732dbb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a59734725e1b206ddc53093a11732dbb)) {
        Py_XDECREF(cache_frame_a59734725e1b206ddc53093a11732dbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a59734725e1b206ddc53093a11732dbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a59734725e1b206ddc53093a11732dbb = MAKE_FUNCTION_FRAME(codeobj_a59734725e1b206ddc53093a11732dbb, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a59734725e1b206ddc53093a11732dbb->m_type_description == NULL);
    frame_a59734725e1b206ddc53093a11732dbb = cache_frame_a59734725e1b206ddc53093a11732dbb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a59734725e1b206ddc53093a11732dbb);
    assert(Py_REFCNT(frame_a59734725e1b206ddc53093a11732dbb) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a59734725e1b206ddc53093a11732dbb->m_frame.f_lineno = 98;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_a59734725e1b206ddc53093a11732dbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a59734725e1b206ddc53093a11732dbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a59734725e1b206ddc53093a11732dbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a59734725e1b206ddc53093a11732dbb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a59734725e1b206ddc53093a11732dbb == cache_frame_a59734725e1b206ddc53093a11732dbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a59734725e1b206ddc53093a11732dbb);
        cache_frame_a59734725e1b206ddc53093a11732dbb = NULL;
    }

    assertFrameObject(frame_a59734725e1b206ddc53093a11732dbb);

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


static PyObject *impl_importlib_resources$_adapters$$$function__17_joinpath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_4a13b030727c37cd29e53c8491317247;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a13b030727c37cd29e53c8491317247 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a13b030727c37cd29e53c8491317247)) {
        Py_XDECREF(cache_frame_4a13b030727c37cd29e53c8491317247);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a13b030727c37cd29e53c8491317247 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a13b030727c37cd29e53c8491317247 = MAKE_FUNCTION_FRAME(codeobj_4a13b030727c37cd29e53c8491317247, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a13b030727c37cd29e53c8491317247->m_type_description == NULL);
    frame_4a13b030727c37cd29e53c8491317247 = cache_frame_4a13b030727c37cd29e53c8491317247;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a13b030727c37cd29e53c8491317247);
    assert(Py_REFCNT(frame_4a13b030727c37cd29e53c8491317247) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        frame_4a13b030727c37cd29e53c8491317247->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_4a13b030727c37cd29e53c8491317247, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a13b030727c37cd29e53c8491317247->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a13b030727c37cd29e53c8491317247, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a13b030727c37cd29e53c8491317247,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_4a13b030727c37cd29e53c8491317247 == cache_frame_4a13b030727c37cd29e53c8491317247) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a13b030727c37cd29e53c8491317247);
        cache_frame_4a13b030727c37cd29e53c8491317247 = NULL;
    }

    assertFrameObject(frame_4a13b030727c37cd29e53c8491317247);

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


static PyObject *impl_importlib_resources$_adapters$$$function__18_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_058626ecd8c699052d3111387980b8d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_058626ecd8c699052d3111387980b8d4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_058626ecd8c699052d3111387980b8d4)) {
        Py_XDECREF(cache_frame_058626ecd8c699052d3111387980b8d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_058626ecd8c699052d3111387980b8d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_058626ecd8c699052d3111387980b8d4 = MAKE_FUNCTION_FRAME(codeobj_058626ecd8c699052d3111387980b8d4, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_058626ecd8c699052d3111387980b8d4->m_type_description == NULL);
    frame_058626ecd8c699052d3111387980b8d4 = cache_frame_058626ecd8c699052d3111387980b8d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_058626ecd8c699052d3111387980b8d4);
    assert(Py_REFCNT(frame_058626ecd8c699052d3111387980b8d4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
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
        exception_tb = MAKE_TRACEBACK(frame_058626ecd8c699052d3111387980b8d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_058626ecd8c699052d3111387980b8d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_058626ecd8c699052d3111387980b8d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_058626ecd8c699052d3111387980b8d4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_058626ecd8c699052d3111387980b8d4 == cache_frame_058626ecd8c699052d3111387980b8d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_058626ecd8c699052d3111387980b8d4);
        cache_frame_058626ecd8c699052d3111387980b8d4 = NULL;
    }

    assertFrameObject(frame_058626ecd8c699052d3111387980b8d4);

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


static PyObject *impl_importlib_resources$_adapters$$$function__19_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_1c3f35602187795c76c68d5dd0b0697f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c3f35602187795c76c68d5dd0b0697f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c3f35602187795c76c68d5dd0b0697f)) {
        Py_XDECREF(cache_frame_1c3f35602187795c76c68d5dd0b0697f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c3f35602187795c76c68d5dd0b0697f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c3f35602187795c76c68d5dd0b0697f = MAKE_FUNCTION_FRAME(codeobj_1c3f35602187795c76c68d5dd0b0697f, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c3f35602187795c76c68d5dd0b0697f->m_type_description == NULL);
    frame_1c3f35602187795c76c68d5dd0b0697f = cache_frame_1c3f35602187795c76c68d5dd0b0697f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c3f35602187795c76c68d5dd0b0697f);
    assert(Py_REFCNT(frame_1c3f35602187795c76c68d5dd0b0697f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1c3f35602187795c76c68d5dd0b0697f->m_frame.f_lineno = 109;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_mode);
        tmp_tuple_element_1 = par_mode;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_1c3f35602187795c76c68d5dd0b0697f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c3f35602187795c76c68d5dd0b0697f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c3f35602187795c76c68d5dd0b0697f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c3f35602187795c76c68d5dd0b0697f,
        type_description_1,
        par_self,
        par_mode,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_1c3f35602187795c76c68d5dd0b0697f == cache_frame_1c3f35602187795c76c68d5dd0b0697f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c3f35602187795c76c68d5dd0b0697f);
        cache_frame_1c3f35602187795c76c68d5dd0b0697f = NULL;
    }

    assertFrameObject(frame_1c3f35602187795c76c68d5dd0b0697f);

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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
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


static PyObject *impl_importlib_resources$_adapters$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path_parts = python_pars[1];
    struct Nuitka_FrameObject *frame_faee2e97c3f351567f858bf5969577f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_faee2e97c3f351567f858bf5969577f5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_faee2e97c3f351567f858bf5969577f5)) {
        Py_XDECREF(cache_frame_faee2e97c3f351567f858bf5969577f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faee2e97c3f351567f858bf5969577f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faee2e97c3f351567f858bf5969577f5 = MAKE_FUNCTION_FRAME(codeobj_faee2e97c3f351567f858bf5969577f5, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_faee2e97c3f351567f858bf5969577f5->m_type_description == NULL);
    frame_faee2e97c3f351567f858bf5969577f5 = cache_frame_faee2e97c3f351567f858bf5969577f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_faee2e97c3f351567f858bf5969577f5);
    assert(Py_REFCNT(frame_faee2e97c3f351567f858bf5969577f5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_path_parts);
        tmp_len_arg_1 = par_path_parts;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        tmp_make_exception_arg_1 = mod_consts[26];
        frame_faee2e97c3f351567f858bf5969577f5->m_frame.f_lineno = 120;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 120;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_path_parts);
        tmp_assattr_value_1 = par_path_parts;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_faee2e97c3f351567f858bf5969577f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faee2e97c3f351567f858bf5969577f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faee2e97c3f351567f858bf5969577f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faee2e97c3f351567f858bf5969577f5,
        type_description_1,
        par_self,
        par_path_parts
    );


    // Release cached frame if used for exception.
    if (frame_faee2e97c3f351567f858bf5969577f5 == cache_frame_faee2e97c3f351567f858bf5969577f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_faee2e97c3f351567f858bf5969577f5);
        cache_frame_faee2e97c3f351567f858bf5969577f5 = NULL;
    }

    assertFrameObject(frame_faee2e97c3f351567f858bf5969577f5);

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
    CHECK_OBJECT(par_path_parts);
    Py_DECREF(par_path_parts);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path_parts);
    Py_DECREF(par_path_parts);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__21_iterdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[12];
        tmp_return_value = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_return_value == NULL));
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


static PyObject *impl_importlib_resources$_adapters$$$function__23_joinpath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_ed7e65a8cf470a86b42a0aa63248ba4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c)) {
        Py_XDECREF(cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c = MAKE_FUNCTION_FRAME(codeobj_ed7e65a8cf470a86b42a0aa63248ba4c, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c->m_type_description == NULL);
    frame_ed7e65a8cf470a86b42a0aa63248ba4c = cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ed7e65a8cf470a86b42a0aa63248ba4c);
    assert(Py_REFCNT(frame_ed7e65a8cf470a86b42a0aa63248ba4c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM(tmp_dircall_arg1_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_other);
            tmp_tuple_element_2 = par_other;
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg1_2, 1, tmp_tuple_element_1);
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_dircall_arg2_1 = impl___main__$$$function__12__unpack_list(dir_call_args);
        }
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_ed7e65a8cf470a86b42a0aa63248ba4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed7e65a8cf470a86b42a0aa63248ba4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed7e65a8cf470a86b42a0aa63248ba4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed7e65a8cf470a86b42a0aa63248ba4c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_ed7e65a8cf470a86b42a0aa63248ba4c == cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c);
        cache_frame_ed7e65a8cf470a86b42a0aa63248ba4c = NULL;
    }

    assertFrameObject(frame_ed7e65a8cf470a86b42a0aa63248ba4c);

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


static PyObject *impl_importlib_resources$_adapters$$$function__24_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_de4eee5c3d8d0739c02aa19ee0720a8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f)) {
        Py_XDECREF(cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f = MAKE_FUNCTION_FRAME(codeobj_de4eee5c3d8d0739c02aa19ee0720a8f, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f->m_type_description == NULL);
    frame_de4eee5c3d8d0739c02aa19ee0720a8f = cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de4eee5c3d8d0739c02aa19ee0720a8f);
    assert(Py_REFCNT(frame_de4eee5c3d8d0739c02aa19ee0720a8f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[28];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_de4eee5c3d8d0739c02aa19ee0720a8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de4eee5c3d8d0739c02aa19ee0720a8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de4eee5c3d8d0739c02aa19ee0720a8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de4eee5c3d8d0739c02aa19ee0720a8f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_de4eee5c3d8d0739c02aa19ee0720a8f == cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f);
        cache_frame_de4eee5c3d8d0739c02aa19ee0720a8f = NULL;
    }

    assertFrameObject(frame_de4eee5c3d8d0739c02aa19ee0720a8f);

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


static PyObject *impl_importlib_resources$_adapters$$$function__25_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_9101ee54e46dcdf552cca4bfbc7aabff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9101ee54e46dcdf552cca4bfbc7aabff = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9101ee54e46dcdf552cca4bfbc7aabff)) {
        Py_XDECREF(cache_frame_9101ee54e46dcdf552cca4bfbc7aabff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9101ee54e46dcdf552cca4bfbc7aabff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9101ee54e46dcdf552cca4bfbc7aabff = MAKE_FUNCTION_FRAME(codeobj_9101ee54e46dcdf552cca4bfbc7aabff, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9101ee54e46dcdf552cca4bfbc7aabff->m_type_description == NULL);
    frame_9101ee54e46dcdf552cca4bfbc7aabff = cache_frame_9101ee54e46dcdf552cca4bfbc7aabff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9101ee54e46dcdf552cca4bfbc7aabff);
    assert(Py_REFCNT(frame_9101ee54e46dcdf552cca4bfbc7aabff) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[29];
        frame_9101ee54e46dcdf552cca4bfbc7aabff->m_frame.f_lineno = 139;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_FileNotFoundError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 139;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9101ee54e46dcdf552cca4bfbc7aabff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9101ee54e46dcdf552cca4bfbc7aabff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9101ee54e46dcdf552cca4bfbc7aabff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9101ee54e46dcdf552cca4bfbc7aabff,
        type_description_1,
        par_self,
        par_mode,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_9101ee54e46dcdf552cca4bfbc7aabff == cache_frame_9101ee54e46dcdf552cca4bfbc7aabff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9101ee54e46dcdf552cca4bfbc7aabff);
        cache_frame_9101ee54e46dcdf552cca4bfbc7aabff = NULL;
    }

    assertFrameObject(frame_9101ee54e46dcdf552cca4bfbc7aabff);

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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_importlib_resources$_adapters$$$function__26___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_spec = python_pars[1];
    struct Nuitka_FrameObject *frame_d837cba8db39322017aefe5a84e05be6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d837cba8db39322017aefe5a84e05be6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d837cba8db39322017aefe5a84e05be6)) {
        Py_XDECREF(cache_frame_d837cba8db39322017aefe5a84e05be6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d837cba8db39322017aefe5a84e05be6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d837cba8db39322017aefe5a84e05be6 = MAKE_FUNCTION_FRAME(codeobj_d837cba8db39322017aefe5a84e05be6, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d837cba8db39322017aefe5a84e05be6->m_type_description == NULL);
    frame_d837cba8db39322017aefe5a84e05be6 = cache_frame_d837cba8db39322017aefe5a84e05be6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d837cba8db39322017aefe5a84e05be6);
    assert(Py_REFCNT(frame_d837cba8db39322017aefe5a84e05be6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_spec);
        tmp_assattr_value_1 = par_spec;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d837cba8db39322017aefe5a84e05be6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d837cba8db39322017aefe5a84e05be6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d837cba8db39322017aefe5a84e05be6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d837cba8db39322017aefe5a84e05be6,
        type_description_1,
        par_self,
        par_spec
    );


    // Release cached frame if used for exception.
    if (frame_d837cba8db39322017aefe5a84e05be6 == cache_frame_d837cba8db39322017aefe5a84e05be6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d837cba8db39322017aefe5a84e05be6);
        cache_frame_d837cba8db39322017aefe5a84e05be6 = NULL;
    }

    assertFrameObject(frame_d837cba8db39322017aefe5a84e05be6);

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
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_spec);
    Py_DECREF(par_spec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__27__reader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_36d6f5a31e460587a87210cd78181dd5;
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
    static struct Nuitka_FrameObject *cache_frame_36d6f5a31e460587a87210cd78181dd5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36d6f5a31e460587a87210cd78181dd5)) {
        Py_XDECREF(cache_frame_36d6f5a31e460587a87210cd78181dd5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36d6f5a31e460587a87210cd78181dd5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36d6f5a31e460587a87210cd78181dd5 = MAKE_FUNCTION_FRAME(codeobj_36d6f5a31e460587a87210cd78181dd5, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36d6f5a31e460587a87210cd78181dd5->m_type_description == NULL);
    frame_36d6f5a31e460587a87210cd78181dd5 = cache_frame_36d6f5a31e460587a87210cd78181dd5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_36d6f5a31e460587a87210cd78181dd5);
    assert(Py_REFCNT(frame_36d6f5a31e460587a87210cd78181dd5) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 146;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[31]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 146;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[33]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[1]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 147;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_36d6f5a31e460587a87210cd78181dd5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_36d6f5a31e460587a87210cd78181dd5, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 147;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_36d6f5a31e460587a87210cd78181dd5->m_frame) frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 146;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_36d6f5a31e460587a87210cd78181dd5->m_frame) frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
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
    try_return_handler_2:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 147;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[35]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    goto try_return_handler_1;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 147;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[35]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_36d6f5a31e460587a87210cd78181dd5->m_frame.f_lineno = 147;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[35]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_1:;
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
    try_except_handler_1:;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36d6f5a31e460587a87210cd78181dd5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36d6f5a31e460587a87210cd78181dd5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36d6f5a31e460587a87210cd78181dd5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36d6f5a31e460587a87210cd78181dd5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_36d6f5a31e460587a87210cd78181dd5 == cache_frame_36d6f5a31e460587a87210cd78181dd5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36d6f5a31e460587a87210cd78181dd5);
        cache_frame_36d6f5a31e460587a87210cd78181dd5 = NULL;
    }

    assertFrameObject(frame_36d6f5a31e460587a87210cd78181dd5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
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


static PyObject *impl_importlib_resources$_adapters$$$function__28__native(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_reader = NULL;
    struct Nuitka_FrameObject *frame_c20a58d52a2d79f3b9a614481cd2e8f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6)) {
        Py_XDECREF(cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6 = MAKE_FUNCTION_FRAME(codeobj_c20a58d52a2d79f3b9a614481cd2e8f6, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6->m_type_description == NULL);
    frame_c20a58d52a2d79f3b9a614481cd2e8f6 = cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c20a58d52a2d79f3b9a614481cd2e8f6);
    assert(Py_REFCNT(frame_c20a58d52a2d79f3b9a614481cd2e8f6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_reader == NULL);
        var_reader = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_reader);
        tmp_expression_value_2 = var_reader;
        tmp_attribute_value_1 = mod_consts[36];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_reader);
        tmp_return_value = var_reader;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_self);
        tmp_return_value = par_self;
        condexpr_end_1:;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_c20a58d52a2d79f3b9a614481cd2e8f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c20a58d52a2d79f3b9a614481cd2e8f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c20a58d52a2d79f3b9a614481cd2e8f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c20a58d52a2d79f3b9a614481cd2e8f6,
        type_description_1,
        par_self,
        var_reader
    );


    // Release cached frame if used for exception.
    if (frame_c20a58d52a2d79f3b9a614481cd2e8f6 == cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6);
        cache_frame_c20a58d52a2d79f3b9a614481cd2e8f6 = NULL;
    }

    assertFrameObject(frame_c20a58d52a2d79f3b9a614481cd2e8f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reader);
    Py_DECREF(var_reader);
    var_reader = NULL;
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

    Py_XDECREF(var_reader);
    var_reader = NULL;
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


static PyObject *impl_importlib_resources$_adapters$$$function__29___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_attr = python_pars[1];
    struct Nuitka_FrameObject *frame_2bf0e9f6c3847b713e7823e14c71b4b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1)) {
        Py_XDECREF(cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1 = MAKE_FUNCTION_FRAME(codeobj_2bf0e9f6c3847b713e7823e14c71b4b1, module_importlib_resources$_adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1->m_type_description == NULL);
    frame_2bf0e9f6c3847b713e7823e14c71b4b1 = cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2bf0e9f6c3847b713e7823e14c71b4b1);
    assert(Py_REFCNT(frame_2bf0e9f6c3847b713e7823e14c71b4b1) == 2);

    // Framed code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_getattr_attr_1 = par_attr;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_2bf0e9f6c3847b713e7823e14c71b4b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2bf0e9f6c3847b713e7823e14c71b4b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2bf0e9f6c3847b713e7823e14c71b4b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2bf0e9f6c3847b713e7823e14c71b4b1,
        type_description_1,
        par_self,
        par_attr
    );


    // Release cached frame if used for exception.
    if (frame_2bf0e9f6c3847b713e7823e14c71b4b1 == cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1);
        cache_frame_2bf0e9f6c3847b713e7823e14c71b4b1 = NULL;
    }

    assertFrameObject(frame_2bf0e9f6c3847b713e7823e14c71b4b1);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_importlib_resources$_adapters$$$function__30_files(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c72feceda49ac6cba2baa8b05aa99384;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c72feceda49ac6cba2baa8b05aa99384 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c72feceda49ac6cba2baa8b05aa99384)) {
        Py_XDECREF(cache_frame_c72feceda49ac6cba2baa8b05aa99384);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c72feceda49ac6cba2baa8b05aa99384 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c72feceda49ac6cba2baa8b05aa99384 = MAKE_FUNCTION_FRAME(codeobj_c72feceda49ac6cba2baa8b05aa99384, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c72feceda49ac6cba2baa8b05aa99384->m_type_description == NULL);
    frame_c72feceda49ac6cba2baa8b05aa99384 = cache_frame_c72feceda49ac6cba2baa8b05aa99384;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c72feceda49ac6cba2baa8b05aa99384);
    assert(Py_REFCNT(frame_c72feceda49ac6cba2baa8b05aa99384) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c72feceda49ac6cba2baa8b05aa99384->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_c72feceda49ac6cba2baa8b05aa99384, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c72feceda49ac6cba2baa8b05aa99384->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c72feceda49ac6cba2baa8b05aa99384, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c72feceda49ac6cba2baa8b05aa99384,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c72feceda49ac6cba2baa8b05aa99384 == cache_frame_c72feceda49ac6cba2baa8b05aa99384) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c72feceda49ac6cba2baa8b05aa99384);
        cache_frame_c72feceda49ac6cba2baa8b05aa99384 = NULL;
    }

    assertFrameObject(frame_c72feceda49ac6cba2baa8b05aa99384);

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


static PyObject *impl_importlib_resources$_adapters$$$function__31_wrap_spec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_package = python_pars[0];
    struct Nuitka_FrameObject *frame_10fbfb5f0cdef1e21377b9aab5b7ba7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f)) {
        Py_XDECREF(cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f = MAKE_FUNCTION_FRAME(codeobj_10fbfb5f0cdef1e21377b9aab5b7ba7f, module_importlib_resources$_adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f->m_type_description == NULL);
    frame_10fbfb5f0cdef1e21377b9aab5b7ba7f = cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_10fbfb5f0cdef1e21377b9aab5b7ba7f);
    assert(Py_REFCNT(frame_10fbfb5f0cdef1e21377b9aab5b7ba7f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_package);
        tmp_expression_value_1 = par_package;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 168;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_10fbfb5f0cdef1e21377b9aab5b7ba7f->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_10fbfb5f0cdef1e21377b9aab5b7ba7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10fbfb5f0cdef1e21377b9aab5b7ba7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10fbfb5f0cdef1e21377b9aab5b7ba7f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10fbfb5f0cdef1e21377b9aab5b7ba7f,
        type_description_1,
        par_package
    );


    // Release cached frame if used for exception.
    if (frame_10fbfb5f0cdef1e21377b9aab5b7ba7f == cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f);
        cache_frame_10fbfb5f0cdef1e21377b9aab5b7ba7f = NULL;
    }

    assertFrameObject(frame_10fbfb5f0cdef1e21377b9aab5b7ba7f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_package);
    Py_DECREF(par_package);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__10_joinpath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__10_joinpath,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_7756ab8b0e837cacc5f1d072013bc446,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__11_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__11_name,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_80bd8f328e93f021aebc608016d243f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__12_open(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__12_open,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_71220df3285cb34918d564dc55beb191,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__13___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__13___init__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_56b64c3fb16b114e6066dfae3a25ed05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__14_iterdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__14_iterdir,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_35d1f375f794621808d6f5ab53cecc40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__15_is_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__15_is_file,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_49a84855554f7ab383dc1dd4ba292d6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__16_is_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__16_is_dir,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_a59734725e1b206ddc53093a11732dbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__17_joinpath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__17_joinpath,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_4a13b030727c37cd29e53c8491317247,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__18_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__18_name,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_058626ecd8c699052d3111387980b8d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__19_open(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__19_open,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_1c3f35602187795c76c68d5dd0b0697f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__1___init__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_c02e8c7c82896d4deeaf9e5633d5516d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__20___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__20___init__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_faee2e97c3f351567f858bf5969577f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__21_iterdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__21_iterdir,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_3ee0a97b928faa03e14ce781717d0f53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__22_is_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_f1f1ef249116e6f64f0eff6697d9f26d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__23_joinpath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__23_joinpath,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_ed7e65a8cf470a86b42a0aa63248ba4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__24_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__24_name,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_de4eee5c3d8d0739c02aa19ee0720a8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__25_open(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__25_open,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_9101ee54e46dcdf552cca4bfbc7aabff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__26___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__26___init__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_d837cba8db39322017aefe5a84e05be6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__27__reader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__27__reader,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_36d6f5a31e460587a87210cd78181dd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__28__native() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__28__native,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_c20a58d52a2d79f3b9a614481cd2e8f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__29___getattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__29___getattr__,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_2bf0e9f6c3847b713e7823e14c71b4b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__2_lambda,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_af57344a5f36864f84c73e728eb8f9a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__30_files() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__30_files,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_c72feceda49ac6cba2baa8b05aa99384,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__31_wrap_spec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__31_wrap_spec,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10fbfb5f0cdef1e21377b9aab5b7ba7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__3___getattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__3___getattr__,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_4ee53f4912b2da218fb0949b53036ef5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__4___init__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_8f8a64514e3c1b89576dfcbea5f6292f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__5_get_resource_reader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__5_get_resource_reader,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_16f548ea526cdeef18186454423b6b02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__6__io_wrapper(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__6__io_wrapper,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_020832f1f207b0c857db8311b5edbcb1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__7___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__7___init__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_eaa9cc483b8c767942e503716ad65072,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__8_iterdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib_resources$_adapters$$$function__8_iterdir,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_f180f0a2b3319ea50dd815b40eb32b67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_importlib_resources$_adapters$$$function__9_is_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_d505e1b84a012730876373ba2dcf3ff2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_importlib_resources$_adapters,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

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

function_impl_code functable_importlib_resources$_adapters[] = {
    impl_importlib_resources$_adapters$$$function__2_lambda,
    impl_importlib_resources$_adapters$$$function__1___init__,
    impl_importlib_resources$_adapters$$$function__3___getattr__,
    impl_importlib_resources$_adapters$$$function__4___init__,
    impl_importlib_resources$_adapters$$$function__5_get_resource_reader,
    impl_importlib_resources$_adapters$$$function__6__io_wrapper,
    impl_importlib_resources$_adapters$$$function__7___init__,
    impl_importlib_resources$_adapters$$$function__8_iterdir,
    NULL,
    impl_importlib_resources$_adapters$$$function__10_joinpath,
    impl_importlib_resources$_adapters$$$function__11_name,
    impl_importlib_resources$_adapters$$$function__12_open,
    impl_importlib_resources$_adapters$$$function__13___init__,
    impl_importlib_resources$_adapters$$$function__14_iterdir,
    impl_importlib_resources$_adapters$$$function__15_is_file,
    impl_importlib_resources$_adapters$$$function__16_is_dir,
    impl_importlib_resources$_adapters$$$function__17_joinpath,
    impl_importlib_resources$_adapters$$$function__18_name,
    impl_importlib_resources$_adapters$$$function__19_open,
    impl_importlib_resources$_adapters$$$function__20___init__,
    impl_importlib_resources$_adapters$$$function__21_iterdir,
    NULL,
    impl_importlib_resources$_adapters$$$function__23_joinpath,
    impl_importlib_resources$_adapters$$$function__24_name,
    impl_importlib_resources$_adapters$$$function__25_open,
    impl_importlib_resources$_adapters$$$function__26___init__,
    impl_importlib_resources$_adapters$$$function__27__reader,
    impl_importlib_resources$_adapters$$$function__28__native,
    impl_importlib_resources$_adapters$$$function__29___getattr__,
    impl_importlib_resources$_adapters$$$function__30_files,
    impl_importlib_resources$_adapters$$$function__31_wrap_spec,
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

    function_impl_code *current = functable_importlib_resources$_adapters;
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

    if (offset > sizeof(functable_importlib_resources$_adapters) || offset < 0) {
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
        functable_importlib_resources$_adapters[offset],
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
        module_importlib_resources$_adapters,
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
PyObject *modulecode_importlib_resources$_adapters(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("importlib_resources._adapters");

    // Store the module for future use.
    module_importlib_resources$_adapters = module;

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
        PRINT_STRING("importlib_resources._adapters: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("importlib_resources._adapters: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("importlib_resources._adapters: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initimportlib_resources$_adapters\n");

    moduledict_importlib_resources$_adapters = MODULE_DICT(module_importlib_resources$_adapters);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_importlib_resources$_adapters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_importlib_resources$_adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[8]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_importlib_resources$_adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_importlib_resources$_adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_importlib_resources$_adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_importlib_resources$_adapters);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_importlib_resources$_adapters);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_1__bases = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_1__bases_orig = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_1__metaclass = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_1__prepared = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_2__bases = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_2__bases_orig = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_2__metaclass = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_2__prepared = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_3__bases = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_3__bases_orig = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_3__metaclass = NULL;
    PyObject *tmp_CompatibilityFiles$class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_8a5d6547872a13660fd17d6b76f41a09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    PyObject *locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20 = NULL;
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
    PyObject *locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40 = NULL;
    struct Nuitka_FrameObject *frame_516313355d4edbfd06f80166be42de66_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *locals_importlib_resources$_adapters$$$class__4_SpecPath_46 = NULL;
    struct Nuitka_FrameObject *frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3;
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
    PyObject *locals_importlib_resources$_adapters$$$class__5_ChildPath_81 = NULL;
    struct Nuitka_FrameObject *frame_5b550f0e169d24fffd2db051776774b2_4;
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
    PyObject *locals_importlib_resources$_adapters$$$class__6_OrphanPath_112 = NULL;
    struct Nuitka_FrameObject *frame_4a62cd76ea3823e6f1d0e1b1a513feab_5;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_2);
    }
    frame_8a5d6547872a13660fd17d6b76f41a09 = MAKE_MODULE_FRAME(codeobj_8a5d6547872a13660fd17d6b76f41a09, module_importlib_resources$_adapters);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a5d6547872a13660fd17d6b76f41a09);
    assert(Py_REFCNT(frame_8a5d6547872a13660fd17d6b76f41a09) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[46], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[48];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_importlib_resources$_adapters;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[49];
        tmp_level_value_1 = mod_consts[50];
        frame_8a5d6547872a13660fd17d6b76f41a09->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_importlib_resources$_adapters,
                mod_consts[30],
                mod_consts[50]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_IO();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_importlib_resources$_adapters,
                mod_consts[5],
                mod_consts[50]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[5]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[8];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_importlib_resources$_adapters;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[51];
        tmp_level_value_2 = mod_consts[52];
        frame_8a5d6547872a13660fd17d6b76f41a09->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_importlib_resources$_adapters,
                mod_consts[53],
                mod_consts[50]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[39];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_1;


            tmp_tuple_element_1 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__2_lambda();

            tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);


            tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__3___getattr__();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[39];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_8a5d6547872a13660fd17d6b76f41a09->m_frame.f_lineno = 7;
            tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7);
        locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7 = NULL;
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

        Py_DECREF(locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7);
        locals_importlib_resources$_adapters$$$class__1_SpecLoaderAdapter_7 = NULL;
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
        exception_lineno = 7;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_9);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__4___init__();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__5_get_resource_reader();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20, mod_consts[34], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[41];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_8a5d6547872a13660fd17d6b76f41a09->m_frame.f_lineno = 20;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_13 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20);
        locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20 = NULL;
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

        Py_DECREF(locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20);
        locals_importlib_resources$_adapters$$$class__2_TraversableResourcesLoader_20 = NULL;
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
        exception_lineno = 20;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_13);
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
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[67];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_15 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__6__io_wrapper(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_516313355d4edbfd06f80166be42de66_2 = MAKE_CLASS_FRAME(codeobj_516313355d4edbfd06f80166be42de66, module_importlib_resources$_adapters, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_516313355d4edbfd06f80166be42de66_2);
        assert(Py_REFCNT(frame_516313355d4edbfd06f80166be42de66_2) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_1;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_19, 0, tmp_tuple_element_4);
            assert(tmp_CompatibilityFiles$class_creation_1__bases_orig == NULL);
            tmp_CompatibilityFiles$class_creation_1__bases_orig = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_dircall_arg1_1;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases_orig);
            tmp_dircall_arg1_1 = tmp_CompatibilityFiles$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
                tmp_assign_source_20 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_CompatibilityFiles$class_creation_1__bases == NULL);
            tmp_CompatibilityFiles$class_creation_1__bases = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_DICT_EMPTY();
            assert(tmp_CompatibilityFiles$class_creation_1__class_decl_dict == NULL);
            tmp_CompatibilityFiles$class_creation_1__class_decl_dict = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_metaclass_value_1;
            nuitka_bool tmp_condition_result_1;
            int tmp_truth_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_bases_value_1;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_CompatibilityFiles$class_creation_1__bases);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
            tmp_expression_value_2 = tmp_CompatibilityFiles$class_creation_1__bases;
            tmp_subscript_value_1 = mod_consts[50];
            tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_type_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            Py_DECREF(tmp_type_arg_1);
            if (tmp_metaclass_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_1);
            condexpr_end_1:;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
            tmp_bases_value_1 = tmp_CompatibilityFiles$class_creation_1__bases;
            tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
            Py_DECREF(tmp_metaclass_value_1);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_CompatibilityFiles$class_creation_1__metaclass == NULL);
            tmp_CompatibilityFiles$class_creation_1__metaclass = tmp_assign_source_22;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__metaclass);
            tmp_expression_value_3 = tmp_CompatibilityFiles$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[70]);
            tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__metaclass);
            tmp_expression_value_4 = tmp_CompatibilityFiles$class_creation_1__metaclass;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[70]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_tuple_element_5 = mod_consts[38];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
            tmp_tuple_element_5 = tmp_CompatibilityFiles$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__class_decl_dict);
            tmp_kwargs_value_3 = tmp_CompatibilityFiles$class_creation_1__class_decl_dict;
            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 46;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_CompatibilityFiles$class_creation_1__prepared == NULL);
            tmp_CompatibilityFiles$class_creation_1__prepared = tmp_assign_source_23;
        }
        {
            bool tmp_condition_result_3;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__prepared);
            tmp_expression_value_5 = tmp_CompatibilityFiles$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[71]);
            tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
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
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            tmp_raise_type_1 = PyExc_TypeError;
            tmp_mod_expr_left_1 = mod_consts[72];
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__metaclass);
            tmp_getattr_target_1 = tmp_CompatibilityFiles$class_creation_1__metaclass;
            tmp_getattr_attr_1 = mod_consts[73];
            tmp_getattr_default_1 = mod_consts[74];
            tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_type_arg_2;
                PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
                CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__prepared);
                tmp_type_arg_2 = tmp_CompatibilityFiles$class_creation_1__prepared;
                tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_expression_value_6 == NULL));
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[73]);
                Py_DECREF(tmp_expression_value_6);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_mod_expr_right_1);
            goto try_except_handler_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_right_1);
            if (tmp_raise_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_value = tmp_raise_value_1;
            exception_lineno = 46;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        branch_no_2:;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_DICT_EMPTY();
            assert(tmp_CompatibilityFiles$class_creation_1__prepared == NULL);
            tmp_CompatibilityFiles$class_creation_1__prepared = tmp_assign_source_24;
        }
        branch_end_1:;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__prepared);
            tmp_set_locals_4 = tmp_CompatibilityFiles$class_creation_1__prepared;
            locals_importlib_resources$_adapters$$$class__4_SpecPath_46 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3 = MAKE_CLASS_FRAME(codeobj_ca7d626a024cc0bdcd64a3635fe3fbcf, module_importlib_resources$_adapters, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3);
        assert(Py_REFCNT(frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__7___init__();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__8_iterdir();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__9_is_file();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[25]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__10_joinpath();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[82], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[84]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_4 = PyObject_GetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[84]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[84]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 74;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__11_name();

            frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__11_name();

            frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[67];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__12_open(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_3 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3,
            type_description_3,
            outline_3_var___class__
        );



        assertFrameObject(frame_ca7d626a024cc0bdcd64a3635fe3fbcf_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_2:;
        type_description_2 = "o";
        goto try_except_handler_12;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_CompatibilityFiles$class_creation_1__bases;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_CompatibilityFiles$class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_CompatibilityFiles$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__4_SpecPath_46, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__metaclass);
            tmp_called_value_6 = tmp_CompatibilityFiles$class_creation_1__metaclass;
            tmp_tuple_element_7 = mod_consts[38];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
            tmp_tuple_element_7 = tmp_CompatibilityFiles$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_importlib_resources$_adapters$$$class__4_SpecPath_46;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__class_decl_dict);
            tmp_kwargs_value_4 = tmp_CompatibilityFiles$class_creation_1__class_decl_dict;
            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 46;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_importlib_resources$_adapters$$$class__4_SpecPath_46);
        locals_importlib_resources$_adapters$$$class__4_SpecPath_46 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_importlib_resources$_adapters$$$class__4_SpecPath_46);
        locals_importlib_resources$_adapters$$$class__4_SpecPath_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 46;
        goto try_except_handler_10;
        outline_result_4:;
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[38], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_CompatibilityFiles$class_creation_1__bases_orig);
        tmp_CompatibilityFiles$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_1__bases);
        tmp_CompatibilityFiles$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_1__class_decl_dict);
        tmp_CompatibilityFiles$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_1__metaclass);
        tmp_CompatibilityFiles$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_1__prepared);
        tmp_CompatibilityFiles$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases_orig);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_1__bases_orig);
        tmp_CompatibilityFiles$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__bases);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_1__bases);
        tmp_CompatibilityFiles$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_1__class_decl_dict);
        tmp_CompatibilityFiles$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__metaclass);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_1__metaclass);
        tmp_CompatibilityFiles$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_1__prepared);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_1__prepared);
        tmp_CompatibilityFiles$class_creation_1__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_7;
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[69]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_8);
            assert(tmp_CompatibilityFiles$class_creation_2__bases_orig == NULL);
            tmp_CompatibilityFiles$class_creation_2__bases_orig = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases_orig);
            tmp_dircall_arg1_2 = tmp_CompatibilityFiles$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_CompatibilityFiles$class_creation_2__bases == NULL);
            tmp_CompatibilityFiles$class_creation_2__bases = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_DICT_EMPTY();
            assert(tmp_CompatibilityFiles$class_creation_2__class_decl_dict == NULL);
            tmp_CompatibilityFiles$class_creation_2__class_decl_dict = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_metaclass_value_2;
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_bases_value_2;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_CompatibilityFiles$class_creation_2__bases);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
            tmp_expression_value_8 = tmp_CompatibilityFiles$class_creation_2__bases;
            tmp_subscript_value_2 = mod_consts[50];
            tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 0);
            if (tmp_type_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
            Py_DECREF(tmp_type_arg_3);
            if (tmp_metaclass_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_2);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
            tmp_bases_value_2 = tmp_CompatibilityFiles$class_creation_2__bases;
            tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
            Py_DECREF(tmp_metaclass_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_CompatibilityFiles$class_creation_2__metaclass == NULL);
            tmp_CompatibilityFiles$class_creation_2__metaclass = tmp_assign_source_29;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__metaclass);
            tmp_expression_value_9 = tmp_CompatibilityFiles$class_creation_2__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[70]);
            tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__metaclass);
            tmp_expression_value_10 = tmp_CompatibilityFiles$class_creation_2__metaclass;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[70]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_tuple_element_9 = mod_consts[14];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
            tmp_tuple_element_9 = tmp_CompatibilityFiles$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__class_decl_dict);
            tmp_kwargs_value_5 = tmp_CompatibilityFiles$class_creation_2__class_decl_dict;
            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 81;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_CompatibilityFiles$class_creation_2__prepared == NULL);
            tmp_CompatibilityFiles$class_creation_2__prepared = tmp_assign_source_30;
        }
        {
            bool tmp_condition_result_8;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__prepared);
            tmp_expression_value_11 = tmp_CompatibilityFiles$class_creation_2__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[71]);
            tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
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
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            tmp_raise_type_2 = PyExc_TypeError;
            tmp_mod_expr_left_2 = mod_consts[72];
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__metaclass);
            tmp_getattr_target_2 = tmp_CompatibilityFiles$class_creation_2__metaclass;
            tmp_getattr_attr_2 = mod_consts[73];
            tmp_getattr_default_2 = mod_consts[74];
            tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_type_arg_4;
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
                CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__prepared);
                tmp_type_arg_4 = tmp_CompatibilityFiles$class_creation_2__prepared;
                tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_expression_value_12 == NULL));
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[73]);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_mod_expr_right_2);
            goto try_except_handler_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_raise_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_value = tmp_raise_value_2;
            exception_lineno = 81;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        branch_no_5:;
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_DICT_EMPTY();
            assert(tmp_CompatibilityFiles$class_creation_2__prepared == NULL);
            tmp_CompatibilityFiles$class_creation_2__prepared = tmp_assign_source_31;
        }
        branch_end_4:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__prepared);
            tmp_set_locals_5 = tmp_CompatibilityFiles$class_creation_2__prepared;
            locals_importlib_resources$_adapters$$$class__5_ChildPath_81 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        frame_5b550f0e169d24fffd2db051776774b2_4 = MAKE_CLASS_FRAME(codeobj_5b550f0e169d24fffd2db051776774b2, module_importlib_resources$_adapters, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5b550f0e169d24fffd2db051776774b2_4);
        assert(Py_REFCNT(frame_5b550f0e169d24fffd2db051776774b2_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__13___init__();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__14_iterdir();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__15_is_file();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__16_is_dir();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__17_joinpath();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[82], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[84]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_8 = PyObject_GetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[84]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[84]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 103;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__18_name();

            frame_5b550f0e169d24fffd2db051776774b2_4->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__18_name();

            frame_5b550f0e169d24fffd2db051776774b2_4->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[67];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__19_open(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5b550f0e169d24fffd2db051776774b2_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5b550f0e169d24fffd2db051776774b2_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5b550f0e169d24fffd2db051776774b2_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5b550f0e169d24fffd2db051776774b2_4,
            type_description_3,
            outline_4_var___class__
        );



        assertFrameObject(frame_5b550f0e169d24fffd2db051776774b2_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_15;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_CompatibilityFiles$class_creation_2__bases;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_CompatibilityFiles$class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_CompatibilityFiles$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__5_ChildPath_81, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__metaclass);
            tmp_called_value_10 = tmp_CompatibilityFiles$class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[14];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
            tmp_tuple_element_11 = tmp_CompatibilityFiles$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_importlib_resources$_adapters$$$class__5_ChildPath_81;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__class_decl_dict);
            tmp_kwargs_value_6 = tmp_CompatibilityFiles$class_creation_2__class_decl_dict;
            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 81;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_dictset_value = outline_4_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_importlib_resources$_adapters$$$class__5_ChildPath_81);
        locals_importlib_resources$_adapters$$$class__5_ChildPath_81 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_importlib_resources$_adapters$$$class__5_ChildPath_81);
        locals_importlib_resources$_adapters$$$class__5_ChildPath_81 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

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

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 81;
        goto try_except_handler_13;
        outline_result_5:;
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[14], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_CompatibilityFiles$class_creation_2__bases_orig);
        tmp_CompatibilityFiles$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_2__bases);
        tmp_CompatibilityFiles$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_2__class_decl_dict);
        tmp_CompatibilityFiles$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_2__metaclass);
        tmp_CompatibilityFiles$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_2__prepared);
        tmp_CompatibilityFiles$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases_orig);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_2__bases_orig);
        tmp_CompatibilityFiles$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__bases);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_2__bases);
        tmp_CompatibilityFiles$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_2__class_decl_dict);
        tmp_CompatibilityFiles$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__metaclass);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_2__metaclass);
        tmp_CompatibilityFiles$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_2__prepared);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_2__prepared);
        tmp_CompatibilityFiles$class_creation_2__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_13;
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[69]);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_33, 0, tmp_tuple_element_12);
            assert(tmp_CompatibilityFiles$class_creation_3__bases_orig == NULL);
            tmp_CompatibilityFiles$class_creation_3__bases_orig = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases_orig);
            tmp_dircall_arg1_3 = tmp_CompatibilityFiles$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_34 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_CompatibilityFiles$class_creation_3__bases == NULL);
            tmp_CompatibilityFiles$class_creation_3__bases = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_DICT_EMPTY();
            assert(tmp_CompatibilityFiles$class_creation_3__class_decl_dict == NULL);
            tmp_CompatibilityFiles$class_creation_3__class_decl_dict = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_11;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_CompatibilityFiles$class_creation_3__bases);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
            tmp_expression_value_14 = tmp_CompatibilityFiles$class_creation_3__bases;
            tmp_subscript_value_3 = mod_consts[50];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_3, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_5:;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
            tmp_bases_value_3 = tmp_CompatibilityFiles$class_creation_3__bases;
            tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_CompatibilityFiles$class_creation_3__metaclass == NULL);
            tmp_CompatibilityFiles$class_creation_3__metaclass = tmp_assign_source_36;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__metaclass);
            tmp_expression_value_15 = tmp_CompatibilityFiles$class_creation_3__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[70]);
            tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__metaclass);
            tmp_expression_value_16 = tmp_CompatibilityFiles$class_creation_3__metaclass;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[70]);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_tuple_element_13 = mod_consts[18];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
            tmp_tuple_element_13 = tmp_CompatibilityFiles$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__class_decl_dict);
            tmp_kwargs_value_7 = tmp_CompatibilityFiles$class_creation_3__class_decl_dict;
            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 112;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_CompatibilityFiles$class_creation_3__prepared == NULL);
            tmp_CompatibilityFiles$class_creation_3__prepared = tmp_assign_source_37;
        }
        {
            bool tmp_condition_result_13;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_17;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__prepared);
            tmp_expression_value_17 = tmp_CompatibilityFiles$class_creation_3__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[71]);
            tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_13 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_13 != false) {
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
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_getattr_target_3;
            PyObject *tmp_getattr_attr_3;
            PyObject *tmp_getattr_default_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[72];
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__metaclass);
            tmp_getattr_target_3 = tmp_CompatibilityFiles$class_creation_3__metaclass;
            tmp_getattr_attr_3 = mod_consts[73];
            tmp_getattr_default_3 = mod_consts[74];
            tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_18;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
                CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__prepared);
                tmp_type_arg_6 = tmp_CompatibilityFiles$class_creation_3__prepared;
                tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_18 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[73]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_mod_expr_right_3);
            goto try_except_handler_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_raise_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 112;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        branch_no_8:;
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = MAKE_DICT_EMPTY();
            assert(tmp_CompatibilityFiles$class_creation_3__prepared == NULL);
            tmp_CompatibilityFiles$class_creation_3__prepared = tmp_assign_source_38;
        }
        branch_end_7:;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__prepared);
            tmp_set_locals_6 = tmp_CompatibilityFiles$class_creation_3__prepared;
            locals_importlib_resources$_adapters$$$class__6_OrphanPath_112 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        frame_4a62cd76ea3823e6f1d0e1b1a513feab_5 = MAKE_CLASS_FRAME(codeobj_4a62cd76ea3823e6f1d0e1b1a513feab, module_importlib_resources$_adapters, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4a62cd76ea3823e6f1d0e1b1a513feab_5);
        assert(Py_REFCNT(frame_4a62cd76ea3823e6f1d0e1b1a513feab_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__20___init__();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__21_iterdir();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__22_is_file();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[25]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__23_joinpath();

        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[82], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[84]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_12 = PyObject_GetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[84]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[84]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__24_name();

            frame_4a62cd76ea3823e6f1d0e1b1a513feab_5->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__24_name();

            frame_4a62cd76ea3823e6f1d0e1b1a513feab_5->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[67];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__25_open(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4a62cd76ea3823e6f1d0e1b1a513feab_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4a62cd76ea3823e6f1d0e1b1a513feab_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4a62cd76ea3823e6f1d0e1b1a513feab_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4a62cd76ea3823e6f1d0e1b1a513feab_5,
            type_description_3,
            outline_5_var___class__
        );



        assertFrameObject(frame_4a62cd76ea3823e6f1d0e1b1a513feab_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_4:;
        type_description_2 = "o";
        goto try_except_handler_18;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_CompatibilityFiles$class_creation_3__bases;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_CompatibilityFiles$class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_CompatibilityFiles$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__metaclass);
            tmp_called_value_14 = tmp_CompatibilityFiles$class_creation_3__metaclass;
            tmp_tuple_element_15 = mod_consts[18];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
            tmp_tuple_element_15 = tmp_CompatibilityFiles$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_importlib_resources$_adapters$$$class__6_OrphanPath_112;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__class_decl_dict);
            tmp_kwargs_value_8 = tmp_CompatibilityFiles$class_creation_3__class_decl_dict;
            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 112;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_dictset_value = outline_5_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112);
        locals_importlib_resources$_adapters$$$class__6_OrphanPath_112 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_importlib_resources$_adapters$$$class__6_OrphanPath_112);
        locals_importlib_resources$_adapters$$$class__6_OrphanPath_112 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

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

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 112;
        goto try_except_handler_16;
        outline_result_6:;
        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[18], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_CompatibilityFiles$class_creation_3__bases_orig);
        tmp_CompatibilityFiles$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_3__bases);
        tmp_CompatibilityFiles$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_3__class_decl_dict);
        tmp_CompatibilityFiles$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_3__metaclass);
        tmp_CompatibilityFiles$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_CompatibilityFiles$class_creation_3__prepared);
        tmp_CompatibilityFiles$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_2;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases_orig);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_3__bases_orig);
        tmp_CompatibilityFiles$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__bases);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_3__bases);
        tmp_CompatibilityFiles$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_3__class_decl_dict);
        tmp_CompatibilityFiles$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__metaclass);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_3__metaclass);
        tmp_CompatibilityFiles$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_CompatibilityFiles$class_creation_3__prepared);
        Py_DECREF(tmp_CompatibilityFiles$class_creation_3__prepared);
        tmp_CompatibilityFiles$class_creation_3__prepared = NULL;


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__26___init__();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_7;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_7 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__27__reader();

            frame_516313355d4edbfd06f80166be42de66_2->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_516313355d4edbfd06f80166be42de66_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_516313355d4edbfd06f80166be42de66_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_516313355d4edbfd06f80166be42de66_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_516313355d4edbfd06f80166be42de66_2,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_516313355d4edbfd06f80166be42de66_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_4:;


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__28__native();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__29___getattr__();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_importlib_resources$_adapters$$$function__30_files();

        tmp_res = PyDict_SetItem(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40, mod_consts[36], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_16 = (PyObject *)&PyType_Type;
            tmp_tuple_element_16 = mod_consts[2];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_3__class_decl_dict;
            frame_8a5d6547872a13660fd17d6b76f41a09->m_frame.f_lineno = 40;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_18 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40);
        locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40);
        locals_importlib_resources$_adapters$$$class__3_CompatibilityFiles_40 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 40;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_18);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a5d6547872a13660fd17d6b76f41a09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a5d6547872a13660fd17d6b76f41a09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a5d6547872a13660fd17d6b76f41a09, exception_lineno);
    }



    assertFrameObject(frame_8a5d6547872a13660fd17d6b76f41a09);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_importlib_resources$_adapters$$$function__31_wrap_spec();

        UPDATE_STRING_DICT1(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_41);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("importlib_resources._adapters", false);

    Py_INCREF(module_importlib_resources$_adapters);
    return module_importlib_resources$_adapters;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_importlib_resources$_adapters, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("importlib_resources$_adapters", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
