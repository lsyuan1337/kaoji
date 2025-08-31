/* Generated code for Python module 'requests.packages.urllib3.packages.six'
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

/* The "module_requests$packages$urllib3$packages$six" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$packages$urllib3$packages$six;
PyDictObject *moduledict_requests$packages$urllib3$packages$six;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[235];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[235];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("requests.packages.urllib3.packages.six"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 235; i++) {
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
void checkModuleConstants_requests$packages$urllib3$packages$six(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 235; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2e2b99dad113b99abacca2cdeddfa4ba;
static PyCodeObject *codeobj_19ee6ada3c32d8097dbd0e0aed97983c;
static PyCodeObject *codeobj_56f9fb144a42eb9b85c64c2a81909be9;
static PyCodeObject *codeobj_e41fef4404529eb249a482112ed80e36;
static PyCodeObject *codeobj_ccdc9daa58851d834336dfc2ef838c90;
static PyCodeObject *codeobj_7e0ce795a0e15ba107a45430afac45e8;
static PyCodeObject *codeobj_f63a46e077707bcdeb7d583c021ff373;
static PyCodeObject *codeobj_afeededa10ebbe6cc9198dc86d2c02fb;
static PyCodeObject *codeobj_60fdd7819851a4000d885eb46f46d2c9;
static PyCodeObject *codeobj_729463721ea3a82d34a240f80853c655;
static PyCodeObject *codeobj_f4afc12f8af8d5da4027920101063f34;
static PyCodeObject *codeobj_f9812b09823d52670a9510c162062932;
static PyCodeObject *codeobj_4ff73577d7f01b43a13cf91264414d1c;
static PyCodeObject *codeobj_2616b37817560251d946346c1a7e8d3d;
static PyCodeObject *codeobj_eb543238f8b1b5f48e7cbc6c1caad4f0;
static PyCodeObject *codeobj_2ea121e4dc6dc019ec092498c2f1295e;
static PyCodeObject *codeobj_d892b311c2cf1ef31bb4658ae2b74703;
static PyCodeObject *codeobj_757b7b63a94df50e12d61fc082c703b2;
static PyCodeObject *codeobj_cc5796cd58852b24ebcda1d8be2b463e;
static PyCodeObject *codeobj_39b07536116f83f5b21dd23e11a50903;
static PyCodeObject *codeobj_5f6fb60b6a5aebad764b08c5420ab9e1;
static PyCodeObject *codeobj_90d2102058b24bc149502d4fbcf96b25;
static PyCodeObject *codeobj_b0e4a6433e0c147f0d3ce1a74a850471;
static PyCodeObject *codeobj_a4d6229a28ee033db4e84e003c26a01c;
static PyCodeObject *codeobj_9f65e51bf82db96827ae3bd2ed82dfc5;
static PyCodeObject *codeobj_d9ee95b57ae5a1a56f217c073efc1913;
static PyCodeObject *codeobj_4c39cdfe4caf22ad94c73722cb7027e0;
static PyCodeObject *codeobj_93d77ca9b43d087609eb32709374a354;
static PyCodeObject *codeobj_bb0340490c086145e9e948ef9d4464fc;
static PyCodeObject *codeobj_f52400a495962ea33e50ec70814b5392;
static PyCodeObject *codeobj_e5622042c336faecfd0b4ab3a2d89077;
static PyCodeObject *codeobj_69b0897a610bcae3d8a35ecfbda962eb;
static PyCodeObject *codeobj_ffcab8aedf04e8b6716f9a84ea53ff3c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[210]); CHECK_OBJECT(module_filename_obj);
    codeobj_2e2b99dad113b99abacca2cdeddfa4ba = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[211], NULL, 1, 0, 0);
    codeobj_19ee6ada3c32d8097dbd0e0aed97983c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[212], mod_consts[212], NULL, NULL, 0, 0, 0);
    codeobj_56f9fb144a42eb9b85c64c2a81909be9 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[213], NULL, 0, 0, 0);
    codeobj_e41fef4404529eb249a482112ed80e36 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[213], NULL, 0, 0, 0);
    codeobj_ccdc9daa58851d834336dfc2ef838c90 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[213], NULL, 0, 0, 0);
    codeobj_7e0ce795a0e15ba107a45430afac45e8 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[213], NULL, 0, 0, 0);
    codeobj_f63a46e077707bcdeb7d583c021ff373 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[214], NULL, 3, 0, 0);
    codeobj_afeededa10ebbe6cc9198dc86d2c02fb = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[215], NULL, 2, 0, 0);
    codeobj_60fdd7819851a4000d885eb46f46d2c9 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[216], NULL, 4, 0, 0);
    codeobj_729463721ea3a82d34a240f80853c655 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[217], NULL, 6, 0, 0);
    codeobj_f4afc12f8af8d5da4027920101063f34 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[218], NULL, 2, 0, 0);
    codeobj_f9812b09823d52670a9510c162062932 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[219], NULL, 1, 0, 0);
    codeobj_4ff73577d7f01b43a13cf91264414d1c = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[220], NULL, 1, 0, 0);
    codeobj_2616b37817560251d946346c1a7e8d3d = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[221], NULL, 1, 0, 0);
    codeobj_eb543238f8b1b5f48e7cbc6c1caad4f0 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[222], NULL, 1, 0, 0);
    codeobj_2ea121e4dc6dc019ec092498c2f1295e = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[223], NULL, 1, 0, 0);
    codeobj_d892b311c2cf1ef31bb4658ae2b74703 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[224], NULL, 1, 0, 0);
    codeobj_757b7b63a94df50e12d61fc082c703b2 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[224], NULL, 1, 0, 0);
    codeobj_cc5796cd58852b24ebcda1d8be2b463e = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[225], NULL, 1, 0, 0);
    codeobj_39b07536116f83f5b21dd23e11a50903 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[226], NULL, 3, 0, 0);
    codeobj_5f6fb60b6a5aebad764b08c5420ab9e1 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[227], NULL, 1, 0, 0);
    codeobj_90d2102058b24bc149502d4fbcf96b25 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[227], NULL, 1, 0, 0);
    codeobj_b0e4a6433e0c147f0d3ce1a74a850471 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[228], NULL, 1, 0, 0);
    codeobj_a4d6229a28ee033db4e84e003c26a01c = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[228], NULL, 1, 0, 0);
    codeobj_9f65e51bf82db96827ae3bd2ed82dfc5 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[228], NULL, 1, 0, 0);
    codeobj_d9ee95b57ae5a1a56f217c073efc1913 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[220], NULL, 1, 0, 0);
    codeobj_4c39cdfe4caf22ad94c73722cb7027e0 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[229], NULL, 0, 0, 0);
    codeobj_93d77ca9b43d087609eb32709374a354 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[219], NULL, 1, 0, 0);
    codeobj_bb0340490c086145e9e948ef9d4464fc = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[204], mod_consts[204], mod_consts[230], NULL, 3, 0, 0);
    codeobj_f52400a495962ea33e50ec70814b5392 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[224], NULL, 1, 0, 0);
    codeobj_e5622042c336faecfd0b4ab3a2d89077 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[224], NULL, 1, 0, 0);
    codeobj_69b0897a610bcae3d8a35ecfbda962eb = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[231], NULL, 2, 0, 0);
    codeobj_ffcab8aedf04e8b6716f9a84ea53ff3c = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[52], mod_consts[52], mod_consts[232], mod_consts[233], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__10_add_move();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__11_remove_move();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__12_advance_iterator();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__13_get_unbound_function();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__14_callable();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__15_get_unbound_function();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__16_next();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__17_iterkeys();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__18_itervalues();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__19_iteritems();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__20_b();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__21_u();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__23_b();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__24_u();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__25_reraise(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__26_exec_(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__27_print_();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__27_print_$$$function__1_write(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__28_with_metaclass(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__2__add_doc();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__3__import_module();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__4___init__();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__5___get__();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__6___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__7__resolve();


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__8___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__9__resolve();


// The module function definitions.
static PyObject *impl_requests$packages$urllib3$packages$six$$$function__2__add_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_doc = python_pars[1];
    struct Nuitka_FrameObject *frame_f4afc12f8af8d5da4027920101063f34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4afc12f8af8d5da4027920101063f34 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4afc12f8af8d5da4027920101063f34)) {
        Py_XDECREF(cache_frame_f4afc12f8af8d5da4027920101063f34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4afc12f8af8d5da4027920101063f34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4afc12f8af8d5da4027920101063f34 = MAKE_FUNCTION_FRAME(codeobj_f4afc12f8af8d5da4027920101063f34, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4afc12f8af8d5da4027920101063f34->m_type_description == NULL);
    frame_f4afc12f8af8d5da4027920101063f34 = cache_frame_f4afc12f8af8d5da4027920101063f34;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4afc12f8af8d5da4027920101063f34);
    assert(Py_REFCNT(frame_f4afc12f8af8d5da4027920101063f34) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_doc);
        tmp_assattr_value_1 = par_doc;
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4afc12f8af8d5da4027920101063f34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4afc12f8af8d5da4027920101063f34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4afc12f8af8d5da4027920101063f34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4afc12f8af8d5da4027920101063f34,
        type_description_1,
        par_func,
        par_doc
    );


    // Release cached frame if used for exception.
    if (frame_f4afc12f8af8d5da4027920101063f34 == cache_frame_f4afc12f8af8d5da4027920101063f34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4afc12f8af8d5da4027920101063f34);
        cache_frame_f4afc12f8af8d5da4027920101063f34 = NULL;
    }

    assertFrameObject(frame_f4afc12f8af8d5da4027920101063f34);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__3__import_module(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    struct Nuitka_FrameObject *frame_f9812b09823d52670a9510c162062932;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f9812b09823d52670a9510c162062932 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9812b09823d52670a9510c162062932)) {
        Py_XDECREF(cache_frame_f9812b09823d52670a9510c162062932);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9812b09823d52670a9510c162062932 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9812b09823d52670a9510c162062932 = MAKE_FUNCTION_FRAME(codeobj_f9812b09823d52670a9510c162062932, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9812b09823d52670a9510c162062932->m_type_description == NULL);
    frame_f9812b09823d52670a9510c162062932 = cache_frame_f9812b09823d52670a9510c162062932;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f9812b09823d52670a9510c162062932);
    assert(Py_REFCNT(frame_f9812b09823d52670a9510c162062932) == 2);

    // Framed code:
    {
        PyObject *tmp_name_value_1;
        PyObject *tmp_imported_value_1;
        CHECK_OBJECT(par_name);
        tmp_name_value_1 = par_name;
        frame_f9812b09823d52670a9510c162062932->m_frame.f_lineno = 74;
        tmp_imported_value_1 = IMPORT_MODULE1(tmp_name_value_1);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_1);
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_f9812b09823d52670a9510c162062932, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9812b09823d52670a9510c162062932->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9812b09823d52670a9510c162062932, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9812b09823d52670a9510c162062932,
        type_description_1,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_f9812b09823d52670a9510c162062932 == cache_frame_f9812b09823d52670a9510c162062932) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9812b09823d52670a9510c162062932);
        cache_frame_f9812b09823d52670a9510c162062932 = NULL;
    }

    assertFrameObject(frame_f9812b09823d52670a9510c162062932);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_afeededa10ebbe6cc9198dc86d2c02fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afeededa10ebbe6cc9198dc86d2c02fb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afeededa10ebbe6cc9198dc86d2c02fb)) {
        Py_XDECREF(cache_frame_afeededa10ebbe6cc9198dc86d2c02fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afeededa10ebbe6cc9198dc86d2c02fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afeededa10ebbe6cc9198dc86d2c02fb = MAKE_FUNCTION_FRAME(codeobj_afeededa10ebbe6cc9198dc86d2c02fb, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afeededa10ebbe6cc9198dc86d2c02fb->m_type_description == NULL);
    frame_afeededa10ebbe6cc9198dc86d2c02fb = cache_frame_afeededa10ebbe6cc9198dc86d2c02fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_afeededa10ebbe6cc9198dc86d2c02fb);
    assert(Py_REFCNT(frame_afeededa10ebbe6cc9198dc86d2c02fb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afeededa10ebbe6cc9198dc86d2c02fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afeededa10ebbe6cc9198dc86d2c02fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afeededa10ebbe6cc9198dc86d2c02fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afeededa10ebbe6cc9198dc86d2c02fb,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_afeededa10ebbe6cc9198dc86d2c02fb == cache_frame_afeededa10ebbe6cc9198dc86d2c02fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afeededa10ebbe6cc9198dc86d2c02fb);
        cache_frame_afeededa10ebbe6cc9198dc86d2c02fb = NULL;
    }

    assertFrameObject(frame_afeededa10ebbe6cc9198dc86d2c02fb);

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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__5___get__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_tp = python_pars[2];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_f63a46e077707bcdeb7d583c021ff373;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f63a46e077707bcdeb7d583c021ff373 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f63a46e077707bcdeb7d583c021ff373)) {
        Py_XDECREF(cache_frame_f63a46e077707bcdeb7d583c021ff373);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f63a46e077707bcdeb7d583c021ff373 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f63a46e077707bcdeb7d583c021ff373 = MAKE_FUNCTION_FRAME(codeobj_f63a46e077707bcdeb7d583c021ff373, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f63a46e077707bcdeb7d583c021ff373->m_type_description == NULL);
    frame_f63a46e077707bcdeb7d583c021ff373 = cache_frame_f63a46e077707bcdeb7d583c021ff373;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f63a46e077707bcdeb7d583c021ff373);
    assert(Py_REFCNT(frame_f63a46e077707bcdeb7d583c021ff373) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f63a46e077707bcdeb7d583c021ff373->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_obj);
        tmp_setattr_target_1 = par_obj;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_setattr_value_1 = var_result;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_tp);
        tmp_args_element_value_1 = par_tp;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f63a46e077707bcdeb7d583c021ff373->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_f63a46e077707bcdeb7d583c021ff373, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f63a46e077707bcdeb7d583c021ff373->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f63a46e077707bcdeb7d583c021ff373, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f63a46e077707bcdeb7d583c021ff373,
        type_description_1,
        par_self,
        par_obj,
        par_tp,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_f63a46e077707bcdeb7d583c021ff373 == cache_frame_f63a46e077707bcdeb7d583c021ff373) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f63a46e077707bcdeb7d583c021ff373);
        cache_frame_f63a46e077707bcdeb7d583c021ff373 = NULL;
    }

    assertFrameObject(frame_f63a46e077707bcdeb7d583c021ff373);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_tp);
    Py_DECREF(par_tp);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_tp);
    Py_DECREF(par_tp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_old = python_pars[2];
    PyObject *par_new = python_pars[3];
    struct Nuitka_FrameObject *frame_60fdd7819851a4000d885eb46f46d2c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_60fdd7819851a4000d885eb46f46d2c9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_60fdd7819851a4000d885eb46f46d2c9)) {
        Py_XDECREF(cache_frame_60fdd7819851a4000d885eb46f46d2c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60fdd7819851a4000d885eb46f46d2c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60fdd7819851a4000d885eb46f46d2c9 = MAKE_FUNCTION_FRAME(codeobj_60fdd7819851a4000d885eb46f46d2c9, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_60fdd7819851a4000d885eb46f46d2c9->m_type_description == NULL);
    frame_60fdd7819851a4000d885eb46f46d2c9 = cache_frame_60fdd7819851a4000d885eb46f46d2c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_60fdd7819851a4000d885eb46f46d2c9);
    assert(Py_REFCNT(frame_60fdd7819851a4000d885eb46f46d2c9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_requests$packages$urllib3$packages$six, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_60fdd7819851a4000d885eb46f46d2c9->m_frame.f_lineno = 94;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooN";
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
        CHECK_OBJECT(par_new);
        tmp_cmp_expr_left_1 = par_new;
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
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_name);
        tmp_assign_source_1 = par_name;
        {
            PyObject *old = par_new;
            assert(old != NULL);
            par_new = tmp_assign_source_1;
            Py_INCREF(par_new);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_new);
        tmp_assattr_value_1 = par_new;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_old);
        tmp_assattr_value_2 = par_old;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60fdd7819851a4000d885eb46f46d2c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60fdd7819851a4000d885eb46f46d2c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60fdd7819851a4000d885eb46f46d2c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60fdd7819851a4000d885eb46f46d2c9,
        type_description_1,
        par_self,
        par_name,
        par_old,
        par_new,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_60fdd7819851a4000d885eb46f46d2c9 == cache_frame_60fdd7819851a4000d885eb46f46d2c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_60fdd7819851a4000d885eb46f46d2c9);
        cache_frame_60fdd7819851a4000d885eb46f46d2c9 = NULL;
    }

    assertFrameObject(frame_60fdd7819851a4000d885eb46f46d2c9);

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
    Py_XDECREF(par_new);
    par_new = NULL;
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

    Py_XDECREF(par_new);
    par_new = NULL;
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
    CHECK_OBJECT(par_old);
    Py_DECREF(par_old);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_old);
    Py_DECREF(par_old);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__7__resolve(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4ff73577d7f01b43a13cf91264414d1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ff73577d7f01b43a13cf91264414d1c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ff73577d7f01b43a13cf91264414d1c)) {
        Py_XDECREF(cache_frame_4ff73577d7f01b43a13cf91264414d1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ff73577d7f01b43a13cf91264414d1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ff73577d7f01b43a13cf91264414d1c = MAKE_FUNCTION_FRAME(codeobj_4ff73577d7f01b43a13cf91264414d1c, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ff73577d7f01b43a13cf91264414d1c->m_type_description == NULL);
    frame_4ff73577d7f01b43a13cf91264414d1c = cache_frame_4ff73577d7f01b43a13cf91264414d1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ff73577d7f01b43a13cf91264414d1c);
    assert(Py_REFCNT(frame_4ff73577d7f01b43a13cf91264414d1c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4ff73577d7f01b43a13cf91264414d1c->m_frame.f_lineno = 103;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
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
        exception_tb = MAKE_TRACEBACK(frame_4ff73577d7f01b43a13cf91264414d1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ff73577d7f01b43a13cf91264414d1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ff73577d7f01b43a13cf91264414d1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ff73577d7f01b43a13cf91264414d1c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4ff73577d7f01b43a13cf91264414d1c == cache_frame_4ff73577d7f01b43a13cf91264414d1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ff73577d7f01b43a13cf91264414d1c);
        cache_frame_4ff73577d7f01b43a13cf91264414d1c = NULL;
    }

    assertFrameObject(frame_4ff73577d7f01b43a13cf91264414d1c);

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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_old_mod = python_pars[2];
    PyObject *par_new_mod = python_pars[3];
    PyObject *par_old_attr = python_pars[4];
    PyObject *par_new_attr = python_pars[5];
    struct Nuitka_FrameObject *frame_729463721ea3a82d34a240f80853c655;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_729463721ea3a82d34a240f80853c655 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_729463721ea3a82d34a240f80853c655)) {
        Py_XDECREF(cache_frame_729463721ea3a82d34a240f80853c655);

#if _DEBUG_REFCOUNTS
        if (cache_frame_729463721ea3a82d34a240f80853c655 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_729463721ea3a82d34a240f80853c655 = MAKE_FUNCTION_FRAME(codeobj_729463721ea3a82d34a240f80853c655, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_729463721ea3a82d34a240f80853c655->m_type_description == NULL);
    frame_729463721ea3a82d34a240f80853c655 = cache_frame_729463721ea3a82d34a240f80853c655;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_729463721ea3a82d34a240f80853c655);
    assert(Py_REFCNT(frame_729463721ea3a82d34a240f80853c655) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_requests$packages$urllib3$packages$six, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_729463721ea3a82d34a240f80853c655->m_frame.f_lineno = 109;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooN";
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
        CHECK_OBJECT(par_new_mod);
        tmp_cmp_expr_left_1 = par_new_mod;
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
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_name);
        tmp_assign_source_1 = par_name;
        {
            PyObject *old = par_new_mod;
            assert(old != NULL);
            par_new_mod = tmp_assign_source_1;
            Py_INCREF(par_new_mod);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_new_mod);
        tmp_assattr_value_1 = par_new_mod;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_new_attr);
        tmp_cmp_expr_left_2 = par_new_attr;
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
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_old_attr);
        tmp_cmp_expr_left_3 = par_old_attr;
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
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_name);
        tmp_assign_source_2 = par_name;
        {
            PyObject *old = par_new_attr;
            assert(old != NULL);
            par_new_attr = tmp_assign_source_2;
            Py_INCREF(par_new_attr);
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_old_attr);
        tmp_assign_source_3 = par_old_attr;
        {
            PyObject *old = par_new_attr;
            assert(old != NULL);
            par_new_attr = tmp_assign_source_3;
            Py_INCREF(par_new_attr);
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_new_attr);
        tmp_assattr_value_2 = par_new_attr;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_old_mod);
        tmp_assattr_value_3 = par_old_mod;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_old_attr);
        tmp_cmp_expr_left_4 = par_old_attr;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_name);
        tmp_assign_source_4 = par_name;
        {
            PyObject *old = par_old_attr;
            assert(old != NULL);
            par_old_attr = tmp_assign_source_4;
            Py_INCREF(par_old_attr);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_old_attr);
        tmp_assattr_value_4 = par_old_attr;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[14], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_729463721ea3a82d34a240f80853c655, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_729463721ea3a82d34a240f80853c655->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_729463721ea3a82d34a240f80853c655, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_729463721ea3a82d34a240f80853c655,
        type_description_1,
        par_self,
        par_name,
        par_old_mod,
        par_new_mod,
        par_old_attr,
        par_new_attr,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_729463721ea3a82d34a240f80853c655 == cache_frame_729463721ea3a82d34a240f80853c655) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_729463721ea3a82d34a240f80853c655);
        cache_frame_729463721ea3a82d34a240f80853c655 = NULL;
    }

    assertFrameObject(frame_729463721ea3a82d34a240f80853c655);

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
    Py_XDECREF(par_new_mod);
    par_new_mod = NULL;
    Py_XDECREF(par_old_attr);
    par_old_attr = NULL;
    Py_XDECREF(par_new_attr);
    par_new_attr = NULL;
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

    Py_XDECREF(par_new_mod);
    par_new_mod = NULL;
    Py_XDECREF(par_old_attr);
    par_old_attr = NULL;
    Py_XDECREF(par_new_attr);
    par_new_attr = NULL;
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
    CHECK_OBJECT(par_old_mod);
    Py_DECREF(par_old_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_old_mod);
    Py_DECREF(par_old_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__9__resolve(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_module = NULL;
    struct Nuitka_FrameObject *frame_2616b37817560251d946346c1a7e8d3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2616b37817560251d946346c1a7e8d3d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2616b37817560251d946346c1a7e8d3d)) {
        Py_XDECREF(cache_frame_2616b37817560251d946346c1a7e8d3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2616b37817560251d946346c1a7e8d3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2616b37817560251d946346c1a7e8d3d = MAKE_FUNCTION_FRAME(codeobj_2616b37817560251d946346c1a7e8d3d, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2616b37817560251d946346c1a7e8d3d->m_type_description == NULL);
    frame_2616b37817560251d946346c1a7e8d3d = cache_frame_2616b37817560251d946346c1a7e8d3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2616b37817560251d946346c1a7e8d3d);
    assert(Py_REFCNT(frame_2616b37817560251d946346c1a7e8d3d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2616b37817560251d946346c1a7e8d3d->m_frame.f_lineno = 127;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_module == NULL);
        var_module = tmp_assign_source_1;
    }
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_module);
        tmp_getattr_target_1 = var_module;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_2616b37817560251d946346c1a7e8d3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2616b37817560251d946346c1a7e8d3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2616b37817560251d946346c1a7e8d3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2616b37817560251d946346c1a7e8d3d,
        type_description_1,
        par_self,
        var_module
    );


    // Release cached frame if used for exception.
    if (frame_2616b37817560251d946346c1a7e8d3d == cache_frame_2616b37817560251d946346c1a7e8d3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2616b37817560251d946346c1a7e8d3d);
        cache_frame_2616b37817560251d946346c1a7e8d3d = NULL;
    }

    assertFrameObject(frame_2616b37817560251d946346c1a7e8d3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_module);
    Py_DECREF(var_module);
    var_module = NULL;
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

    Py_XDECREF(var_module);
    var_module = NULL;
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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__10_add_move(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_move = python_pars[0];
    struct Nuitka_FrameObject *frame_eb543238f8b1b5f48e7cbc6c1caad4f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0)) {
        Py_XDECREF(cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0 = MAKE_FUNCTION_FRAME(codeobj_eb543238f8b1b5f48e7cbc6c1caad4f0, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0->m_type_description == NULL);
    frame_eb543238f8b1b5f48e7cbc6c1caad4f0 = cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb543238f8b1b5f48e7cbc6c1caad4f0);
    assert(Py_REFCNT(frame_eb543238f8b1b5f48e7cbc6c1caad4f0) == 2);

    // Framed code:
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        tmp_setattr_target_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_setattr_target_1 == NULL)) {
            tmp_setattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_setattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_move);
        tmp_expression_value_1 = par_move;
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_move);
        tmp_setattr_value_1 = par_move;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb543238f8b1b5f48e7cbc6c1caad4f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb543238f8b1b5f48e7cbc6c1caad4f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb543238f8b1b5f48e7cbc6c1caad4f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb543238f8b1b5f48e7cbc6c1caad4f0,
        type_description_1,
        par_move
    );


    // Release cached frame if used for exception.
    if (frame_eb543238f8b1b5f48e7cbc6c1caad4f0 == cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0);
        cache_frame_eb543238f8b1b5f48e7cbc6c1caad4f0 = NULL;
    }

    assertFrameObject(frame_eb543238f8b1b5f48e7cbc6c1caad4f0);

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
    CHECK_OBJECT(par_move);
    Py_DECREF(par_move);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_move);
    Py_DECREF(par_move);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__11_remove_move(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    struct Nuitka_FrameObject *frame_93d77ca9b43d087609eb32709374a354;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_93d77ca9b43d087609eb32709374a354 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93d77ca9b43d087609eb32709374a354)) {
        Py_XDECREF(cache_frame_93d77ca9b43d087609eb32709374a354);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93d77ca9b43d087609eb32709374a354 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93d77ca9b43d087609eb32709374a354 = MAKE_FUNCTION_FRAME(codeobj_93d77ca9b43d087609eb32709374a354, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93d77ca9b43d087609eb32709374a354->m_type_description == NULL);
    frame_93d77ca9b43d087609eb32709374a354 = cache_frame_93d77ca9b43d087609eb32709374a354;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93d77ca9b43d087609eb32709374a354);
    assert(Py_REFCNT(frame_93d77ca9b43d087609eb32709374a354) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        frame_93d77ca9b43d087609eb32709374a354->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_93d77ca9b43d087609eb32709374a354, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_93d77ca9b43d087609eb32709374a354, exception_keeper_lineno_1);
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
    // Tried code:
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_delsubscr_subscript_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_1);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_name);
        tmp_delsubscr_subscript_1 = par_name;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_93d77ca9b43d087609eb32709374a354, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_93d77ca9b43d087609eb32709374a354, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
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
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[18];
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        frame_93d77ca9b43d087609eb32709374a354->m_frame.f_lineno = 202;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 202;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto try_except_handler_4;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 199;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_93d77ca9b43d087609eb32709374a354->m_frame) frame_93d77ca9b43d087609eb32709374a354->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_end_2:;
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

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 196;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_93d77ca9b43d087609eb32709374a354->m_frame) frame_93d77ca9b43d087609eb32709374a354->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_3;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93d77ca9b43d087609eb32709374a354, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93d77ca9b43d087609eb32709374a354->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93d77ca9b43d087609eb32709374a354, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93d77ca9b43d087609eb32709374a354,
        type_description_1,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_93d77ca9b43d087609eb32709374a354 == cache_frame_93d77ca9b43d087609eb32709374a354) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93d77ca9b43d087609eb32709374a354);
        cache_frame_93d77ca9b43d087609eb32709374a354 = NULL;
    }

    assertFrameObject(frame_93d77ca9b43d087609eb32709374a354);

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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__12_advance_iterator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_it = python_pars[0];
    struct Nuitka_FrameObject *frame_2ea121e4dc6dc019ec092498c2f1295e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2ea121e4dc6dc019ec092498c2f1295e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2ea121e4dc6dc019ec092498c2f1295e)) {
        Py_XDECREF(cache_frame_2ea121e4dc6dc019ec092498c2f1295e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ea121e4dc6dc019ec092498c2f1295e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ea121e4dc6dc019ec092498c2f1295e = MAKE_FUNCTION_FRAME(codeobj_2ea121e4dc6dc019ec092498c2f1295e, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ea121e4dc6dc019ec092498c2f1295e->m_type_description == NULL);
    frame_2ea121e4dc6dc019ec092498c2f1295e = cache_frame_2ea121e4dc6dc019ec092498c2f1295e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ea121e4dc6dc019ec092498c2f1295e);
    assert(Py_REFCNT(frame_2ea121e4dc6dc019ec092498c2f1295e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_it);
        tmp_called_instance_1 = par_it;
        frame_2ea121e4dc6dc019ec092498c2f1295e->m_frame.f_lineno = 231;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
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
        exception_tb = MAKE_TRACEBACK(frame_2ea121e4dc6dc019ec092498c2f1295e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ea121e4dc6dc019ec092498c2f1295e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ea121e4dc6dc019ec092498c2f1295e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ea121e4dc6dc019ec092498c2f1295e,
        type_description_1,
        par_it
    );


    // Release cached frame if used for exception.
    if (frame_2ea121e4dc6dc019ec092498c2f1295e == cache_frame_2ea121e4dc6dc019ec092498c2f1295e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ea121e4dc6dc019ec092498c2f1295e);
        cache_frame_2ea121e4dc6dc019ec092498c2f1295e = NULL;
    }

    assertFrameObject(frame_2ea121e4dc6dc019ec092498c2f1295e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_it);
    Py_DECREF(par_it);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_it);
    Py_DECREF(par_it);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__13_get_unbound_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_unbound = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_unbound);
    tmp_return_value = par_unbound;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_unbound);
    Py_DECREF(par_unbound);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__14_callable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_cc5796cd58852b24ebcda1d8be2b463e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc5796cd58852b24ebcda1d8be2b463e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc5796cd58852b24ebcda1d8be2b463e)) {
        Py_XDECREF(cache_frame_cc5796cd58852b24ebcda1d8be2b463e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc5796cd58852b24ebcda1d8be2b463e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc5796cd58852b24ebcda1d8be2b463e = MAKE_FUNCTION_FRAME(codeobj_cc5796cd58852b24ebcda1d8be2b463e, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc5796cd58852b24ebcda1d8be2b463e->m_type_description == NULL);
    frame_cc5796cd58852b24ebcda1d8be2b463e = cache_frame_cc5796cd58852b24ebcda1d8be2b463e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc5796cd58852b24ebcda1d8be2b463e);
    assert(Py_REFCNT(frame_cc5796cd58852b24ebcda1d8be2b463e) == 2);

    // Framed code:
    {
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT(par_obj);
            tmp_type_arg_1 = par_obj;
            tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_return_value = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_cc5796cd58852b24ebcda1d8be2b463e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc5796cd58852b24ebcda1d8be2b463e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc5796cd58852b24ebcda1d8be2b463e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc5796cd58852b24ebcda1d8be2b463e,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_cc5796cd58852b24ebcda1d8be2b463e == cache_frame_cc5796cd58852b24ebcda1d8be2b463e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc5796cd58852b24ebcda1d8be2b463e);
        cache_frame_cc5796cd58852b24ebcda1d8be2b463e = NULL;
    }

    assertFrameObject(frame_cc5796cd58852b24ebcda1d8be2b463e);

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



struct requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr_locals {
    PyObject *var_klass;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr_locals *generator_heap = (struct requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_klass = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2e2b99dad113b99abacca2cdeddfa4ba, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 242;
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
            PyObject *old = generator_heap->var_klass;
            generator_heap->var_klass = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_klass);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_cmp_expr_left_1 = mod_consts[22];
        CHECK_OBJECT(generator_heap->var_klass);
        tmp_expression_value_2 = generator_heap->var_klass;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 242;
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
            generator_heap->var_klass
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

    Py_XDECREF(generator_heap->var_klass);
    generator_heap->var_klass = NULL;
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
    Py_XDECREF(generator_heap->var_klass);
    generator_heap->var_klass = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr_context,
        module_requests$packages$urllib3$packages$six,
        mod_consts[23],
#if PYTHON_VERSION >= 0x350
        mod_consts[24],
#endif
        codeobj_2e2b99dad113b99abacca2cdeddfa4ba,
        closure,
        1,
        sizeof(struct requests$packages$urllib3$packages$six$$$function__14_callable$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__15_get_unbound_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_unbound = python_pars[0];
    struct Nuitka_FrameObject *frame_90d2102058b24bc149502d4fbcf96b25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90d2102058b24bc149502d4fbcf96b25 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90d2102058b24bc149502d4fbcf96b25)) {
        Py_XDECREF(cache_frame_90d2102058b24bc149502d4fbcf96b25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90d2102058b24bc149502d4fbcf96b25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90d2102058b24bc149502d4fbcf96b25 = MAKE_FUNCTION_FRAME(codeobj_90d2102058b24bc149502d4fbcf96b25, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90d2102058b24bc149502d4fbcf96b25->m_type_description == NULL);
    frame_90d2102058b24bc149502d4fbcf96b25 = cache_frame_90d2102058b24bc149502d4fbcf96b25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90d2102058b24bc149502d4fbcf96b25);
    assert(Py_REFCNT(frame_90d2102058b24bc149502d4fbcf96b25) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_unbound);
        tmp_expression_value_1 = par_unbound;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_90d2102058b24bc149502d4fbcf96b25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90d2102058b24bc149502d4fbcf96b25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90d2102058b24bc149502d4fbcf96b25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90d2102058b24bc149502d4fbcf96b25,
        type_description_1,
        par_unbound
    );


    // Release cached frame if used for exception.
    if (frame_90d2102058b24bc149502d4fbcf96b25 == cache_frame_90d2102058b24bc149502d4fbcf96b25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90d2102058b24bc149502d4fbcf96b25);
        cache_frame_90d2102058b24bc149502d4fbcf96b25 = NULL;
    }

    assertFrameObject(frame_90d2102058b24bc149502d4fbcf96b25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_unbound);
    Py_DECREF(par_unbound);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_unbound);
    Py_DECREF(par_unbound);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__16_next(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d9ee95b57ae5a1a56f217c073efc1913;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9ee95b57ae5a1a56f217c073efc1913 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9ee95b57ae5a1a56f217c073efc1913)) {
        Py_XDECREF(cache_frame_d9ee95b57ae5a1a56f217c073efc1913);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9ee95b57ae5a1a56f217c073efc1913 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9ee95b57ae5a1a56f217c073efc1913 = MAKE_FUNCTION_FRAME(codeobj_d9ee95b57ae5a1a56f217c073efc1913, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9ee95b57ae5a1a56f217c073efc1913->m_type_description == NULL);
    frame_d9ee95b57ae5a1a56f217c073efc1913 = cache_frame_d9ee95b57ae5a1a56f217c073efc1913;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9ee95b57ae5a1a56f217c073efc1913);
    assert(Py_REFCNT(frame_d9ee95b57ae5a1a56f217c073efc1913) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_instance_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_d9ee95b57ae5a1a56f217c073efc1913->m_frame.f_lineno = 250;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[26], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_d9ee95b57ae5a1a56f217c073efc1913, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9ee95b57ae5a1a56f217c073efc1913->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9ee95b57ae5a1a56f217c073efc1913, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9ee95b57ae5a1a56f217c073efc1913,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d9ee95b57ae5a1a56f217c073efc1913 == cache_frame_d9ee95b57ae5a1a56f217c073efc1913) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9ee95b57ae5a1a56f217c073efc1913);
        cache_frame_d9ee95b57ae5a1a56f217c073efc1913 = NULL;
    }

    assertFrameObject(frame_d9ee95b57ae5a1a56f217c073efc1913);

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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__17_iterkeys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_a4d6229a28ee033db4e84e003c26a01c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a4d6229a28ee033db4e84e003c26a01c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4d6229a28ee033db4e84e003c26a01c)) {
        Py_XDECREF(cache_frame_a4d6229a28ee033db4e84e003c26a01c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4d6229a28ee033db4e84e003c26a01c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4d6229a28ee033db4e84e003c26a01c = MAKE_FUNCTION_FRAME(codeobj_a4d6229a28ee033db4e84e003c26a01c, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4d6229a28ee033db4e84e003c26a01c->m_type_description == NULL);
    frame_a4d6229a28ee033db4e84e003c26a01c = cache_frame_a4d6229a28ee033db4e84e003c26a01c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4d6229a28ee033db4e84e003c26a01c);
    assert(Py_REFCNT(frame_a4d6229a28ee033db4e84e003c26a01c) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_d);
        tmp_getattr_target_1 = par_d;
        tmp_getattr_attr_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_getattr_attr_1 == NULL)) {
            tmp_getattr_attr_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a4d6229a28ee033db4e84e003c26a01c->m_frame.f_lineno = 265;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
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
        exception_tb = MAKE_TRACEBACK(frame_a4d6229a28ee033db4e84e003c26a01c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4d6229a28ee033db4e84e003c26a01c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4d6229a28ee033db4e84e003c26a01c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4d6229a28ee033db4e84e003c26a01c,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_a4d6229a28ee033db4e84e003c26a01c == cache_frame_a4d6229a28ee033db4e84e003c26a01c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4d6229a28ee033db4e84e003c26a01c);
        cache_frame_a4d6229a28ee033db4e84e003c26a01c = NULL;
    }

    assertFrameObject(frame_a4d6229a28ee033db4e84e003c26a01c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__18_itervalues(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_9f65e51bf82db96827ae3bd2ed82dfc5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5)) {
        Py_XDECREF(cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5 = MAKE_FUNCTION_FRAME(codeobj_9f65e51bf82db96827ae3bd2ed82dfc5, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5->m_type_description == NULL);
    frame_9f65e51bf82db96827ae3bd2ed82dfc5 = cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f65e51bf82db96827ae3bd2ed82dfc5);
    assert(Py_REFCNT(frame_9f65e51bf82db96827ae3bd2ed82dfc5) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_d);
        tmp_getattr_target_1 = par_d;
        tmp_getattr_attr_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_getattr_attr_1 == NULL)) {
            tmp_getattr_attr_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9f65e51bf82db96827ae3bd2ed82dfc5->m_frame.f_lineno = 269;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_9f65e51bf82db96827ae3bd2ed82dfc5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f65e51bf82db96827ae3bd2ed82dfc5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f65e51bf82db96827ae3bd2ed82dfc5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f65e51bf82db96827ae3bd2ed82dfc5,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_9f65e51bf82db96827ae3bd2ed82dfc5 == cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5);
        cache_frame_9f65e51bf82db96827ae3bd2ed82dfc5 = NULL;
    }

    assertFrameObject(frame_9f65e51bf82db96827ae3bd2ed82dfc5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__19_iteritems(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_b0e4a6433e0c147f0d3ce1a74a850471;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0e4a6433e0c147f0d3ce1a74a850471 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0e4a6433e0c147f0d3ce1a74a850471)) {
        Py_XDECREF(cache_frame_b0e4a6433e0c147f0d3ce1a74a850471);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0e4a6433e0c147f0d3ce1a74a850471 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0e4a6433e0c147f0d3ce1a74a850471 = MAKE_FUNCTION_FRAME(codeobj_b0e4a6433e0c147f0d3ce1a74a850471, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0e4a6433e0c147f0d3ce1a74a850471->m_type_description == NULL);
    frame_b0e4a6433e0c147f0d3ce1a74a850471 = cache_frame_b0e4a6433e0c147f0d3ce1a74a850471;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0e4a6433e0c147f0d3ce1a74a850471);
    assert(Py_REFCNT(frame_b0e4a6433e0c147f0d3ce1a74a850471) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_d);
        tmp_getattr_target_1 = par_d;
        tmp_getattr_attr_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_getattr_attr_1 == NULL)) {
            tmp_getattr_attr_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b0e4a6433e0c147f0d3ce1a74a850471->m_frame.f_lineno = 273;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
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
        exception_tb = MAKE_TRACEBACK(frame_b0e4a6433e0c147f0d3ce1a74a850471, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0e4a6433e0c147f0d3ce1a74a850471->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0e4a6433e0c147f0d3ce1a74a850471, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0e4a6433e0c147f0d3ce1a74a850471,
        type_description_1,
        par_d
    );


    // Release cached frame if used for exception.
    if (frame_b0e4a6433e0c147f0d3ce1a74a850471 == cache_frame_b0e4a6433e0c147f0d3ce1a74a850471) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0e4a6433e0c147f0d3ce1a74a850471);
        cache_frame_b0e4a6433e0c147f0d3ce1a74a850471 = NULL;
    }

    assertFrameObject(frame_b0e4a6433e0c147f0d3ce1a74a850471);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__20_b(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_d892b311c2cf1ef31bb4658ae2b74703;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d892b311c2cf1ef31bb4658ae2b74703 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d892b311c2cf1ef31bb4658ae2b74703)) {
        Py_XDECREF(cache_frame_d892b311c2cf1ef31bb4658ae2b74703);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d892b311c2cf1ef31bb4658ae2b74703 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d892b311c2cf1ef31bb4658ae2b74703 = MAKE_FUNCTION_FRAME(codeobj_d892b311c2cf1ef31bb4658ae2b74703, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d892b311c2cf1ef31bb4658ae2b74703->m_type_description == NULL);
    frame_d892b311c2cf1ef31bb4658ae2b74703 = cache_frame_d892b311c2cf1ef31bb4658ae2b74703;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d892b311c2cf1ef31bb4658ae2b74703);
    assert(Py_REFCNT(frame_d892b311c2cf1ef31bb4658ae2b74703) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d892b311c2cf1ef31bb4658ae2b74703->m_frame.f_lineno = 278;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[34]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
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
        exception_tb = MAKE_TRACEBACK(frame_d892b311c2cf1ef31bb4658ae2b74703, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d892b311c2cf1ef31bb4658ae2b74703->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d892b311c2cf1ef31bb4658ae2b74703, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d892b311c2cf1ef31bb4658ae2b74703,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_d892b311c2cf1ef31bb4658ae2b74703 == cache_frame_d892b311c2cf1ef31bb4658ae2b74703) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d892b311c2cf1ef31bb4658ae2b74703);
        cache_frame_d892b311c2cf1ef31bb4658ae2b74703 = NULL;
    }

    assertFrameObject(frame_d892b311c2cf1ef31bb4658ae2b74703);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__21_u(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__23_b(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__24_u(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_e5622042c336faecfd0b4ab3a2d89077;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e5622042c336faecfd0b4ab3a2d89077 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e5622042c336faecfd0b4ab3a2d89077)) {
        Py_XDECREF(cache_frame_e5622042c336faecfd0b4ab3a2d89077);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5622042c336faecfd0b4ab3a2d89077 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5622042c336faecfd0b4ab3a2d89077 = MAKE_FUNCTION_FRAME(codeobj_e5622042c336faecfd0b4ab3a2d89077, module_requests$packages$urllib3$packages$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e5622042c336faecfd0b4ab3a2d89077->m_type_description == NULL);
    frame_e5622042c336faecfd0b4ab3a2d89077 = cache_frame_e5622042c336faecfd0b4ab3a2d89077;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e5622042c336faecfd0b4ab3a2d89077);
    assert(Py_REFCNT(frame_e5622042c336faecfd0b4ab3a2d89077) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_args_element_value_1 = par_s;
        tmp_args_element_value_2 = mod_consts[36];
        frame_e5622042c336faecfd0b4ab3a2d89077->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_e5622042c336faecfd0b4ab3a2d89077, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5622042c336faecfd0b4ab3a2d89077->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5622042c336faecfd0b4ab3a2d89077, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5622042c336faecfd0b4ab3a2d89077,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_e5622042c336faecfd0b4ab3a2d89077 == cache_frame_e5622042c336faecfd0b4ab3a2d89077) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e5622042c336faecfd0b4ab3a2d89077);
        cache_frame_e5622042c336faecfd0b4ab3a2d89077 = NULL;
    }

    assertFrameObject(frame_e5622042c336faecfd0b4ab3a2d89077);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__25_reraise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tp = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_tb = python_pars[2];
    struct Nuitka_FrameObject *frame_bb0340490c086145e9e948ef9d4464fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bb0340490c086145e9e948ef9d4464fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bb0340490c086145e9e948ef9d4464fc)) {
        Py_XDECREF(cache_frame_bb0340490c086145e9e948ef9d4464fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb0340490c086145e9e948ef9d4464fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb0340490c086145e9e948ef9d4464fc = MAKE_FUNCTION_FRAME(codeobj_bb0340490c086145e9e948ef9d4464fc, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb0340490c086145e9e948ef9d4464fc->m_type_description == NULL);
    frame_bb0340490c086145e9e948ef9d4464fc = cache_frame_bb0340490c086145e9e948ef9d4464fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb0340490c086145e9e948ef9d4464fc);
    assert(Py_REFCNT(frame_bb0340490c086145e9e948ef9d4464fc) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tb);
        tmp_cmp_expr_right_1 = par_tb;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_value);
        tmp_called_instance_1 = par_value;
        CHECK_OBJECT(par_tb);
        tmp_args_element_value_1 = par_tb;
        frame_bb0340490c086145e9e948ef9d4464fc->m_frame.f_lineno = 309;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[38], tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 309;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_raise_type_2;
        CHECK_OBJECT(par_value);
        tmp_raise_type_2 = par_value;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 310;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb0340490c086145e9e948ef9d4464fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb0340490c086145e9e948ef9d4464fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb0340490c086145e9e948ef9d4464fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb0340490c086145e9e948ef9d4464fc,
        type_description_1,
        par_tp,
        par_value,
        par_tb
    );


    // Release cached frame if used for exception.
    if (frame_bb0340490c086145e9e948ef9d4464fc == cache_frame_bb0340490c086145e9e948ef9d4464fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb0340490c086145e9e948ef9d4464fc);
        cache_frame_bb0340490c086145e9e948ef9d4464fc = NULL;
    }

    assertFrameObject(frame_bb0340490c086145e9e948ef9d4464fc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tp);
    Py_DECREF(par_tp);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_tb);
    Py_DECREF(par_tb);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__26_exec_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_code = python_pars[0];
    PyObject *par_globs = python_pars[1];
    PyObject *par_locs = python_pars[2];
    PyObject *var_frame = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    struct Nuitka_FrameObject *frame_39b07536116f83f5b21dd23e11a50903;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_requests$packages$urllib3$packages$six$$$function__26_exec_ = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_39b07536116f83f5b21dd23e11a50903 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39b07536116f83f5b21dd23e11a50903)) {
        Py_XDECREF(cache_frame_39b07536116f83f5b21dd23e11a50903);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39b07536116f83f5b21dd23e11a50903 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39b07536116f83f5b21dd23e11a50903 = MAKE_FUNCTION_FRAME(codeobj_39b07536116f83f5b21dd23e11a50903, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39b07536116f83f5b21dd23e11a50903->m_type_description == NULL);
    frame_39b07536116f83f5b21dd23e11a50903 = cache_frame_39b07536116f83f5b21dd23e11a50903;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_39b07536116f83f5b21dd23e11a50903);
    assert(Py_REFCNT(frame_39b07536116f83f5b21dd23e11a50903) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_globs);
        tmp_cmp_expr_left_1 = par_globs;
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
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_39b07536116f83f5b21dd23e11a50903->m_frame.f_lineno = 320;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_1 = var_frame;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_globs;
            assert(old != NULL);
            par_globs = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_locs);
        tmp_cmp_expr_left_2 = par_locs;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_2 = var_frame;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_locs;
            assert(old != NULL);
            par_locs = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    CHECK_OBJECT(var_frame);
    Py_DECREF(var_frame);
    var_frame = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_locs);
        tmp_cmp_expr_left_3 = par_locs;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_globs);
        tmp_assign_source_4 = par_globs;
        {
            PyObject *old = par_locs;
            assert(old != NULL);
            par_locs = tmp_assign_source_4;
            Py_INCREF(par_locs);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_1:;
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_None;
            assert(tmp_exec_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_5);
            tmp_exec_call_1__globals = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = Py_None;
            assert(tmp_exec_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_6);
            tmp_exec_call_1__locals = tmp_assign_source_6;
        }
        {
            bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_cmp_expr_left_4 = tmp_exec_call_1__locals;
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
            PyObject *tmp_assign_source_7;
            bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_cmp_expr_left_5 = tmp_exec_call_1__globals;
            tmp_cmp_expr_right_5 = Py_None;
            tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            if (locals_requests$packages$urllib3$packages$six$$$function__26_exec_ == NULL) locals_requests$packages$urllib3$packages$six$$$function__26_exec_ = MAKE_DICT_EMPTY();
            tmp_assign_source_7 = locals_requests$packages$urllib3$packages$six$$$function__26_exec_;
            Py_INCREF(tmp_assign_source_7);
            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[43], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[43]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (par_globs != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_globs);
                value = par_globs;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[44], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[44]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (par_locs != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_locs);
                value = par_locs;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[45], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[45]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_frame != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_frame);
                value = var_frame;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[46], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[46]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_assign_source_7 = tmp_exec_call_1__globals;
            Py_INCREF(tmp_assign_source_7);
            condexpr_end_1:;
            {
                PyObject *old = tmp_exec_call_1__locals;
                assert(old != NULL);
                tmp_exec_call_1__locals = tmp_assign_source_7;
                Py_DECREF(old);
            }

        }
        branch_no_4:;
        {
            bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_cmp_expr_left_6 = tmp_exec_call_1__globals;
            tmp_cmp_expr_right_6 = Py_None;
            tmp_condition_result_6 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = (PyObject *)moduledict_requests$packages$urllib3$packages$six;
            {
                PyObject *old = tmp_exec_call_1__globals;
                assert(old != NULL);
                tmp_exec_call_1__globals = tmp_assign_source_8;
                Py_INCREF(tmp_exec_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_5:;
        // Tried code:
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            tmp_eval_source_1 = mod_consts[47];
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_eval_globals_1 = tmp_exec_call_1__globals;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_eval_locals_1 = tmp_exec_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tmp_eval_source_1, mod_consts[48], mod_consts[49], NULL, NULL, NULL);
            if (tmp_eval_compiled_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_outline_return_value_1 = EVAL_CODE(tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        Py_DECREF(tmp_outline_return_value_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39b07536116f83f5b21dd23e11a50903, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39b07536116f83f5b21dd23e11a50903->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39b07536116f83f5b21dd23e11a50903, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39b07536116f83f5b21dd23e11a50903,
        type_description_1,
        par_code,
        par_globs,
        par_locs,
        var_frame
    );


    // Release cached frame if used for exception.
    if (frame_39b07536116f83f5b21dd23e11a50903 == cache_frame_39b07536116f83f5b21dd23e11a50903) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39b07536116f83f5b21dd23e11a50903);
        cache_frame_39b07536116f83f5b21dd23e11a50903 = NULL;
    }

    assertFrameObject(frame_39b07536116f83f5b21dd23e11a50903);

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
    Py_XDECREF(par_globs);
    par_globs = NULL;
    CHECK_OBJECT(par_locs);
    Py_DECREF(par_locs);
    par_locs = NULL;
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

    Py_XDECREF(par_globs);
    par_globs = NULL;
    Py_XDECREF(par_locs);
    par_locs = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
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
    Py_XDECREF(locals_requests$packages$urllib3$packages$six$$$function__26_exec_);

    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_requests$packages$urllib3$packages$six$$$function__26_exec_);

    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__27_print_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_CellObject *var_fp = Nuitka_Cell_Empty();
    PyObject *var_write = NULL;
    nuitka_bool var_want_unicode = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_sep = NULL;
    PyObject *var_end = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_newline = NULL;
    PyObject *var_space = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_4c39cdfe4caf22ad94c73722cb7027e0;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_4c39cdfe4caf22ad94c73722cb7027e0 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[51];
        tmp_default_value_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_default_value_1 == NULL));
        tmp_assign_source_1 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(Nuitka_Cell_GET(var_fp) == NULL);
        PyCell_SET(var_fp, tmp_assign_source_1);

    }
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_fp));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(var_fp);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_fp;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__27_print_$$$function__1_write(tmp_closure_1);

        assert(var_write == NULL);
        var_write = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_FALSE;
        var_want_unicode = tmp_assign_source_3;
    }
    if (isFrameUnusable(cache_frame_4c39cdfe4caf22ad94c73722cb7027e0)) {
        Py_XDECREF(cache_frame_4c39cdfe4caf22ad94c73722cb7027e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c39cdfe4caf22ad94c73722cb7027e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c39cdfe4caf22ad94c73722cb7027e0 = MAKE_FUNCTION_FRAME(codeobj_4c39cdfe4caf22ad94c73722cb7027e0, module_requests$packages$urllib3$packages$six, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c39cdfe4caf22ad94c73722cb7027e0->m_type_description == NULL);
    frame_4c39cdfe4caf22ad94c73722cb7027e0 = cache_frame_4c39cdfe4caf22ad94c73722cb7027e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c39cdfe4caf22ad94c73722cb7027e0);
    assert(Py_REFCNT(frame_4c39cdfe4caf22ad94c73722cb7027e0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 345;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[55]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sep == NULL);
        var_sep = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_sep);
        tmp_cmp_expr_left_2 = var_sep;
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_sep);
        tmp_isinstance_inst_1 = var_sep;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        var_want_unicode = tmp_assign_source_5;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_sep);
        tmp_isinstance_inst_2 = var_sep;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[56];
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 350;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 350;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocoboooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_end_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_2 = par_kwargs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[54]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 351;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[57]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end == NULL);
        var_end = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_end);
        tmp_cmp_expr_left_3 = var_end;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_end);
        tmp_isinstance_inst_3 = var_end;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
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
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        var_want_unicode = tmp_assign_source_7;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(var_end);
        tmp_isinstance_inst_4 = var_end;
        tmp_isinstance_cls_4 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[58];
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 356;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 356;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocoboooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    branch_end_6:;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_kwargs);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_kwargs);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[59];
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 358;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 358;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocoboooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_3;
        assert(var_want_unicode != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_3 = (var_want_unicode == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_args);
        tmp_iter_arg_1 = par_args;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oocoboooooo";
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
                type_description_1 = "oocoboooooo";
                exception_lineno = 360;
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
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_10;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        CHECK_OBJECT(var_arg);
        tmp_isinstance_inst_5 = var_arg;
        tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_5 == NULL)) {
            tmp_isinstance_cls_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        var_want_unicode = tmp_assign_source_11;
    }
    goto loop_end_1;
    branch_no_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 360;
        type_description_1 = "oocoboooooo";
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
    branch_no_9:;
    {
        bool tmp_condition_result_11;
        assert(var_want_unicode != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_11 = var_want_unicode == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 365;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[60]);

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        assert(var_newline == NULL);
        var_newline = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 366;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[61]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        assert(var_space == NULL);
        var_space = tmp_assign_source_13;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[62];
        assert(var_newline == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_newline = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[63];
        assert(var_space == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_space = tmp_assign_source_15;
    }
    branch_end_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_sep);
        tmp_cmp_expr_left_4 = var_sep;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(var_space);
        tmp_assign_source_16 = var_space;
        {
            PyObject *old = var_sep;
            assert(old != NULL);
            var_sep = tmp_assign_source_16;
            Py_INCREF(var_sep);
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_end);
        tmp_cmp_expr_left_5 = var_end;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(var_newline);
        tmp_assign_source_17 = var_newline;
        {
            PyObject *old = var_end;
            assert(old != NULL);
            var_end = tmp_assign_source_17;
            Py_INCREF(var_end);
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_5 = (PyObject *)&PyEnum_Type;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_args;
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 374;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oocoboooooo";
                exception_lineno = 374;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocoboooooo";
            exception_lineno = 374;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocoboooooo";
            exception_lineno = 374;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_22;
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

                    type_description_1 = "oocoboooooo";
                    exception_lineno = 374;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[65];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oocoboooooo";
            exception_lineno = 374;
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
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_23;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_24;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_i);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_i);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_14 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        if (var_write == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_3;
        }

        tmp_called_value_6 = var_write;
        if (var_sep == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_2 = var_sep;
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 376;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_14:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        if (var_write == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 377;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_3;
        }

        tmp_called_value_7 = var_write;
        CHECK_OBJECT(var_arg);
        tmp_args_element_value_3 = var_arg;
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 377;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oocoboooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 374;
        type_description_1 = "oocoboooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        if (var_write == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_8 = var_write;
        CHECK_OBJECT(var_end);
        tmp_args_element_value_4 = var_end;
        frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame.f_lineno = 378;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oocoboooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c39cdfe4caf22ad94c73722cb7027e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c39cdfe4caf22ad94c73722cb7027e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c39cdfe4caf22ad94c73722cb7027e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c39cdfe4caf22ad94c73722cb7027e0,
        type_description_1,
        par_args,
        par_kwargs,
        var_fp,
        var_write,
        (int)var_want_unicode,
        var_sep,
        var_end,
        var_arg,
        var_newline,
        var_space,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_4c39cdfe4caf22ad94c73722cb7027e0 == cache_frame_4c39cdfe4caf22ad94c73722cb7027e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c39cdfe4caf22ad94c73722cb7027e0);
        cache_frame_4c39cdfe4caf22ad94c73722cb7027e0 = NULL;
    }

    assertFrameObject(frame_4c39cdfe4caf22ad94c73722cb7027e0);

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
    CHECK_OBJECT(var_fp);
    Py_DECREF(var_fp);
    var_fp = NULL;
    Py_XDECREF(var_write);
    var_write = NULL;
    var_want_unicode = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_sep);
    var_sep = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_newline);
    var_newline = NULL;
    Py_XDECREF(var_space);
    var_space = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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

    CHECK_OBJECT(var_fp);
    Py_DECREF(var_fp);
    var_fp = NULL;
    Py_XDECREF(var_write);
    var_write = NULL;
    assert(var_want_unicode != NUITKA_BOOL_UNASSIGNED);
    var_want_unicode = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_sep);
    var_sep = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_newline);
    var_newline = NULL;
    Py_XDECREF(var_space);
    var_space = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__27_print_$$$function__1_write(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    struct Nuitka_FrameObject *frame_ffcab8aedf04e8b6716f9a84ea53ff3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c)) {
        Py_XDECREF(cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c = MAKE_FUNCTION_FRAME(codeobj_ffcab8aedf04e8b6716f9a84ea53ff3c, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c->m_type_description == NULL);
    frame_ffcab8aedf04e8b6716f9a84ea53ff3c = cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffcab8aedf04e8b6716f9a84ea53ff3c);
    assert(Py_REFCNT(frame_ffcab8aedf04e8b6716f9a84ea53ff3c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_1 = par_data;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oc";
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
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_data);
        tmp_unicode_arg_1 = par_data;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_ffcab8aedf04e8b6716f9a84ea53ff3c->m_frame.f_lineno = 343;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[52], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffcab8aedf04e8b6716f9a84ea53ff3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffcab8aedf04e8b6716f9a84ea53ff3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffcab8aedf04e8b6716f9a84ea53ff3c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffcab8aedf04e8b6716f9a84ea53ff3c,
        type_description_1,
        par_data,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ffcab8aedf04e8b6716f9a84ea53ff3c == cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c);
        cache_frame_ffcab8aedf04e8b6716f9a84ea53ff3c = NULL;
    }

    assertFrameObject(frame_ffcab8aedf04e8b6716f9a84ea53ff3c);

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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
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

    Py_XDECREF(par_data);
    par_data = NULL;
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


static PyObject *impl_requests$packages$urllib3$packages$six$$$function__28_with_metaclass(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_meta = python_pars[0];
    PyObject *par_base = python_pars[1];
    struct Nuitka_FrameObject *frame_69b0897a610bcae3d8a35ecfbda962eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69b0897a610bcae3d8a35ecfbda962eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69b0897a610bcae3d8a35ecfbda962eb)) {
        Py_XDECREF(cache_frame_69b0897a610bcae3d8a35ecfbda962eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69b0897a610bcae3d8a35ecfbda962eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69b0897a610bcae3d8a35ecfbda962eb = MAKE_FUNCTION_FRAME(codeobj_69b0897a610bcae3d8a35ecfbda962eb, module_requests$packages$urllib3$packages$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69b0897a610bcae3d8a35ecfbda962eb->m_type_description == NULL);
    frame_69b0897a610bcae3d8a35ecfbda962eb = cache_frame_69b0897a610bcae3d8a35ecfbda962eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69b0897a610bcae3d8a35ecfbda962eb);
    assert(Py_REFCNT(frame_69b0897a610bcae3d8a35ecfbda962eb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_meta);
        tmp_called_value_1 = par_meta;
        tmp_args_element_value_1 = mod_consts[70];
        CHECK_OBJECT(par_base);
        tmp_tuple_element_1 = par_base;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        tmp_args_element_value_3 = MAKE_DICT_EMPTY();
        frame_69b0897a610bcae3d8a35ecfbda962eb->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
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
        exception_tb = MAKE_TRACEBACK(frame_69b0897a610bcae3d8a35ecfbda962eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69b0897a610bcae3d8a35ecfbda962eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69b0897a610bcae3d8a35ecfbda962eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69b0897a610bcae3d8a35ecfbda962eb,
        type_description_1,
        par_meta,
        par_base
    );


    // Release cached frame if used for exception.
    if (frame_69b0897a610bcae3d8a35ecfbda962eb == cache_frame_69b0897a610bcae3d8a35ecfbda962eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69b0897a610bcae3d8a35ecfbda962eb);
        cache_frame_69b0897a610bcae3d8a35ecfbda962eb = NULL;
    }

    assertFrameObject(frame_69b0897a610bcae3d8a35ecfbda962eb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_meta);
    Py_DECREF(par_meta);
    CHECK_OBJECT(par_base);
    Py_DECREF(par_base);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_meta);
    Py_DECREF(par_meta);
    CHECK_OBJECT(par_base);
    Py_DECREF(par_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__10_add_move() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__10_add_move,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eb543238f8b1b5f48e7cbc6c1caad4f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__11_remove_move() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__11_remove_move,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93d77ca9b43d087609eb32709374a354,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__12_advance_iterator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__12_advance_iterator,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ea121e4dc6dc019ec092498c2f1295e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__13_get_unbound_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__13_get_unbound_function,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f6fb60b6a5aebad764b08c5420ab9e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__14_callable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__14_callable,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc5796cd58852b24ebcda1d8be2b463e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__15_get_unbound_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__15_get_unbound_function,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90d2102058b24bc149502d4fbcf96b25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__16_next() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__16_next,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_d9ee95b57ae5a1a56f217c073efc1913,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__17_iterkeys() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__17_iterkeys,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4d6229a28ee033db4e84e003c26a01c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__18_itervalues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__18_itervalues,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f65e51bf82db96827ae3bd2ed82dfc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__19_iteritems() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__19_iteritems,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0e4a6433e0c147f0d3ce1a74a850471,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__20_b() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__20_b,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d892b311c2cf1ef31bb4658ae2b74703,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__21_u() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__21_u,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f52400a495962ea33e50ec70814b5392,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__23_b() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__23_b,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_757b7b63a94df50e12d61fc082c703b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__24_u() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__24_u,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e5622042c336faecfd0b4ab3a2d89077,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__25_reraise(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__25_reraise,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb0340490c086145e9e948ef9d4464fc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__26_exec_(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__26_exec_,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39b07536116f83f5b21dd23e11a50903,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__27_print_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__27_print_,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c39cdfe4caf22ad94c73722cb7027e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__27_print_$$$function__1_write(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__27_print_$$$function__1_write,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_ffcab8aedf04e8b6716f9a84ea53ff3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__28_with_metaclass(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__28_with_metaclass,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69b0897a610bcae3d8a35ecfbda962eb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__2__add_doc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__2__add_doc,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4afc12f8af8d5da4027920101063f34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__3__import_module() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__3__import_module,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f9812b09823d52670a9510c162062932,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__4___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_afeededa10ebbe6cc9198dc86d2c02fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__5___get__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__5___get__,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_f63a46e077707bcdeb7d583c021ff373,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__6___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__6___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_60fdd7819851a4000d885eb46f46d2c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__7__resolve() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__7__resolve,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_4ff73577d7f01b43a13cf91264414d1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__8___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__8___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_729463721ea3a82d34a240f80853c655,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__9__resolve() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$urllib3$packages$six$$$function__9__resolve,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_2616b37817560251d946346c1a7e8d3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$urllib3$packages$six,
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

function_impl_code functable_requests$packages$urllib3$packages$six[] = {
    impl_requests$packages$urllib3$packages$six$$$function__27_print_$$$function__1_write,
    impl_requests$packages$urllib3$packages$six$$$function__2__add_doc,
    impl_requests$packages$urllib3$packages$six$$$function__3__import_module,
    impl_requests$packages$urllib3$packages$six$$$function__4___init__,
    impl_requests$packages$urllib3$packages$six$$$function__5___get__,
    impl_requests$packages$urllib3$packages$six$$$function__6___init__,
    impl_requests$packages$urllib3$packages$six$$$function__7__resolve,
    impl_requests$packages$urllib3$packages$six$$$function__8___init__,
    impl_requests$packages$urllib3$packages$six$$$function__9__resolve,
    impl_requests$packages$urllib3$packages$six$$$function__10_add_move,
    impl_requests$packages$urllib3$packages$six$$$function__11_remove_move,
    impl_requests$packages$urllib3$packages$six$$$function__12_advance_iterator,
    impl_requests$packages$urllib3$packages$six$$$function__13_get_unbound_function,
    impl_requests$packages$urllib3$packages$six$$$function__14_callable,
    impl_requests$packages$urllib3$packages$six$$$function__15_get_unbound_function,
    impl_requests$packages$urllib3$packages$six$$$function__16_next,
    impl_requests$packages$urllib3$packages$six$$$function__17_iterkeys,
    impl_requests$packages$urllib3$packages$six$$$function__18_itervalues,
    impl_requests$packages$urllib3$packages$six$$$function__19_iteritems,
    impl_requests$packages$urllib3$packages$six$$$function__20_b,
    impl_requests$packages$urllib3$packages$six$$$function__21_u,
    impl_requests$packages$urllib3$packages$six$$$function__23_b,
    impl_requests$packages$urllib3$packages$six$$$function__24_u,
    impl_requests$packages$urllib3$packages$six$$$function__25_reraise,
    impl_requests$packages$urllib3$packages$six$$$function__26_exec_,
    impl_requests$packages$urllib3$packages$six$$$function__27_print_,
    impl_requests$packages$urllib3$packages$six$$$function__28_with_metaclass,
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

    function_impl_code *current = functable_requests$packages$urllib3$packages$six;
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

    if (offset > sizeof(functable_requests$packages$urllib3$packages$six) || offset < 0) {
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
        functable_requests$packages$urllib3$packages$six[offset],
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
        module_requests$packages$urllib3$packages$six,
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
PyObject *modulecode_requests$packages$urllib3$packages$six(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests.packages.urllib3.packages.six");

    // Store the module for future use.
    module_requests$packages$urllib3$packages$six = module;

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
        PRINT_STRING("requests.packages.urllib3.packages.six: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests.packages.urllib3.packages.six: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests.packages.urllib3.packages.six: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrequests$packages$urllib3$packages$six\n");

    moduledict_requests$packages$urllib3$packages$six = MODULE_DICT(module_requests$packages$urllib3$packages$six);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_requests$packages$urllib3$packages$six,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$packages$urllib3$packages$six,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[234]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$packages$urllib3$packages$six,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$packages$urllib3$packages$six,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$packages$urllib3$packages$six,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$packages$urllib3$packages$six);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_requests$packages$urllib3$packages$six);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
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
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_19ee6ada3c32d8097dbd0e0aed97983c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7e0ce795a0e15ba107a45430afac45e8_2;
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
    PyObject *locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91 = NULL;
    struct Nuitka_FrameObject *frame_ccdc9daa58851d834336dfc2ef838c90_3;
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
    PyObject *locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106 = NULL;
    struct Nuitka_FrameObject *frame_e41fef4404529eb249a482112ed80e36_4;
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
    PyObject *locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247 = NULL;
    struct Nuitka_FrameObject *frame_56f9fb144a42eb9b85c64c2a81909be9_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_2);
    }
    frame_19ee6ada3c32d8097dbd0e0aed97983c = MAKE_MODULE_FRAME(codeobj_19ee6ada3c32d8097dbd0e0aed97983c, module_requests$packages$urllib3$packages$six);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19ee6ada3c32d8097dbd0e0aed97983c);
    assert(Py_REFCNT(frame_19ee6ada3c32d8097dbd0e0aed97983c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[76], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[78];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$packages$urllib3$packages$six;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[79];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = (PyObject *)&PyBytes_Type;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__2__add_doc();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__3__import_module();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[96];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_18 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_1 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[79];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_2 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[97]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_3 = tmp_class_creation_2__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[98];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_1 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_2__class_decl_dict;
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 78;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_4 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[99]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

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
        tmp_mod_expr_left_1 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[101];
        tmp_getattr_default_1 = mod_consts[102];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[101]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

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


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 78;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_1 = tmp_class_creation_2__prepared;
            locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_3;
        }
        frame_7e0ce795a0e15ba107a45430afac45e8_2 = MAKE_CLASS_FRAME(codeobj_7e0ce795a0e15ba107a45430afac45e8, module_requests$packages$urllib3$packages$six, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7e0ce795a0e15ba107a45430afac45e8_2);
        assert(Py_REFCNT(frame_7e0ce795a0e15ba107a45430afac45e8_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__4___init__();

        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78, mod_consts[9], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__5___get__();

        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7e0ce795a0e15ba107a45430afac45e8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7e0ce795a0e15ba107a45430afac45e8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7e0ce795a0e15ba107a45430afac45e8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7e0ce795a0e15ba107a45430afac45e8_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_7e0ce795a0e15ba107a45430afac45e8_2);

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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_1 = mod_consts[96];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_2 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_3 = mod_consts[98];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_3 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 78;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78);
        locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78 = NULL;
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

        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78);
        locals_requests$packages$urllib3$packages$six$$$class__2__LazyDescr_78 = NULL;
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
        exception_lineno = 78;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_23);
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
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


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_6 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[79];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_7 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[97]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_8 = tmp_class_creation_3__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[97]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = mod_consts[8];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_5 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 91;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_9 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[99]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
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
        tmp_mod_expr_left_2 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_2 = mod_consts[101];
        tmp_getattr_default_2 = mod_consts[102];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[101]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

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


            exception_lineno = 91;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_2 = tmp_class_creation_3__prepared;
            locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[8];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_6;
        }
        frame_ccdc9daa58851d834336dfc2ef838c90_3 = MAKE_CLASS_FRAME(codeobj_ccdc9daa58851d834336dfc2ef838c90, module_requests$packages$urllib3$packages$six, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ccdc9daa58851d834336dfc2ef838c90_3);
        assert(Py_REFCNT(frame_ccdc9daa58851d834336dfc2ef838c90_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[110];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__6___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__7__resolve();

        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ccdc9daa58851d834336dfc2ef838c90_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ccdc9daa58851d834336dfc2ef838c90_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ccdc9daa58851d834336dfc2ef838c90_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ccdc9daa58851d834336dfc2ef838c90_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ccdc9daa58851d834336dfc2ef838c90_3);

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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_4 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_7 = mod_consts[8];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_7 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 91;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_31 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91);
        locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91 = NULL;
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

        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91);
        locals_requests$packages$urllib3$packages$six$$$class__3_MovedModule_91 = NULL;
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
        exception_lineno = 91;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_31);
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_34 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_11 = tmp_class_creation_4__bases;
        tmp_subscript_value_3 = mod_consts[79];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_3 = tmp_class_creation_4__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_12 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[97]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_13 = tmp_class_creation_4__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[97]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        tmp_tuple_element_9 = mod_consts[13];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_9 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 106;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_14 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[99]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
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
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_3 = mod_consts[101];
        tmp_getattr_default_3 = mod_consts[102];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_6 = tmp_class_creation_4__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[101]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
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


            exception_lineno = 106;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 106;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_38;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_3 = tmp_class_creation_4__prepared;
            locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_9;
        }
        frame_e41fef4404529eb249a482112ed80e36_4 = MAKE_CLASS_FRAME(codeobj_e41fef4404529eb249a482112ed80e36, module_requests$packages$urllib3$packages$six, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e41fef4404529eb249a482112ed80e36_4);
        assert(Py_REFCNT(frame_e41fef4404529eb249a482112ed80e36_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[113];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__8___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__9__resolve();

        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106, mod_consts[6], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e41fef4404529eb249a482112ed80e36_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e41fef4404529eb249a482112ed80e36_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e41fef4404529eb249a482112ed80e36_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e41fef4404529eb249a482112ed80e36_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_e41fef4404529eb249a482112ed80e36_4);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_6 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_11 = mod_consts[13];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_11 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 106;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_39 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106);
        locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106 = NULL;
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

        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106);
        locals_requests$packages$urllib3$packages$six$$$class__4_MovedAttribute_106 = NULL;
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
        exception_lineno = 106;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_39);
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[116]);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_42 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_17 = tmp_class_creation_5__bases;
        tmp_subscript_value_4 = mod_consts[79];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_4 = tmp_class_creation_5__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_18 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[97]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_19 = tmp_class_creation_5__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[97]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        tmp_tuple_element_13 = mod_consts[15];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_13 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 132;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_20 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[99]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_4 = mod_consts[101];
        tmp_getattr_default_4 = mod_consts[102];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_8 = tmp_class_creation_5__prepared;
            tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_21 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[101]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
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


            exception_lineno = 132;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 132;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_46;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_4 = tmp_class_creation_5__prepared;
            locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132, mod_consts[0], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_12;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_8 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = mod_consts[15];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 132;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_47 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132);
        locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132 = NULL;
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

        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132);
        locals_requests$packages$urllib3$packages$six$$$class__5__MovedItems_132 = NULL;
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
        exception_lineno = 132;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_47);
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_49;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 137;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_9, mod_consts[118]);

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_49 = MAKE_LIST_EMPTY(40);
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_called_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_called_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_called_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_called_value_24;
            PyObject *tmp_called_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_called_value_31;
            PyObject *tmp_called_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_called_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_called_value_38;
            PyObject *tmp_called_value_39;
            PyObject *tmp_called_value_40;
            PyObject *tmp_called_value_41;
            PyObject *tmp_called_value_42;
            PyObject *tmp_called_value_43;
            PyObject *tmp_called_value_44;
            PyObject *tmp_called_value_45;
            PyObject *tmp_called_value_46;
            PyObject *tmp_called_value_47;
            PyObject *tmp_called_value_48;
            PyList_SET_ITEM(tmp_assign_source_49, 0, tmp_list_element_1);
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 138;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_10, mod_consts[119]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 1, tmp_list_element_1);
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 139;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_11, mod_consts[120]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 2, tmp_list_element_1);
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 140;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_12, mod_consts[121]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 3, tmp_list_element_1);
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 141;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_13, mod_consts[122]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 4, tmp_list_element_1);
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 142;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_14, mod_consts[123]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 5, tmp_list_element_1);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 143;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_15, mod_consts[124]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 6, tmp_list_element_1);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 144;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_16, mod_consts[125]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 7, tmp_list_element_1);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 145;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_17, mod_consts[126]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 8, tmp_list_element_1);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 147;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[127]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 9, tmp_list_element_1);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 148;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[128]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 10, tmp_list_element_1);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 149;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[129]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 11, tmp_list_element_1);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 150;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_21, mod_consts[130]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 12, tmp_list_element_1);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 151;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_22, mod_consts[131]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 13, tmp_list_element_1);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 152;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_23, mod_consts[132]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 14, tmp_list_element_1);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 153;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_24, mod_consts[133]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 15, tmp_list_element_1);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 154;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_25, mod_consts[134]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 16, tmp_list_element_1);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 155;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_26, mod_consts[135]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 17, tmp_list_element_1);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 156;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_27, mod_consts[136]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 18, tmp_list_element_1);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 157;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_28, mod_consts[137]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 19, tmp_list_element_1);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 158;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_29, mod_consts[138]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 20, tmp_list_element_1);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 159;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[139]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 21, tmp_list_element_1);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 160;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[140]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 22, tmp_list_element_1);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 161;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[141]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 23, tmp_list_element_1);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 162;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[142]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 24, tmp_list_element_1);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 163;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_34, mod_consts[143]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 25, tmp_list_element_1);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 164;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_35, mod_consts[144]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 26, tmp_list_element_1);
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 165;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_36, mod_consts[145]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 27, tmp_list_element_1);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 166;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_37, mod_consts[146]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 28, tmp_list_element_1);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 167;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_38, mod_consts[147]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 29, tmp_list_element_1);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 168;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_39, mod_consts[148]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 30, tmp_list_element_1);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 169;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_40, mod_consts[149]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 31, tmp_list_element_1);
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 170;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_41, mod_consts[150]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 32, tmp_list_element_1);
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 172;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_42, mod_consts[151]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 33, tmp_list_element_1);
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 174;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_43, mod_consts[152]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 34, tmp_list_element_1);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 175;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_44, mod_consts[153]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 35, tmp_list_element_1);
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 176;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_45, mod_consts[154]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 36, tmp_list_element_1);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 177;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_46, mod_consts[155]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 37, tmp_list_element_1);
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 179;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_47, mod_consts[156]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 38, tmp_list_element_1);
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto list_build_exception_1;
            }
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 180;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[157]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_49, 39, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_49);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_50 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_50;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_51 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 182;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_52 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_52);
    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        tmp_setattr_target_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_setattr_target_1 == NULL)) {
            tmp_setattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_setattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_13;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_expression_value_22 == NULL));
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[5]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_13;
        }
        tmp_setattr_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_setattr_value_1 == NULL)) {
            tmp_setattr_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_setattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_setattr_attr_1);

            exception_lineno = 183;

            goto try_except_handler_13;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_13;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 182;

        goto try_except_handler_13;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_requests$packages$urllib3$packages$six, mod_consts[14]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_14;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 186;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[159]);

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_14;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_54 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_54);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_expression_value_23 == NULL));
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[3]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_14;
        }
        tmp_ass_subscript_1 = mod_consts[160];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_14;
        }
    }
    goto try_end_6;
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__10_add_move();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__11_remove_move();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_56);
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_63);
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_70);
    }
    branch_end_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assign_source_71 == NULL)) {
            tmp_assign_source_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_71);
    }
    goto try_end_7;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_15 == NULL) {
        exception_keeper_tb_15 = MAKE_TRACEBACK(frame_19ee6ada3c32d8097dbd0e0aed97983c, exception_keeper_lineno_15);
    } else if (exception_keeper_lineno_15 != 0) {
        exception_keeper_tb_15 = ADD_TRACEBACK(exception_keeper_tb_15, frame_19ee6ada3c32d8097dbd0e0aed97983c, exception_keeper_lineno_15);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__12_advance_iterator();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_72);
    }
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 227;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame) frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_16;
    branch_end_14:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assign_source_73 == NULL)) {
            tmp_assign_source_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        assert(!(tmp_assign_source_73 == NULL));
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_73);
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__13_get_unbound_function();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = (PyObject *)&PyBaseObject_Type;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__14_callable();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_76);
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__15_get_unbound_function();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_77);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[96];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_78 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        tmp_condition_result_20 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_24 = tmp_class_creation_6__bases;
        tmp_subscript_value_5 = mod_consts[79];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_5 = tmp_class_creation_6__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_80;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_25 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_25, mod_consts[97]);
        tmp_condition_result_21 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_26 = tmp_class_creation_6__metaclass;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[97]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        tmp_tuple_element_16 = mod_consts[182];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_16 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_6__class_decl_dict;
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 247;
        tmp_assign_source_81 = CALL_FUNCTION(tmp_called_value_50, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_27 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[99]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        tmp_condition_result_22 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_5 = mod_consts[101];
        tmp_getattr_default_5 = mod_consts[102];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_10 = tmp_class_creation_6__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[101]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 247;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_82;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_5 = tmp_class_creation_6__prepared;
            locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_19;
        }
        frame_56f9fb144a42eb9b85c64c2a81909be9_5 = MAKE_CLASS_FRAME(codeobj_56f9fb144a42eb9b85c64c2a81909be9, module_requests$packages$urllib3$packages$six, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_56f9fb144a42eb9b85c64c2a81909be9_5);
        assert(Py_REFCNT(frame_56f9fb144a42eb9b85c64c2a81909be9_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__16_next();

        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_56f9fb144a42eb9b85c64c2a81909be9_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_56f9fb144a42eb9b85c64c2a81909be9_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_56f9fb144a42eb9b85c64c2a81909be9_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_56f9fb144a42eb9b85c64c2a81909be9_5,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_56f9fb144a42eb9b85c64c2a81909be9_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_19;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            tmp_cmp_expr_right_6 = mod_consts[96];
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_19;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_51 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_18 = mod_consts[182];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_18 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_6__class_decl_dict;
            frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 247;
            tmp_assign_source_84 = CALL_FUNCTION(tmp_called_value_51, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto try_except_handler_19;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_83 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247);
        locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247);
        locals_requests$packages$urllib3$packages$six$$$class__6_Iterator_247 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 247;
        goto try_except_handler_17;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_83);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_assign_source_85 == NULL)) {
            tmp_assign_source_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_85);
    }
    branch_end_15:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[185];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[186]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 257;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[186]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 258;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_54);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[186]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 259;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_55);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[186]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 260;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_56);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;


        tmp_assign_source_90 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__17_iterkeys();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;


        tmp_assign_source_91 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__18_itervalues();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;


        tmp_assign_source_92 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__19_iteritems();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_92);
    }
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_mvar_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_93;


        tmp_assign_source_93 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__20_b();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;


        tmp_assign_source_94 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__21_u();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 286;
        tmp_assign_source_95 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_1,
            mod_consts[193],
            &PyTuple_GET_ITEM(mod_consts[194], 0)
        );

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_96 == NULL));
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_expression_value_33 == NULL));
        tmp_assign_source_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[197]);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_assign_source_98 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[198]);
        }
        assert(!(tmp_assign_source_98 == NULL));
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_98);
    }
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_99;


        tmp_assign_source_99 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__23_b();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;


        tmp_assign_source_100 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__24_u();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = LOOKUP_BUILTIN(mod_consts[199]);
        assert(tmp_assign_source_101 != NULL);
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[197];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$packages$urllib3$packages$six;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[79];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 296;
        tmp_assign_source_102 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_assign_source_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[197]);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_104 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_105 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_105);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    branch_end_19:;
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[200];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_57, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[201];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_58, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_mvar_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_mvar_value_4);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[202];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$packages$urllib3$packages$six;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[79];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 303;
        tmp_assign_source_106 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        assert(!(tmp_assign_source_106 == NULL));
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        tmp_getattr_target_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_getattr_target_6 == NULL)) {
            tmp_getattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
        }

        assert(!(tmp_getattr_target_6 == NULL));
        tmp_getattr_attr_6 = mod_consts[49];
        tmp_assign_source_107 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, NULL);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[110];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_108 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__25_reraise(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        tmp_getattr_target_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_getattr_target_7 == NULL)) {
            tmp_getattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
        }

        assert(!(tmp_getattr_target_7 == NULL));
        tmp_getattr_attr_7 = mod_consts[205];
        tmp_assign_source_109 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, NULL);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_109);
    }
    if (DICT_REMOVE_ITEM((PyObject *)moduledict_requests$packages$urllib3$packages$six, mod_consts[202]) == false) {
        CLEAR_ERROR_OCCURRED();
    }

    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[113];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_110 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__26_exec_(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_110);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_4;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        assert(!(tmp_called_value_59 == NULL));
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 330;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[207]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_111;


        tmp_assign_source_111 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__27_print_();

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_111);
    }
    branch_end_20:;
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[208];
        frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_60, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19ee6ada3c32d8097dbd0e0aed97983c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19ee6ada3c32d8097dbd0e0aed97983c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19ee6ada3c32d8097dbd0e0aed97983c, exception_lineno);
    }



    assertFrameObject(frame_19ee6ada3c32d8097dbd0e0aed97983c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[96];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_112 = MAKE_FUNCTION_requests$packages$urllib3$packages$six$$$function__28_with_metaclass(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_112);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests.packages.urllib3.packages.six", false);

    Py_INCREF(module_requests$packages$urllib3$packages$six);
    return module_requests$packages$urllib3$packages$six;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$urllib3$packages$six, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$packages$urllib3$packages$six", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
