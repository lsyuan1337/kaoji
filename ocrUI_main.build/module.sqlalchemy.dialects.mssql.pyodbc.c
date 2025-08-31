/* Generated code for Python module 'sqlalchemy.dialects.mssql.pyodbc'
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

/* The "module_sqlalchemy$dialects$mssql$pyodbc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$dialects$mssql$pyodbc;
PyDictObject *moduledict_sqlalchemy$dialects$mssql$pyodbc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[243];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[243];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.dialects.mssql.pyodbc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 243; i++) {
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
void checkModuleConstants_sqlalchemy$dialects$mssql$pyodbc(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 243; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_03a6408edd0d370a1da799f77da4517e;
static PyCodeObject *codeobj_a17336593896193b7c12a42427d4fef1;
static PyCodeObject *codeobj_2da28391a2971acdaf9a4c53bb7e602e;
static PyCodeObject *codeobj_fa4e4529e521e7fbd5d890c283dfbd53;
static PyCodeObject *codeobj_2a28054456b2554a1feaf1a42dae9368;
static PyCodeObject *codeobj_4ad1efbdd56e791d0d5f50954147cc9a;
static PyCodeObject *codeobj_36757635fb4a09d5876316184c98887f;
static PyCodeObject *codeobj_fb48ee503eecc178de4eee720c58be8f;
static PyCodeObject *codeobj_6f743249e593ed5df4351ffa5a9b0d46;
static PyCodeObject *codeobj_34f8620c1b3860e50b8f12628e6ea4db;
static PyCodeObject *codeobj_7a62cde69a71756f05205d16f8d915da;
static PyCodeObject *codeobj_75ca7bc1c3a5364506dccdbd523c644c;
static PyCodeObject *codeobj_0185a7a378b6b5bcaebcb4f22219e1aa;
static PyCodeObject *codeobj_3b642780995e1194c40ba92b11d4ad22;
static PyCodeObject *codeobj_62d6ad312dfe590c12ffc2eb9d5206d1;
static PyCodeObject *codeobj_a89d17675abc85d1703b8ee1641e7515;
static PyCodeObject *codeobj_3cb727e7816a346da57d418986b311ab;
static PyCodeObject *codeobj_f26191b1c1ed58d999f4563aa488b6dc;
static PyCodeObject *codeobj_d716ddfb38bd975e94932cdd2fecfcda;
static PyCodeObject *codeobj_18838596e6a6a157705152293b0c6254;
static PyCodeObject *codeobj_02a6f07b3517e6d2319e366ae33d253e;
static PyCodeObject *codeobj_0d99916da7d3ebd11d514589559fb1d8;
static PyCodeObject *codeobj_2da1d423a531c13c9b8662afe9c32309;
static PyCodeObject *codeobj_48fff596f918f10cdd2e33a07de67b0c;
static PyCodeObject *codeobj_6f835b122170006a9fd7b08db67f9f60;
static PyCodeObject *codeobj_f40f4605c87e671c515d797c44b887f9;
static PyCodeObject *codeobj_8256c776c7bdefbb50e4a4db7466fed9;
static PyCodeObject *codeobj_f6be122a9b4d022f6b09a388e295eaf2;
static PyCodeObject *codeobj_b4a8df20637fdb13060dcdabe95c1060;
static PyCodeObject *codeobj_6f37ffd3673f23a8a2b51d2255b1eaef;
static PyCodeObject *codeobj_a0dd69517eb014e2bf9187536c2c92ee;
static PyCodeObject *codeobj_779dcca4d588da243365dcd19229848a;
static PyCodeObject *codeobj_c13e909c3abf399fd252022faa8254a2;
static PyCodeObject *codeobj_e2befce8beaf3169219ce437288cd632;
static PyCodeObject *codeobj_d62bb8a99dbe07ac8149e3ca7d1282da;
static PyCodeObject *codeobj_183420fb96c7127ccdd873a4d4c98070;
static PyCodeObject *codeobj_d7db7f6a4472435f81207bc83fb2bc6d;
static PyCodeObject *codeobj_0298e5094182d474d14d6cc377e39040;
static PyCodeObject *codeobj_0d2e637cf4516671bb1c2d05ee7fae27;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[214]); CHECK_OBJECT(module_filename_obj);
    codeobj_03a6408edd0d370a1da799f77da4517e = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[216], NULL, 1, 0, 0);
    codeobj_a17336593896193b7c12a42427d4fef1 = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[217], NULL, 1, 0, 0);
    codeobj_2da28391a2971acdaf9a4c53bb7e602e = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[217], NULL, 1, 0, 0);
    codeobj_fa4e4529e521e7fbd5d890c283dfbd53 = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[217], NULL, 1, 0, 0);
    codeobj_2a28054456b2554a1feaf1a42dae9368 = MAKE_CODE_OBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[217], NULL, 1, 0, 0);
    codeobj_4ad1efbdd56e791d0d5f50954147cc9a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[218], mod_consts[218], NULL, NULL, 0, 0, 0);
    codeobj_36757635fb4a09d5876316184c98887f = MAKE_CODE_OBJECT(module_filename_obj, 610, CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[219], NULL, 0, 0, 0);
    codeobj_fb48ee503eecc178de4eee720c58be8f = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[219], NULL, 0, 0, 0);
    codeobj_6f743249e593ed5df4351ffa5a9b0d46 = MAKE_CODE_OBJECT(module_filename_obj, 550, CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[219], NULL, 0, 0, 0);
    codeobj_34f8620c1b3860e50b8f12628e6ea4db = MAKE_CODE_OBJECT(module_filename_obj, 555, CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[219], NULL, 0, 0, 0);
    codeobj_7a62cde69a71756f05205d16f8d915da = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_NOFREE, mod_consts[186], mod_consts[186], mod_consts[219], NULL, 0, 0, 0);
    codeobj_75ca7bc1c3a5364506dccdbd523c644c = MAKE_CODE_OBJECT(module_filename_obj, 509, CO_NOFREE, mod_consts[175], mod_consts[175], mod_consts[219], NULL, 0, 0, 0);
    codeobj_0185a7a378b6b5bcaebcb4f22219e1aa = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[219], NULL, 0, 0, 0);
    codeobj_3b642780995e1194c40ba92b11d4ad22 = MAKE_CODE_OBJECT(module_filename_obj, 537, CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[219], NULL, 0, 0, 0);
    codeobj_62d6ad312dfe590c12ffc2eb9d5206d1 = MAKE_CODE_OBJECT(module_filename_obj, 529, CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[219], NULL, 0, 0, 0);
    codeobj_a89d17675abc85d1703b8ee1641e7515 = MAKE_CODE_OBJECT(module_filename_obj, 647, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[61], mod_consts[61], mod_consts[220], mod_consts[219], 3, 0, 0);
    codeobj_3cb727e7816a346da57d418986b311ab = MAKE_CODE_OBJECT(module_filename_obj, 666, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[221], mod_consts[219], 2, 0, 0);
    codeobj_f26191b1c1ed58d999f4563aa488b6dc = MAKE_CODE_OBJECT(module_filename_obj, 701, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[222], NULL, 1, 0, 0);
    codeobj_d716ddfb38bd975e94932cdd2fecfcda = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[223], NULL, 2, 0, 0);
    codeobj_18838596e6a6a157705152293b0c6254 = MAKE_CODE_OBJECT(module_filename_obj, 699, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[224], NULL, 2, 0, 0);
    codeobj_02a6f07b3517e6d2319e366ae33d253e = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[225], NULL, 2, 0, 0);
    codeobj_0d99916da7d3ebd11d514589559fb1d8 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[226], NULL, 2, 0, 0);
    codeobj_2da1d423a531c13c9b8662afe9c32309 = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[227], NULL, 2, 0, 0);
    codeobj_48fff596f918f10cdd2e33a07de67b0c = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[228], mod_consts[219], 2, 0, 0);
    codeobj_6f835b122170006a9fd7b08db67f9f60 = MAKE_CODE_OBJECT(module_filename_obj, 721, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[100], mod_consts[100], mod_consts[229], mod_consts[219], 5, 0, 0);
    codeobj_f40f4605c87e671c515d797c44b887f9 = MAKE_CODE_OBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[230], NULL, 2, 0, 0);
    codeobj_8256c776c7bdefbb50e4a4db7466fed9 = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[230], NULL, 2, 0, 0);
    codeobj_f6be122a9b4d022f6b09a388e295eaf2 = MAKE_CODE_OBJECT(module_filename_obj, 538, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[230], NULL, 2, 0, 0);
    codeobj_b4a8df20637fdb13060dcdabe95c1060 = MAKE_CODE_OBJECT(module_filename_obj, 546, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[230], NULL, 2, 0, 0);
    codeobj_6f37ffd3673f23a8a2b51d2255b1eaef = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[230], NULL, 2, 0, 0);
    codeobj_a0dd69517eb014e2bf9187536c2c92ee = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[230], NULL, 2, 0, 0);
    codeobj_779dcca4d588da243365dcd19229848a = MAKE_CODE_OBJECT(module_filename_obj, 726, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[104], mod_consts[104], mod_consts[231], mod_consts[219], 4, 0, 0);
    codeobj_c13e909c3abf399fd252022faa8254a2 = MAKE_CODE_OBJECT(module_filename_obj, 691, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[232], mod_consts[233], 1, 0, 0);
    codeobj_e2befce8beaf3169219ce437288cd632 = MAKE_CODE_OBJECT(module_filename_obj, 688, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[234], mod_consts[219], 1, 0, 0);
    codeobj_d62bb8a99dbe07ac8149e3ca7d1282da = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[60], mod_consts[60], mod_consts[235], mod_consts[219], 1, 0, 0);
    codeobj_183420fb96c7127ccdd873a4d4c98070 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[236], mod_consts[219], 1, 0, 0);
    codeobj_d7db7f6a4472435f81207bc83fb2bc6d = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[3], mod_consts[237], mod_consts[238], 1, 0, 0);
    codeobj_0298e5094182d474d14d6cc377e39040 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[3], mod_consts[239], mod_consts[240], 1, 0, 0);
    codeobj_0d2e637cf4516671bb1c2d05ee7fae27 = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[3], mod_consts[241], mod_consts[242], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__10_get_dbapi_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__11_get_dbapi_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__12_pre_exec(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__13_post_exec(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__14___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__15__get_server_version_info(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect$$$function__1_on_connect(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type$$$function__1__handle_datetimeoffset();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__18_do_executemany(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__19_is_disconnect(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__2__small_dec_to_string();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__3__large_dec_to_string();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__6_get_dbapi_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__7_get_dbapi_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__8_get_dbapi_type();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__9_get_dbapi_type();


// The module function definitions.
static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_dialect = python_pars[1];
    struct Nuitka_CellObject *var_super_process = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_48fff596f918f10cdd2e33a07de67b0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_48fff596f918f10cdd2e33a07de67b0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_48fff596f918f10cdd2e33a07de67b0c)) {
        Py_XDECREF(cache_frame_48fff596f918f10cdd2e33a07de67b0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48fff596f918f10cdd2e33a07de67b0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48fff596f918f10cdd2e33a07de67b0c = MAKE_FUNCTION_FRAME(codeobj_48fff596f918f10cdd2e33a07de67b0c, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48fff596f918f10cdd2e33a07de67b0c->m_type_description == NULL);
    frame_48fff596f918f10cdd2e33a07de67b0c = cache_frame_48fff596f918f10cdd2e33a07de67b0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_48fff596f918f10cdd2e33a07de67b0c);
    assert(Py_REFCNT(frame_48fff596f918f10cdd2e33a07de67b0c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "cococ";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_object_arg_value_1 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "cococ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialect);
        tmp_args_element_value_1 = par_dialect;
        frame_48fff596f918f10cdd2e33a07de67b0c->m_frame.f_lineno = 390;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "cococ";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_super_process) == NULL);
        PyCell_SET(var_super_process, tmp_assign_source_1);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_dialect);
        tmp_expression_value_1 = par_dialect;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "cococ";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "cococ";
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
    CHECK_OBJECT(Nuitka_Cell_GET(var_super_process));
    tmp_return_value = Nuitka_Cell_GET(var_super_process);
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_48fff596f918f10cdd2e33a07de67b0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48fff596f918f10cdd2e33a07de67b0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48fff596f918f10cdd2e33a07de67b0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48fff596f918f10cdd2e33a07de67b0c,
        type_description_1,
        par_self,
        par_dialect,
        var_super_process,
        var_process,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_48fff596f918f10cdd2e33a07de67b0c == cache_frame_48fff596f918f10cdd2e33a07de67b0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48fff596f918f10cdd2e33a07de67b0c);
        cache_frame_48fff596f918f10cdd2e33a07de67b0c = NULL;
    }

    assertFrameObject(frame_48fff596f918f10cdd2e33a07de67b0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_super_process;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_super_process);
    Py_DECREF(var_super_process);
    var_super_process = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
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

    CHECK_OBJECT(var_super_process);
    Py_DECREF(var_super_process);
    var_super_process = NULL;
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
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor$$$function__1_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_adjusted = NULL;
    struct Nuitka_FrameObject *frame_0298e5094182d474d14d6cc377e39040;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0298e5094182d474d14d6cc377e39040 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0298e5094182d474d14d6cc377e39040)) {
        Py_XDECREF(cache_frame_0298e5094182d474d14d6cc377e39040);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0298e5094182d474d14d6cc377e39040 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0298e5094182d474d14d6cc377e39040 = MAKE_FUNCTION_FRAME(codeobj_0298e5094182d474d14d6cc377e39040, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0298e5094182d474d14d6cc377e39040->m_type_description == NULL);
    frame_0298e5094182d474d14d6cc377e39040 = cache_frame_0298e5094182d474d14d6cc377e39040;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0298e5094182d474d14d6cc377e39040);
    assert(Py_REFCNT(frame_0298e5094182d474d14d6cc377e39040) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_value);
        tmp_called_instance_1 = par_value;
        frame_0298e5094182d474d14d6cc377e39040->m_frame.f_lineno = 397;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        assert(var_adjusted == NULL);
        var_adjusted = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_adjusted);
        tmp_cmp_expr_left_1 = var_adjusted;
        tmp_cmp_expr_right_1 = mod_consts[10];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oocc";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_0298e5094182d474d14d6cc377e39040->m_frame.f_lineno = 399;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[11], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_adjusted);
        tmp_cmp_expr_left_2 = var_adjusted;
        tmp_cmp_expr_right_2 = mod_consts[12];
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oocc";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_0298e5094182d474d14d6cc377e39040->m_frame.f_lineno = 401;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[13], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    branch_end_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[1]));
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_value;
        frame_0298e5094182d474d14d6cc377e39040->m_frame.f_lineno = 404;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    if (par_value == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 406;
        type_description_1 = "oocc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_0298e5094182d474d14d6cc377e39040, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0298e5094182d474d14d6cc377e39040->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0298e5094182d474d14d6cc377e39040, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0298e5094182d474d14d6cc377e39040,
        type_description_1,
        par_value,
        var_adjusted,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_0298e5094182d474d14d6cc377e39040 == cache_frame_0298e5094182d474d14d6cc377e39040) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0298e5094182d474d14d6cc377e39040);
        cache_frame_0298e5094182d474d14d6cc377e39040 = NULL;
    }

    assertFrameObject(frame_0298e5094182d474d14d6cc377e39040);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_adjusted);
    var_adjusted = NULL;
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

    Py_XDECREF(var_adjusted);
    var_adjusted = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__2__small_dec_to_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *outline_0_var_nint = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_02a6f07b3517e6d2319e366ae33d253e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_03a6408edd0d370a1da799f77da4517e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_03a6408edd0d370a1da799f77da4517e_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_02a6f07b3517e6d2319e366ae33d253e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02a6f07b3517e6d2319e366ae33d253e)) {
        Py_XDECREF(cache_frame_02a6f07b3517e6d2319e366ae33d253e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02a6f07b3517e6d2319e366ae33d253e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02a6f07b3517e6d2319e366ae33d253e = MAKE_FUNCTION_FRAME(codeobj_02a6f07b3517e6d2319e366ae33d253e, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02a6f07b3517e6d2319e366ae33d253e->m_type_description == NULL);
    frame_02a6f07b3517e6d2319e366ae33d253e = cache_frame_02a6f07b3517e6d2319e366ae33d253e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_02a6f07b3517e6d2319e366ae33d253e);
    assert(Py_REFCNT(frame_02a6f07b3517e6d2319e366ae33d253e) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[16];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = mod_consts[10];
        tmp_and_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 415;
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
        tmp_and_right_value_1 = mod_consts[17];
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

            exception_lineno = 415;
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
        tmp_or_right_value_1 = mod_consts[18];
        Py_INCREF(tmp_or_right_value_1);
        tmp_tuple_element_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_tuple_element_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_abs_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_mult_expr_left_1 = mod_consts[19];
            CHECK_OBJECT(par_value);
            tmp_called_instance_1 = par_value;
            frame_02a6f07b3517e6d2319e366ae33d253e->m_frame.f_lineno = 416;
            tmp_abs_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
            if (tmp_abs_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_left_1 = BUILTIN_ABS(tmp_abs_arg_1);
            Py_DECREF(tmp_abs_arg_1);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_right_1 = mod_consts[20];
            tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            tmp_str_arg_value_1 = mod_consts[18];
            // Tried code:
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_expression_value_1;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_subscript_value_1;
                CHECK_OBJECT(par_value);
                tmp_called_instance_2 = par_value;
                frame_02a6f07b3517e6d2319e366ae33d253e->m_frame.f_lineno = 417;
                tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
                if (tmp_expression_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_1 = "oo";
                    goto try_except_handler_1;
                }
                tmp_subscript_value_1 = mod_consts[20];
                tmp_iter_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
                Py_DECREF(tmp_expression_value_1);
                if (tmp_iter_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_1 = "oo";
                    goto try_except_handler_1;
                }
                tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
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
            if (isFrameUnusable(cache_frame_03a6408edd0d370a1da799f77da4517e_2)) {
                Py_XDECREF(cache_frame_03a6408edd0d370a1da799f77da4517e_2);

#if _DEBUG_REFCOUNTS
                if (cache_frame_03a6408edd0d370a1da799f77da4517e_2 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_03a6408edd0d370a1da799f77da4517e_2 = MAKE_FUNCTION_FRAME(codeobj_03a6408edd0d370a1da799f77da4517e, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_03a6408edd0d370a1da799f77da4517e_2->m_type_description == NULL);
            frame_03a6408edd0d370a1da799f77da4517e_2 = cache_frame_03a6408edd0d370a1da799f77da4517e_2;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_03a6408edd0d370a1da799f77da4517e_2);
            assert(Py_REFCNT(frame_03a6408edd0d370a1da799f77da4517e_2) == 2);

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
                        exception_lineno = 417;
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
                    PyObject *old = outline_0_var_nint;
                    outline_0_var_nint = tmp_assign_source_4;
                    Py_INCREF(outline_0_var_nint);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_unicode_arg_1;
                CHECK_OBJECT(tmp_listcomp_1__contraction);
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT(outline_0_var_nint);
                tmp_unicode_arg_1 = outline_0_var_nint;
                tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
                if (tmp_append_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_2 = "o";
                    goto try_except_handler_2;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_2 = "o";
                    goto try_except_handler_2;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_iterable_value_1 = tmp_listcomp_1__contraction;
            Py_INCREF(tmp_iterable_value_1);
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
                exception_tb = MAKE_TRACEBACK(frame_03a6408edd0d370a1da799f77da4517e_2, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_03a6408edd0d370a1da799f77da4517e_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_03a6408edd0d370a1da799f77da4517e_2, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_03a6408edd0d370a1da799f77da4517e_2,
                type_description_2,
                outline_0_var_nint
            );


            // Release cached frame if used for exception.
            if (frame_03a6408edd0d370a1da799f77da4517e_2 == cache_frame_03a6408edd0d370a1da799f77da4517e_2) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_03a6408edd0d370a1da799f77da4517e_2);
                cache_frame_03a6408edd0d370a1da799f77da4517e_2 = NULL;
            }

            assertFrameObject(frame_03a6408edd0d370a1da799f77da4517e_2);

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
            Py_XDECREF(outline_0_var_nint);
            outline_0_var_nint = NULL;
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

            Py_XDECREF(outline_0_var_nint);
            outline_0_var_nint = NULL;
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
            exception_lineno = 417;
            goto tuple_build_exception_1;
            outline_result_1:;
            tmp_tuple_element_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
            Py_DECREF(tmp_iterable_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02a6f07b3517e6d2319e366ae33d253e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02a6f07b3517e6d2319e366ae33d253e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02a6f07b3517e6d2319e366ae33d253e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02a6f07b3517e6d2319e366ae33d253e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_02a6f07b3517e6d2319e366ae33d253e == cache_frame_02a6f07b3517e6d2319e366ae33d253e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02a6f07b3517e6d2319e366ae33d253e);
        cache_frame_02a6f07b3517e6d2319e366ae33d253e = NULL;
    }

    assertFrameObject(frame_02a6f07b3517e6d2319e366ae33d253e);

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


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__3__large_dec_to_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var__int = NULL;
    PyObject *var_result = NULL;
    PyObject *outline_0_var_s = NULL;
    PyObject *outline_1_var_s = NULL;
    PyObject *outline_2_var_s = NULL;
    PyObject *outline_3_var_s = NULL;
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
    struct Nuitka_FrameObject *frame_d716ddfb38bd975e94932cdd2fecfcda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_a17336593896193b7c12a42427d4fef1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a17336593896193b7c12a42427d4fef1_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_2da28391a2971acdaf9a4c53bb7e602e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_fa4e4529e521e7fbd5d890c283dfbd53_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_2a28054456b2554a1feaf1a42dae9368_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_2a28054456b2554a1feaf1a42dae9368_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_d716ddfb38bd975e94932cdd2fecfcda = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d716ddfb38bd975e94932cdd2fecfcda)) {
        Py_XDECREF(cache_frame_d716ddfb38bd975e94932cdd2fecfcda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d716ddfb38bd975e94932cdd2fecfcda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d716ddfb38bd975e94932cdd2fecfcda = MAKE_FUNCTION_FRAME(codeobj_d716ddfb38bd975e94932cdd2fecfcda, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d716ddfb38bd975e94932cdd2fecfcda->m_type_description == NULL);
    frame_d716ddfb38bd975e94932cdd2fecfcda = cache_frame_d716ddfb38bd975e94932cdd2fecfcda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d716ddfb38bd975e94932cdd2fecfcda);
    assert(Py_REFCNT(frame_d716ddfb38bd975e94932cdd2fecfcda) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_value);
        tmp_called_instance_1 = par_value;
        frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame.f_lineno = 421;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[20];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var__int == NULL);
        var__int = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        tmp_cmp_expr_left_1 = mod_consts[22];
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_cmp_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_mod_expr_left_1 = mod_consts[23];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_and_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        tmp_and_right_value_1 = mod_consts[17];
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

            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[18];
        Py_INCREF(tmp_or_right_value_1);
        tmp_tuple_element_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_tuple_element_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_1;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_sub_expr_left_2;
            nuitka_digit tmp_sub_expr_right_2;
            PyObject *tmp_len_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_str_arg_value_1 = mod_consts[18];
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT(var__int);
                tmp_iter_arg_1 = var__int;
                tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
                if (tmp_assign_source_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 425;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                assert(tmp_listcomp_1__$0 == NULL);
                tmp_listcomp_1__$0 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
                assert(tmp_listcomp_1__contraction == NULL);
                tmp_listcomp_1__contraction = tmp_assign_source_4;
            }
            if (isFrameUnusable(cache_frame_a17336593896193b7c12a42427d4fef1_2)) {
                Py_XDECREF(cache_frame_a17336593896193b7c12a42427d4fef1_2);

#if _DEBUG_REFCOUNTS
                if (cache_frame_a17336593896193b7c12a42427d4fef1_2 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_a17336593896193b7c12a42427d4fef1_2 = MAKE_FUNCTION_FRAME(codeobj_a17336593896193b7c12a42427d4fef1, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_a17336593896193b7c12a42427d4fef1_2->m_type_description == NULL);
            frame_a17336593896193b7c12a42427d4fef1_2 = cache_frame_a17336593896193b7c12a42427d4fef1_2;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_a17336593896193b7c12a42427d4fef1_2);
            assert(Py_REFCNT(frame_a17336593896193b7c12a42427d4fef1_2) == 2);

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT(tmp_listcomp_1__$0);
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
                if (tmp_assign_source_5 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_1;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "o";
                        exception_lineno = 425;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
                tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_s;
                    outline_0_var_s = tmp_assign_source_6;
                    Py_INCREF(outline_0_var_s);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_unicode_arg_2;
                CHECK_OBJECT(tmp_listcomp_1__contraction);
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT(outline_0_var_s);
                tmp_unicode_arg_2 = outline_0_var_s;
                tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
                if (tmp_append_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 425;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 425;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_iterable_value_1 = tmp_listcomp_1__contraction;
            Py_INCREF(tmp_iterable_value_1);
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
                exception_tb = MAKE_TRACEBACK(frame_a17336593896193b7c12a42427d4fef1_2, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_a17336593896193b7c12a42427d4fef1_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_a17336593896193b7c12a42427d4fef1_2, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_a17336593896193b7c12a42427d4fef1_2,
                type_description_2,
                outline_0_var_s
            );


            // Release cached frame if used for exception.
            if (frame_a17336593896193b7c12a42427d4fef1_2 == cache_frame_a17336593896193b7c12a42427d4fef1_2) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_a17336593896193b7c12a42427d4fef1_2);
                cache_frame_a17336593896193b7c12a42427d4fef1_2 = NULL;
            }

            assertFrameObject(frame_a17336593896193b7c12a42427d4fef1_2);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;
            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF(outline_0_var_s);
            outline_0_var_s = NULL;
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
            exception_lineno = 425;
            goto tuple_build_exception_1;
            outline_result_1:;
            tmp_tuple_element_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
            Py_DECREF(tmp_iterable_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            tmp_mult_expr_left_1 = mod_consts[19];
            CHECK_OBJECT(par_value);
            tmp_called_instance_2 = par_value;
            frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame.f_lineno = 426;
            tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var__int);
            tmp_len_arg_1 = var__int;
            tmp_sub_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_1);

                exception_lineno = 426;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_right_2 = 1;
            tmp_sub_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            assert(!(tmp_sub_expr_right_1 == NULL));
            tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_sub_expr_left_3;
        nuitka_digit tmp_sub_expr_right_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var__int);
        tmp_len_arg_2 = var__int;
        tmp_sub_expr_left_3 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_3 = 1;
        tmp_cmp_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        assert(!(tmp_cmp_expr_left_3 == NULL));
        CHECK_OBJECT(par_value);
        tmp_called_instance_3 = par_value;
        frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame.f_lineno = 429;
        tmp_cmp_expr_right_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[9]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
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
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_mod_expr_left_2 = mod_consts[24];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_4 = par_value;
        tmp_cmp_expr_right_4 = mod_consts[10];
        tmp_and_left_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        tmp_and_right_value_2 = mod_consts[17];
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

            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[18];
        Py_INCREF(tmp_or_right_value_2);
        tmp_tuple_element_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_tuple_element_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_str_arg_value_2;
            PyObject *tmp_iterable_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_str_arg_value_3;
            PyObject *tmp_iterable_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_start_value_2;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
            tmp_str_arg_value_2 = mod_consts[18];
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT(var__int);
                tmp_iter_arg_2 = var__int;
                tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
                if (tmp_assign_source_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                assert(tmp_listcomp_2__$0 == NULL);
                tmp_listcomp_2__$0 = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
                assert(tmp_listcomp_2__contraction == NULL);
                tmp_listcomp_2__contraction = tmp_assign_source_9;
            }
            if (isFrameUnusable(cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3)) {
                Py_XDECREF(cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3);

#if _DEBUG_REFCOUNTS
                if (cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3 = MAKE_FUNCTION_FRAME(codeobj_2da28391a2971acdaf9a4c53bb7e602e, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3->m_type_description == NULL);
            frame_2da28391a2971acdaf9a4c53bb7e602e_3 = cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_2da28391a2971acdaf9a4c53bb7e602e_3);
            assert(Py_REFCNT(frame_2da28391a2971acdaf9a4c53bb7e602e_3) == 2);

            // Framed code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT(tmp_listcomp_2__$0);
                tmp_next_source_2 = tmp_listcomp_2__$0;
                tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
                if (tmp_assign_source_10 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "o";
                        exception_lineno = 432;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_2__iter_value_0;
                    tmp_listcomp_2__iter_value_0 = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
                tmp_assign_source_11 = tmp_listcomp_2__iter_value_0;
                {
                    PyObject *old = outline_1_var_s;
                    outline_1_var_s = tmp_assign_source_11;
                    Py_INCREF(outline_1_var_s);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_unicode_arg_3;
                CHECK_OBJECT(tmp_listcomp_2__contraction);
                tmp_append_list_2 = tmp_listcomp_2__contraction;
                CHECK_OBJECT(outline_1_var_s);
                tmp_unicode_arg_3 = outline_1_var_s;
                tmp_append_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
                if (tmp_append_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_expression_value_2 = tmp_listcomp_2__contraction;
            Py_INCREF(tmp_expression_value_2);
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
                exception_tb = MAKE_TRACEBACK(frame_2da28391a2971acdaf9a4c53bb7e602e_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_2da28391a2971acdaf9a4c53bb7e602e_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_2da28391a2971acdaf9a4c53bb7e602e_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_2da28391a2971acdaf9a4c53bb7e602e_3,
                type_description_2,
                outline_1_var_s
            );


            // Release cached frame if used for exception.
            if (frame_2da28391a2971acdaf9a4c53bb7e602e_3 == cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3);
                cache_frame_2da28391a2971acdaf9a4c53bb7e602e_3 = NULL;
            }

            assertFrameObject(frame_2da28391a2971acdaf9a4c53bb7e602e_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;
            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_2:;
            type_description_1 = "oooo";
            goto try_except_handler_4;
            skip_nested_handling_2:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF(outline_1_var_s);
            outline_1_var_s = NULL;
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

            Py_XDECREF(outline_1_var_s);
            outline_1_var_s = NULL;
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
            exception_lineno = 432;
            goto tuple_build_exception_2;
            outline_result_2:;
            tmp_start_value_1 = mod_consts[10];
            CHECK_OBJECT(par_value);
            tmp_called_instance_4 = par_value;
            frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame.f_lineno = 432;
            tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[9]);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 432;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_1 = mod_consts[20];
            tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            if (tmp_stop_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 432;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
            Py_DECREF(tmp_stop_value_1);
            assert(!(tmp_subscript_value_2 == NULL));
            tmp_iterable_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_iterable_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
            Py_DECREF(tmp_iterable_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
            tmp_str_arg_value_3 = mod_consts[18];
            // Tried code:
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_iter_arg_3;
                CHECK_OBJECT(var__int);
                tmp_iter_arg_3 = var__int;
                tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
                if (tmp_assign_source_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                assert(tmp_listcomp_3__$0 == NULL);
                tmp_listcomp_3__$0 = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
                assert(tmp_listcomp_3__contraction == NULL);
                tmp_listcomp_3__contraction = tmp_assign_source_13;
            }
            if (isFrameUnusable(cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4)) {
                Py_XDECREF(cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4);

#if _DEBUG_REFCOUNTS
                if (cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4 = MAKE_FUNCTION_FRAME(codeobj_fa4e4529e521e7fbd5d890c283dfbd53, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4->m_type_description == NULL);
            frame_fa4e4529e521e7fbd5d890c283dfbd53_4 = cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_fa4e4529e521e7fbd5d890c283dfbd53_4);
            assert(Py_REFCNT(frame_fa4e4529e521e7fbd5d890c283dfbd53_4) == 2);

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT(tmp_listcomp_3__$0);
                tmp_next_source_3 = tmp_listcomp_3__$0;
                tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_14 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "o";
                        exception_lineno = 433;
                        goto try_except_handler_7;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_3__iter_value_0;
                    tmp_listcomp_3__iter_value_0 = tmp_assign_source_14;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
                tmp_assign_source_15 = tmp_listcomp_3__iter_value_0;
                {
                    PyObject *old = outline_2_var_s;
                    outline_2_var_s = tmp_assign_source_15;
                    Py_INCREF(outline_2_var_s);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_3;
                PyObject *tmp_append_value_3;
                PyObject *tmp_unicode_arg_4;
                CHECK_OBJECT(tmp_listcomp_3__contraction);
                tmp_append_list_3 = tmp_listcomp_3__contraction;
                CHECK_OBJECT(outline_2_var_s);
                tmp_unicode_arg_4 = outline_2_var_s;
                tmp_append_value_3 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
                if (tmp_append_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_2 = "o";
                    goto try_except_handler_7;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_2 = "o";
                    goto try_except_handler_7;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_expression_value_3 = tmp_listcomp_3__contraction;
            Py_INCREF(tmp_expression_value_3);
            goto try_return_handler_7;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_7:;
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
            try_except_handler_7:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
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
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto frame_exception_exit_4;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_3;
            frame_return_exit_3:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_6;
            frame_exception_exit_4:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_fa4e4529e521e7fbd5d890c283dfbd53_4, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_fa4e4529e521e7fbd5d890c283dfbd53_4->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_fa4e4529e521e7fbd5d890c283dfbd53_4, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_fa4e4529e521e7fbd5d890c283dfbd53_4,
                type_description_2,
                outline_2_var_s
            );


            // Release cached frame if used for exception.
            if (frame_fa4e4529e521e7fbd5d890c283dfbd53_4 == cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4);
                cache_frame_fa4e4529e521e7fbd5d890c283dfbd53_4 = NULL;
            }

            assertFrameObject(frame_fa4e4529e521e7fbd5d890c283dfbd53_4);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;
            frame_no_exception_3:;
            goto skip_nested_handling_3;
            nested_frame_exit_3:;
            type_description_1 = "oooo";
            goto try_except_handler_6;
            skip_nested_handling_3:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            Py_XDECREF(outline_2_var_s);
            outline_2_var_s = NULL;
            goto outline_result_3;
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

            Py_XDECREF(outline_2_var_s);
            outline_2_var_s = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto outline_exception_3;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_3:;
            exception_lineno = 433;
            goto tuple_build_exception_2;
            outline_result_3:;
            CHECK_OBJECT(par_value);
            tmp_called_instance_5 = par_value;
            frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame.f_lineno = 433;
            tmp_add_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[9]);
            if (tmp_add_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 433;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_2 = mod_consts[20];
            tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            if (tmp_start_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 433;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_stop_value_2 = Py_None;
            tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
            Py_DECREF(tmp_start_value_2);
            assert(!(tmp_subscript_value_3 == NULL));
            tmp_iterable_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_iterable_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
            Py_DECREF(tmp_iterable_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_3;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_mod_expr_left_3 = mod_consts[25];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_5 = par_value;
        tmp_cmp_expr_right_5 = mod_consts[10];
        tmp_and_left_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 437;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        tmp_and_right_value_3 = mod_consts[17];
        Py_INCREF(tmp_and_right_value_3);
        tmp_or_left_value_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_or_left_value_3 = tmp_and_left_value_3;
        and_end_3:;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 437;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_or_right_value_3 = mod_consts[18];
        Py_INCREF(tmp_or_right_value_3);
        tmp_tuple_element_3 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_tuple_element_3 = tmp_or_left_value_3;
        or_end_3:;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_str_arg_value_4;
            PyObject *tmp_iterable_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_start_value_3;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_called_instance_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
            tmp_str_arg_value_4 = mod_consts[18];
            // Tried code:
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT(var__int);
                tmp_iter_arg_4 = var__int;
                tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_4);
                if (tmp_assign_source_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_1 = "oooo";
                    goto try_except_handler_8;
                }
                assert(tmp_listcomp_4__$0 == NULL);
                tmp_listcomp_4__$0 = tmp_assign_source_17;
            }
            {
                PyObject *tmp_assign_source_18;
                tmp_assign_source_18 = MAKE_LIST_EMPTY(0);
                assert(tmp_listcomp_4__contraction == NULL);
                tmp_listcomp_4__contraction = tmp_assign_source_18;
            }
            if (isFrameUnusable(cache_frame_2a28054456b2554a1feaf1a42dae9368_5)) {
                Py_XDECREF(cache_frame_2a28054456b2554a1feaf1a42dae9368_5);

#if _DEBUG_REFCOUNTS
                if (cache_frame_2a28054456b2554a1feaf1a42dae9368_5 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_2a28054456b2554a1feaf1a42dae9368_5 = MAKE_FUNCTION_FRAME(codeobj_2a28054456b2554a1feaf1a42dae9368, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_2a28054456b2554a1feaf1a42dae9368_5->m_type_description == NULL);
            frame_2a28054456b2554a1feaf1a42dae9368_5 = cache_frame_2a28054456b2554a1feaf1a42dae9368_5;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_2a28054456b2554a1feaf1a42dae9368_5);
            assert(Py_REFCNT(frame_2a28054456b2554a1feaf1a42dae9368_5) == 2);

            // Framed code:
            // Tried code:
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT(tmp_listcomp_4__$0);
                tmp_next_source_4 = tmp_listcomp_4__$0;
                tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_4);
                if (tmp_assign_source_19 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_4;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "o";
                        exception_lineno = 438;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_4__iter_value_0;
                    tmp_listcomp_4__iter_value_0 = tmp_assign_source_19;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
                tmp_assign_source_20 = tmp_listcomp_4__iter_value_0;
                {
                    PyObject *old = outline_3_var_s;
                    outline_3_var_s = tmp_assign_source_20;
                    Py_INCREF(outline_3_var_s);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_4;
                PyObject *tmp_append_value_4;
                PyObject *tmp_unicode_arg_5;
                CHECK_OBJECT(tmp_listcomp_4__contraction);
                tmp_append_list_4 = tmp_listcomp_4__contraction;
                CHECK_OBJECT(outline_3_var_s);
                tmp_unicode_arg_5 = outline_3_var_s;
                tmp_append_value_4 = BUILTIN_UNICODE1(tmp_unicode_arg_5);
                if (tmp_append_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_2 = "o";
                    goto try_except_handler_9;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_2 = "o";
                    goto try_except_handler_9;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            goto loop_start_4;
            loop_end_4:;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_expression_value_4 = tmp_listcomp_4__contraction;
            Py_INCREF(tmp_expression_value_4);
            goto try_return_handler_9;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_9:;
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
            try_except_handler_9:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
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
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_5;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_4;
            frame_return_exit_4:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_8;
            frame_exception_exit_5:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_2a28054456b2554a1feaf1a42dae9368_5, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_2a28054456b2554a1feaf1a42dae9368_5->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_2a28054456b2554a1feaf1a42dae9368_5, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_2a28054456b2554a1feaf1a42dae9368_5,
                type_description_2,
                outline_3_var_s
            );


            // Release cached frame if used for exception.
            if (frame_2a28054456b2554a1feaf1a42dae9368_5 == cache_frame_2a28054456b2554a1feaf1a42dae9368_5) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_2a28054456b2554a1feaf1a42dae9368_5);
                cache_frame_2a28054456b2554a1feaf1a42dae9368_5 = NULL;
            }

            assertFrameObject(frame_2a28054456b2554a1feaf1a42dae9368_5);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_4;
            frame_no_exception_4:;
            goto skip_nested_handling_4;
            nested_frame_exit_4:;
            type_description_1 = "oooo";
            goto try_except_handler_8;
            skip_nested_handling_4:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            Py_XDECREF(outline_3_var_s);
            outline_3_var_s = NULL;
            goto outline_result_4;
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

            Py_XDECREF(outline_3_var_s);
            outline_3_var_s = NULL;
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
            exception_lineno = 438;
            goto tuple_build_exception_3;
            outline_result_4:;
            tmp_start_value_3 = mod_consts[10];
            CHECK_OBJECT(par_value);
            tmp_called_instance_6 = par_value;
            frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame.f_lineno = 438;
            tmp_add_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[9]);
            if (tmp_add_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 438;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_add_expr_right_3 = mod_consts[20];
            tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            if (tmp_stop_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 438;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
            Py_DECREF(tmp_stop_value_3);
            assert(!(tmp_subscript_value_4 == NULL));
            tmp_iterable_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_iterable_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = UNICODE_JOIN(tmp_str_arg_value_4, tmp_iterable_value_4);
            Py_DECREF(tmp_iterable_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_16;
    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d716ddfb38bd975e94932cdd2fecfcda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d716ddfb38bd975e94932cdd2fecfcda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d716ddfb38bd975e94932cdd2fecfcda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d716ddfb38bd975e94932cdd2fecfcda,
        type_description_1,
        par_self,
        par_value,
        var__int,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_d716ddfb38bd975e94932cdd2fecfcda == cache_frame_d716ddfb38bd975e94932cdd2fecfcda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d716ddfb38bd975e94932cdd2fecfcda);
        cache_frame_d716ddfb38bd975e94932cdd2fecfcda = NULL;
    }

    assertFrameObject(frame_d716ddfb38bd975e94932cdd2fecfcda);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_5:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__int);
    var__int = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var__int);
    var__int = NULL;
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


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_dialect = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_DBAPIBinary = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_0d99916da7d3ebd11d514589559fb1d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0d99916da7d3ebd11d514589559fb1d8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0d99916da7d3ebd11d514589559fb1d8)) {
        Py_XDECREF(cache_frame_0d99916da7d3ebd11d514589559fb1d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d99916da7d3ebd11d514589559fb1d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d99916da7d3ebd11d514589559fb1d8 = MAKE_FUNCTION_FRAME(codeobj_0d99916da7d3ebd11d514589559fb1d8, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d99916da7d3ebd11d514589559fb1d8->m_type_description == NULL);
    frame_0d99916da7d3ebd11d514589559fb1d8 = cache_frame_0d99916da7d3ebd11d514589559fb1d8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d99916da7d3ebd11d514589559fb1d8);
    assert(Py_REFCNT(frame_0d99916da7d3ebd11d514589559fb1d8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_dialect));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_dialect);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_dialect));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_dialect);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_DBAPIBinary) == NULL);
        PyCell_SET(var_DBAPIBinary, tmp_assign_source_1);

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
        exception_tb = MAKE_TRACEBACK(frame_0d99916da7d3ebd11d514589559fb1d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d99916da7d3ebd11d514589559fb1d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d99916da7d3ebd11d514589559fb1d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d99916da7d3ebd11d514589559fb1d8,
        type_description_1,
        par_self,
        par_dialect,
        var_DBAPIBinary,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_0d99916da7d3ebd11d514589559fb1d8 == cache_frame_0d99916da7d3ebd11d514589559fb1d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d99916da7d3ebd11d514589559fb1d8);
        cache_frame_0d99916da7d3ebd11d514589559fb1d8 = NULL;
    }

    assertFrameObject(frame_0d99916da7d3ebd11d514589559fb1d8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_DBAPIBinary;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_dialect;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_DBAPIBinary);
    Py_DECREF(var_DBAPIBinary);
    var_DBAPIBinary = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
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
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor$$$function__1_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_d7db7f6a4472435f81207bc83fb2bc6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7db7f6a4472435f81207bc83fb2bc6d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7db7f6a4472435f81207bc83fb2bc6d)) {
        Py_XDECREF(cache_frame_d7db7f6a4472435f81207bc83fb2bc6d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7db7f6a4472435f81207bc83fb2bc6d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7db7f6a4472435f81207bc83fb2bc6d = MAKE_FUNCTION_FRAME(codeobj_d7db7f6a4472435f81207bc83fb2bc6d, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7db7f6a4472435f81207bc83fb2bc6d->m_type_description == NULL);
    frame_d7db7f6a4472435f81207bc83fb2bc6d = cache_frame_d7db7f6a4472435f81207bc83fb2bc6d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7db7f6a4472435f81207bc83fb2bc6d);
    assert(Py_REFCNT(frame_d7db7f6a4472435f81207bc83fb2bc6d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_d7db7f6a4472435f81207bc83fb2bc6d->m_frame.f_lineno = 466;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "occ";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7db7f6a4472435f81207bc83fb2bc6d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7db7f6a4472435f81207bc83fb2bc6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7db7f6a4472435f81207bc83fb2bc6d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7db7f6a4472435f81207bc83fb2bc6d,
        type_description_1,
        par_value,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_d7db7f6a4472435f81207bc83fb2bc6d == cache_frame_d7db7f6a4472435f81207bc83fb2bc6d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7db7f6a4472435f81207bc83fb2bc6d);
        cache_frame_d7db7f6a4472435f81207bc83fb2bc6d = NULL;
    }

    assertFrameObject(frame_d7db7f6a4472435f81207bc83fb2bc6d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_dialect = python_pars[1];
    PyObject *var_process = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor$$$function__1_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_dto_string = NULL;
    struct Nuitka_FrameObject *frame_0d2e637cf4516671bb1c2d05ee7fae27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d2e637cf4516671bb1c2d05ee7fae27 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0d2e637cf4516671bb1c2d05ee7fae27)) {
        Py_XDECREF(cache_frame_0d2e637cf4516671bb1c2d05ee7fae27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d2e637cf4516671bb1c2d05ee7fae27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d2e637cf4516671bb1c2d05ee7fae27 = MAKE_FUNCTION_FRAME(codeobj_0d2e637cf4516671bb1c2d05ee7fae27, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d2e637cf4516671bb1c2d05ee7fae27->m_type_description == NULL);
    frame_0d2e637cf4516671bb1c2d05ee7fae27 = cache_frame_0d2e637cf4516671bb1c2d05ee7fae27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d2e637cf4516671bb1c2d05ee7fae27);
    assert(Py_REFCNT(frame_0d2e637cf4516671bb1c2d05ee7fae27) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
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
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooc";
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
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_value);
        tmp_called_instance_1 = par_value;
        frame_0d2e637cf4516671bb1c2d05ee7fae27->m_frame.f_lineno = 493;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[36],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_dto_string == NULL);
        var_dto_string = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[40];
        tmp_args_element_value_2 = mod_consts[41];
        CHECK_OBJECT(var_dto_string);
        tmp_args_element_value_3 = var_dto_string;
        frame_0d2e637cf4516671bb1c2d05ee7fae27->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[39],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dto_string;
            assert(old != NULL);
            var_dto_string = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(var_dto_string);
    tmp_return_value = var_dto_string;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_0d2e637cf4516671bb1c2d05ee7fae27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d2e637cf4516671bb1c2d05ee7fae27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d2e637cf4516671bb1c2d05ee7fae27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d2e637cf4516671bb1c2d05ee7fae27,
        type_description_1,
        par_value,
        var_dto_string,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0d2e637cf4516671bb1c2d05ee7fae27 == cache_frame_0d2e637cf4516671bb1c2d05ee7fae27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d2e637cf4516671bb1c2d05ee7fae27);
        cache_frame_0d2e637cf4516671bb1c2d05ee7fae27 = NULL;
    }

    assertFrameObject(frame_0d2e637cf4516671bb1c2d05ee7fae27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dto_string);
    var_dto_string = NULL;
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

    Py_XDECREF(var_dto_string);
    var_dto_string = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__6_get_dbapi_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi = python_pars[1];
    struct Nuitka_FrameObject *frame_f40f4605c87e671c515d797c44b887f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f40f4605c87e671c515d797c44b887f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f40f4605c87e671c515d797c44b887f9)) {
        Py_XDECREF(cache_frame_f40f4605c87e671c515d797c44b887f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f40f4605c87e671c515d797c44b887f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f40f4605c87e671c515d797c44b887f9 = MAKE_FUNCTION_FRAME(codeobj_f40f4605c87e671c515d797c44b887f9, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f40f4605c87e671c515d797c44b887f9->m_type_description == NULL);
    frame_f40f4605c87e671c515d797c44b887f9 = cache_frame_f40f4605c87e671c515d797c44b887f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f40f4605c87e671c515d797c44b887f9);
    assert(Py_REFCNT(frame_f40f4605c87e671c515d797c44b887f9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[43];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[44];
        tmp_or_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_3 = par_dbapi;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_4 = par_dbapi;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[45]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oo";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f40f4605c87e671c515d797c44b887f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f40f4605c87e671c515d797c44b887f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f40f4605c87e671c515d797c44b887f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f40f4605c87e671c515d797c44b887f9,
        type_description_1,
        par_self,
        par_dbapi
    );


    // Release cached frame if used for exception.
    if (frame_f40f4605c87e671c515d797c44b887f9 == cache_frame_f40f4605c87e671c515d797c44b887f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f40f4605c87e671c515d797c44b887f9);
        cache_frame_f40f4605c87e671c515d797c44b887f9 = NULL;
    }

    assertFrameObject(frame_f40f4605c87e671c515d797c44b887f9);

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
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__7_get_dbapi_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi = python_pars[1];
    struct Nuitka_FrameObject *frame_8256c776c7bdefbb50e4a4db7466fed9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8256c776c7bdefbb50e4a4db7466fed9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8256c776c7bdefbb50e4a4db7466fed9)) {
        Py_XDECREF(cache_frame_8256c776c7bdefbb50e4a4db7466fed9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8256c776c7bdefbb50e4a4db7466fed9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8256c776c7bdefbb50e4a4db7466fed9 = MAKE_FUNCTION_FRAME(codeobj_8256c776c7bdefbb50e4a4db7466fed9, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8256c776c7bdefbb50e4a4db7466fed9->m_type_description == NULL);
    frame_8256c776c7bdefbb50e4a4db7466fed9 = cache_frame_8256c776c7bdefbb50e4a4db7466fed9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8256c776c7bdefbb50e4a4db7466fed9);
    assert(Py_REFCNT(frame_8256c776c7bdefbb50e4a4db7466fed9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[43];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[44];
        tmp_or_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_3 = par_dbapi;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_4 = par_dbapi;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8256c776c7bdefbb50e4a4db7466fed9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8256c776c7bdefbb50e4a4db7466fed9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8256c776c7bdefbb50e4a4db7466fed9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8256c776c7bdefbb50e4a4db7466fed9,
        type_description_1,
        par_self,
        par_dbapi
    );


    // Release cached frame if used for exception.
    if (frame_8256c776c7bdefbb50e4a4db7466fed9 == cache_frame_8256c776c7bdefbb50e4a4db7466fed9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8256c776c7bdefbb50e4a4db7466fed9);
        cache_frame_8256c776c7bdefbb50e4a4db7466fed9 = NULL;
    }

    assertFrameObject(frame_8256c776c7bdefbb50e4a4db7466fed9);

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
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__8_get_dbapi_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi = python_pars[1];
    struct Nuitka_FrameObject *frame_f6be122a9b4d022f6b09a388e295eaf2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f6be122a9b4d022f6b09a388e295eaf2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6be122a9b4d022f6b09a388e295eaf2)) {
        Py_XDECREF(cache_frame_f6be122a9b4d022f6b09a388e295eaf2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6be122a9b4d022f6b09a388e295eaf2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6be122a9b4d022f6b09a388e295eaf2 = MAKE_FUNCTION_FRAME(codeobj_f6be122a9b4d022f6b09a388e295eaf2, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6be122a9b4d022f6b09a388e295eaf2->m_type_description == NULL);
    frame_f6be122a9b4d022f6b09a388e295eaf2 = cache_frame_f6be122a9b4d022f6b09a388e295eaf2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6be122a9b4d022f6b09a388e295eaf2);
    assert(Py_REFCNT(frame_f6be122a9b4d022f6b09a388e295eaf2) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[43];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[44];
        tmp_or_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_3 = par_dbapi;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_4 = par_dbapi;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oo";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6be122a9b4d022f6b09a388e295eaf2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6be122a9b4d022f6b09a388e295eaf2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6be122a9b4d022f6b09a388e295eaf2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6be122a9b4d022f6b09a388e295eaf2,
        type_description_1,
        par_self,
        par_dbapi
    );


    // Release cached frame if used for exception.
    if (frame_f6be122a9b4d022f6b09a388e295eaf2 == cache_frame_f6be122a9b4d022f6b09a388e295eaf2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6be122a9b4d022f6b09a388e295eaf2);
        cache_frame_f6be122a9b4d022f6b09a388e295eaf2 = NULL;
    }

    assertFrameObject(frame_f6be122a9b4d022f6b09a388e295eaf2);

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
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__9_get_dbapi_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi = python_pars[1];
    struct Nuitka_FrameObject *frame_b4a8df20637fdb13060dcdabe95c1060;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4a8df20637fdb13060dcdabe95c1060 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4a8df20637fdb13060dcdabe95c1060)) {
        Py_XDECREF(cache_frame_b4a8df20637fdb13060dcdabe95c1060);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4a8df20637fdb13060dcdabe95c1060 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4a8df20637fdb13060dcdabe95c1060 = MAKE_FUNCTION_FRAME(codeobj_b4a8df20637fdb13060dcdabe95c1060, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4a8df20637fdb13060dcdabe95c1060->m_type_description == NULL);
    frame_b4a8df20637fdb13060dcdabe95c1060 = cache_frame_b4a8df20637fdb13060dcdabe95c1060;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4a8df20637fdb13060dcdabe95c1060);
    assert(Py_REFCNT(frame_b4a8df20637fdb13060dcdabe95c1060) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_1 = par_dbapi;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_b4a8df20637fdb13060dcdabe95c1060, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4a8df20637fdb13060dcdabe95c1060->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4a8df20637fdb13060dcdabe95c1060, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4a8df20637fdb13060dcdabe95c1060,
        type_description_1,
        par_self,
        par_dbapi
    );


    // Release cached frame if used for exception.
    if (frame_b4a8df20637fdb13060dcdabe95c1060 == cache_frame_b4a8df20637fdb13060dcdabe95c1060) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4a8df20637fdb13060dcdabe95c1060);
        cache_frame_b4a8df20637fdb13060dcdabe95c1060 = NULL;
    }

    assertFrameObject(frame_b4a8df20637fdb13060dcdabe95c1060);

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
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__10_get_dbapi_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi = python_pars[1];
    struct Nuitka_FrameObject *frame_6f37ffd3673f23a8a2b51d2255b1eaef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef)) {
        Py_XDECREF(cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef = MAKE_FUNCTION_FRAME(codeobj_6f37ffd3673f23a8a2b51d2255b1eaef, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef->m_type_description == NULL);
    frame_6f37ffd3673f23a8a2b51d2255b1eaef = cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f37ffd3673f23a8a2b51d2255b1eaef);
    assert(Py_REFCNT(frame_6f37ffd3673f23a8a2b51d2255b1eaef) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_1 = par_dbapi;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
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
        exception_tb = MAKE_TRACEBACK(frame_6f37ffd3673f23a8a2b51d2255b1eaef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f37ffd3673f23a8a2b51d2255b1eaef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f37ffd3673f23a8a2b51d2255b1eaef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f37ffd3673f23a8a2b51d2255b1eaef,
        type_description_1,
        par_self,
        par_dbapi
    );


    // Release cached frame if used for exception.
    if (frame_6f37ffd3673f23a8a2b51d2255b1eaef == cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef);
        cache_frame_6f37ffd3673f23a8a2b51d2255b1eaef = NULL;
    }

    assertFrameObject(frame_6f37ffd3673f23a8a2b51d2255b1eaef);

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
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__11_get_dbapi_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi = python_pars[1];
    struct Nuitka_FrameObject *frame_a0dd69517eb014e2bf9187536c2c92ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0dd69517eb014e2bf9187536c2c92ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0dd69517eb014e2bf9187536c2c92ee)) {
        Py_XDECREF(cache_frame_a0dd69517eb014e2bf9187536c2c92ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0dd69517eb014e2bf9187536c2c92ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0dd69517eb014e2bf9187536c2c92ee = MAKE_FUNCTION_FRAME(codeobj_a0dd69517eb014e2bf9187536c2c92ee, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0dd69517eb014e2bf9187536c2c92ee->m_type_description == NULL);
    frame_a0dd69517eb014e2bf9187536c2c92ee = cache_frame_a0dd69517eb014e2bf9187536c2c92ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0dd69517eb014e2bf9187536c2c92ee);
    assert(Py_REFCNT(frame_a0dd69517eb014e2bf9187536c2c92ee) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_dbapi);
        tmp_expression_value_1 = par_dbapi;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
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
        exception_tb = MAKE_TRACEBACK(frame_a0dd69517eb014e2bf9187536c2c92ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0dd69517eb014e2bf9187536c2c92ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0dd69517eb014e2bf9187536c2c92ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0dd69517eb014e2bf9187536c2c92ee,
        type_description_1,
        par_self,
        par_dbapi
    );


    // Release cached frame if used for exception.
    if (frame_a0dd69517eb014e2bf9187536c2c92ee == cache_frame_a0dd69517eb014e2bf9187536c2c92ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0dd69517eb014e2bf9187536c2c92ee);
        cache_frame_a0dd69517eb014e2bf9187536c2c92ee = NULL;
    }

    assertFrameObject(frame_a0dd69517eb014e2bf9187536c2c92ee);

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
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi);
    Py_DECREF(par_dbapi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__12_pre_exec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_183420fb96c7127ccdd873a4d4c98070;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_183420fb96c7127ccdd873a4d4c98070 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_183420fb96c7127ccdd873a4d4c98070)) {
        Py_XDECREF(cache_frame_183420fb96c7127ccdd873a4d4c98070);

#if _DEBUG_REFCOUNTS
        if (cache_frame_183420fb96c7127ccdd873a4d4c98070 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_183420fb96c7127ccdd873a4d4c98070 = MAKE_FUNCTION_FRAME(codeobj_183420fb96c7127ccdd873a4d4c98070, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_183420fb96c7127ccdd873a4d4c98070->m_type_description == NULL);
    frame_183420fb96c7127ccdd873a4d4c98070 = cache_frame_183420fb96c7127ccdd873a4d4c98070;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_183420fb96c7127ccdd873a4d4c98070);
    assert(Py_REFCNT(frame_183420fb96c7127ccdd873a4d4c98070) == 2);

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

            exception_lineno = 576;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_183420fb96c7127ccdd873a4d4c98070->m_frame.f_lineno = 576;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 581;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oc";
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
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 582;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[50]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[10];
        tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_3 == -1));
        tmp_and_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[52]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[53];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_2 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oc";
            goto try_except_handler_1;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_183420fb96c7127ccdd873a4d4c98070, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_183420fb96c7127ccdd873a4d4c98070->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_183420fb96c7127ccdd873a4d4c98070, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_183420fb96c7127ccdd873a4d4c98070,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_183420fb96c7127ccdd873a4d4c98070 == cache_frame_183420fb96c7127ccdd873a4d4c98070) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_183420fb96c7127ccdd873a4d4c98070);
        cache_frame_183420fb96c7127ccdd873a4d4c98070 = NULL;
    }

    assertFrameObject(frame_183420fb96c7127ccdd873a4d4c98070);

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


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__13_post_exec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_row = NULL;
    struct Nuitka_FrameObject *frame_d62bb8a99dbe07ac8149e3ca7d1282da;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da)) {
        Py_XDECREF(cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da = MAKE_FUNCTION_FRAME(codeobj_d62bb8a99dbe07ac8149e3ca7d1282da, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_type_description == NULL);
    frame_d62bb8a99dbe07ac8149e3ca7d1282da = cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d62bb8a99dbe07ac8149e3ca7d1282da);
    assert(Py_REFCNT(frame_d62bb8a99dbe07ac8149e3ca7d1282da) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 590;
            type_description_1 = "ooc";
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
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_frame.f_lineno = 598;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[10];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        assert(var_row == NULL);
        var_row = tmp_assign_source_1;
    }
    goto loop_end_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d62bb8a99dbe07ac8149e3ca7d1282da, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d62bb8a99dbe07ac8149e3ca7d1282da, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[57]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 603;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[55]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_frame.f_lineno = 603;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[58]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 595;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_frame) frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooc";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 594;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_row);
        tmp_expression_value_8 = var_row;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 607;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_3 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_frame.f_lineno = 607;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[60]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d62bb8a99dbe07ac8149e3ca7d1282da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d62bb8a99dbe07ac8149e3ca7d1282da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d62bb8a99dbe07ac8149e3ca7d1282da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d62bb8a99dbe07ac8149e3ca7d1282da,
        type_description_1,
        par_self,
        var_row,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d62bb8a99dbe07ac8149e3ca7d1282da == cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da);
        cache_frame_d62bb8a99dbe07ac8149e3ca7d1282da = NULL;
    }

    assertFrameObject(frame_d62bb8a99dbe07ac8149e3ca7d1282da);

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
    Py_XDECREF(var_row);
    var_row = NULL;
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

    Py_XDECREF(var_row);
    var_row = NULL;
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


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__14___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fast_executemany = python_pars[1];
    PyObject *par_use_setinputsizes = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_a89d17675abc85d1703b8ee1641e7515;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a89d17675abc85d1703b8ee1641e7515 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a89d17675abc85d1703b8ee1641e7515)) {
        Py_XDECREF(cache_frame_a89d17675abc85d1703b8ee1641e7515);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a89d17675abc85d1703b8ee1641e7515 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a89d17675abc85d1703b8ee1641e7515 = MAKE_FUNCTION_FRAME(codeobj_a89d17675abc85d1703b8ee1641e7515, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a89d17675abc85d1703b8ee1641e7515->m_type_description == NULL);
    frame_a89d17675abc85d1703b8ee1641e7515 = cache_frame_a89d17675abc85d1703b8ee1641e7515;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a89d17675abc85d1703b8ee1641e7515);
    assert(Py_REFCNT(frame_a89d17675abc85d1703b8ee1641e7515) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 653;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[62];
        CHECK_OBJECT(par_use_setinputsizes);
        tmp_dict_value_1 = par_use_setinputsizes;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_params);
        tmp_dircall_arg3_1 = par_params;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 655;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_and_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 656;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[63]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[58];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_4, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_2);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_assattr_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assattr_value_1 = tmp_and_left_value_1;
        and_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_and_left_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 659;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a89d17675abc85d1703b8ee1641e7515->m_frame.f_lineno = 659;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[64]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[65];
        tmp_and_right_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_assattr_value_2 = tmp_and_left_value_3;
        and_end_3:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_fast_executemany);
        tmp_assattr_value_3 = par_fast_executemany;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[66], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a89d17675abc85d1703b8ee1641e7515, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a89d17675abc85d1703b8ee1641e7515->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a89d17675abc85d1703b8ee1641e7515, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a89d17675abc85d1703b8ee1641e7515,
        type_description_1,
        par_self,
        par_fast_executemany,
        par_use_setinputsizes,
        par_params,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a89d17675abc85d1703b8ee1641e7515 == cache_frame_a89d17675abc85d1703b8ee1641e7515) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a89d17675abc85d1703b8ee1641e7515);
        cache_frame_a89d17675abc85d1703b8ee1641e7515 = NULL;
    }

    assertFrameObject(frame_a89d17675abc85d1703b8ee1641e7515);

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
    CHECK_OBJECT(par_fast_executemany);
    Py_DECREF(par_fast_executemany);
    CHECK_OBJECT(par_use_setinputsizes);
    Py_DECREF(par_use_setinputsizes);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fast_executemany);
    Py_DECREF(par_fast_executemany);
    CHECK_OBJECT(par_use_setinputsizes);
    Py_DECREF(par_use_setinputsizes);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__15__get_server_version_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *var_raw = NULL;
    PyObject *var_version = NULL;
    PyObject *var_r = NULL;
    PyObject *var_n = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3cb727e7816a346da57d418986b311ab;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_3cb727e7816a346da57d418986b311ab = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3cb727e7816a346da57d418986b311ab)) {
        Py_XDECREF(cache_frame_3cb727e7816a346da57d418986b311ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cb727e7816a346da57d418986b311ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cb727e7816a346da57d418986b311ab = MAKE_FUNCTION_FRAME(codeobj_3cb727e7816a346da57d418986b311ab, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3cb727e7816a346da57d418986b311ab->m_type_description == NULL);
    frame_3cb727e7816a346da57d418986b311ab = cache_frame_3cb727e7816a346da57d418986b311ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3cb727e7816a346da57d418986b311ab);
    assert(Py_REFCNT(frame_3cb727e7816a346da57d418986b311ab) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_connection);
        tmp_called_instance_2 = par_connection;
        frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = 670;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[67],
            PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = 670;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[69]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert(var_raw == NULL);
        var_raw = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3cb727e7816a346da57d418986b311ab, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3cb727e7816a346da57d418986b311ab, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 677;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_3 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_connection);
        tmp_args_element_value_1 = par_connection;
        frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = 677;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[72], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 667;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3cb727e7816a346da57d418986b311ab->m_frame) frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooc";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_version == NULL);
        var_version = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = 680;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[73],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_r);
        tmp_expression_value_2 = var_r;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_raw);
        tmp_args_element_value_2 = var_raw;
        frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = 681;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ooooooc";
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
                type_description_1 = "ooooooc";
                exception_lineno = 681;
                goto try_except_handler_4;
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
            PyObject *old = var_n;
            var_n = tmp_assign_source_6;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_int_arg_1;
        if (var_version == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 683;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_3 = var_version;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_n);
        tmp_int_arg_1 = var_n;
        tmp_args_element_value_3 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 683;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }
        frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = 683;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "ooooooc";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_3cb727e7816a346da57d418986b311ab, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_3cb727e7816a346da57d418986b311ab, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
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
        exception_lineno = 682;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3cb727e7816a346da57d418986b311ab->m_frame) frame_3cb727e7816a346da57d418986b311ab->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooc";
    goto try_except_handler_6;
    branch_no_2:;
    goto try_end_3;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 681;
        type_description_1 = "ooooooc";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
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
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_arg_1;
        if (var_version == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 686;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_1 = var_version;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "ooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_3cb727e7816a346da57d418986b311ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cb727e7816a346da57d418986b311ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cb727e7816a346da57d418986b311ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cb727e7816a346da57d418986b311ab,
        type_description_1,
        par_self,
        par_connection,
        var_raw,
        var_version,
        var_r,
        var_n,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3cb727e7816a346da57d418986b311ab == cache_frame_3cb727e7816a346da57d418986b311ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3cb727e7816a346da57d418986b311ab);
        cache_frame_3cb727e7816a346da57d418986b311ab = NULL;
    }

    assertFrameObject(frame_3cb727e7816a346da57d418986b311ab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_raw);
    var_raw = NULL;
    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
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

    Py_XDECREF(var_raw);
    var_raw = NULL;
    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *var_super_ = Nuitka_Cell_Empty();
    PyObject *var_on_connect = NULL;
    struct Nuitka_FrameObject *frame_e2befce8beaf3169219ce437288cd632;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e2befce8beaf3169219ce437288cd632 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e2befce8beaf3169219ce437288cd632)) {
        Py_XDECREF(cache_frame_e2befce8beaf3169219ce437288cd632);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2befce8beaf3169219ce437288cd632 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2befce8beaf3169219ce437288cd632 = MAKE_FUNCTION_FRAME(codeobj_e2befce8beaf3169219ce437288cd632, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2befce8beaf3169219ce437288cd632->m_type_description == NULL);
    frame_e2befce8beaf3169219ce437288cd632 = cache_frame_e2befce8beaf3169219ce437288cd632;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e2befce8beaf3169219ce437288cd632);
    assert(Py_REFCNT(frame_e2befce8beaf3169219ce437288cd632) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 689;
            type_description_1 = "ccoc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_object_arg_value_1 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ccoc";
            goto frame_exception_exit_1;
        }
        frame_e2befce8beaf3169219ce437288cd632->m_frame.f_lineno = 689;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[78]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ccoc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_super_) == NULL);
        PyCell_SET(var_super_, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e2befce8beaf3169219ce437288cd632, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2befce8beaf3169219ce437288cd632->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2befce8beaf3169219ce437288cd632, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2befce8beaf3169219ce437288cd632,
        type_description_1,
        par_self,
        var_super_,
        var_on_connect,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e2befce8beaf3169219ce437288cd632 == cache_frame_e2befce8beaf3169219ce437288cd632) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2befce8beaf3169219ce437288cd632);
        cache_frame_e2befce8beaf3169219ce437288cd632 = NULL;
    }

    assertFrameObject(frame_e2befce8beaf3169219ce437288cd632);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_super_;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect$$$function__1_on_connect(tmp_closure_1);

        assert(var_on_connect == NULL);
        var_on_connect = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_on_connect);
    tmp_return_value = var_on_connect;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_super_);
    Py_DECREF(var_super_);
    var_super_ = NULL;
    CHECK_OBJECT(var_on_connect);
    Py_DECREF(var_on_connect);
    var_on_connect = NULL;
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


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect$$$function__1_on_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_conn = python_pars[0];
    struct Nuitka_FrameObject *frame_c13e909c3abf399fd252022faa8254a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c13e909c3abf399fd252022faa8254a2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c13e909c3abf399fd252022faa8254a2)) {
        Py_XDECREF(cache_frame_c13e909c3abf399fd252022faa8254a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c13e909c3abf399fd252022faa8254a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c13e909c3abf399fd252022faa8254a2 = MAKE_FUNCTION_FRAME(codeobj_c13e909c3abf399fd252022faa8254a2, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c13e909c3abf399fd252022faa8254a2->m_type_description == NULL);
    frame_c13e909c3abf399fd252022faa8254a2 = cache_frame_c13e909c3abf399fd252022faa8254a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c13e909c3abf399fd252022faa8254a2);
    assert(Py_REFCNT(frame_c13e909c3abf399fd252022faa8254a2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 692;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[1]);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 693;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_conn);
        tmp_args_element_value_1 = par_conn;
        frame_c13e909c3abf399fd252022faa8254a2->m_frame.f_lineno = 693;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 693;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 695;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (par_conn == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 695;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_conn;
        frame_c13e909c3abf399fd252022faa8254a2->m_frame.f_lineno = 695;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c13e909c3abf399fd252022faa8254a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c13e909c3abf399fd252022faa8254a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c13e909c3abf399fd252022faa8254a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c13e909c3abf399fd252022faa8254a2,
        type_description_1,
        par_conn,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c13e909c3abf399fd252022faa8254a2 == cache_frame_c13e909c3abf399fd252022faa8254a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c13e909c3abf399fd252022faa8254a2);
        cache_frame_c13e909c3abf399fd252022faa8254a2 = NULL;
    }

    assertFrameObject(frame_c13e909c3abf399fd252022faa8254a2);

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
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *var__handle_datetimeoffset = NULL;
    struct Nuitka_FrameObject *frame_18838596e6a6a157705152293b0c6254;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18838596e6a6a157705152293b0c6254 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type$$$function__1__handle_datetimeoffset();

        assert(var__handle_datetimeoffset == NULL);
        var__handle_datetimeoffset = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_18838596e6a6a157705152293b0c6254)) {
        Py_XDECREF(cache_frame_18838596e6a6a157705152293b0c6254);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18838596e6a6a157705152293b0c6254 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18838596e6a6a157705152293b0c6254 = MAKE_FUNCTION_FRAME(codeobj_18838596e6a6a157705152293b0c6254, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18838596e6a6a157705152293b0c6254->m_type_description == NULL);
    frame_18838596e6a6a157705152293b0c6254 = cache_frame_18838596e6a6a157705152293b0c6254;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18838596e6a6a157705152293b0c6254);
    assert(Py_REFCNT(frame_18838596e6a6a157705152293b0c6254) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_connection);
        tmp_called_instance_1 = par_connection;
        tmp_args_element_value_1 = mod_consts[86];
        CHECK_OBJECT(var__handle_datetimeoffset);
        tmp_args_element_value_2 = var__handle_datetimeoffset;
        frame_18838596e6a6a157705152293b0c6254->m_frame.f_lineno = 717;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[85],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18838596e6a6a157705152293b0c6254, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18838596e6a6a157705152293b0c6254->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18838596e6a6a157705152293b0c6254, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18838596e6a6a157705152293b0c6254,
        type_description_1,
        par_self,
        par_connection,
        var__handle_datetimeoffset,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_18838596e6a6a157705152293b0c6254 == cache_frame_18838596e6a6a157705152293b0c6254) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18838596e6a6a157705152293b0c6254);
        cache_frame_18838596e6a6a157705152293b0c6254 = NULL;
    }

    assertFrameObject(frame_18838596e6a6a157705152293b0c6254);

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
    CHECK_OBJECT(var__handle_datetimeoffset);
    Py_DECREF(var__handle_datetimeoffset);
    var__handle_datetimeoffset = NULL;
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

    Py_XDECREF(var__handle_datetimeoffset);
    var__handle_datetimeoffset = NULL;
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
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type$$$function__1__handle_datetimeoffset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dto_value = python_pars[0];
    PyObject *var_tup = NULL;
    struct Nuitka_FrameObject *frame_f26191b1c1ed58d999f4563aa488b6dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f26191b1c1ed58d999f4563aa488b6dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f26191b1c1ed58d999f4563aa488b6dc)) {
        Py_XDECREF(cache_frame_f26191b1c1ed58d999f4563aa488b6dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f26191b1c1ed58d999f4563aa488b6dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f26191b1c1ed58d999f4563aa488b6dc = MAKE_FUNCTION_FRAME(codeobj_f26191b1c1ed58d999f4563aa488b6dc, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f26191b1c1ed58d999f4563aa488b6dc->m_type_description == NULL);
    frame_f26191b1c1ed58d999f4563aa488b6dc = cache_frame_f26191b1c1ed58d999f4563aa488b6dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f26191b1c1ed58d999f4563aa488b6dc);
    assert(Py_REFCNT(frame_f26191b1c1ed58d999f4563aa488b6dc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[89];
        CHECK_OBJECT(par_dto_value);
        tmp_args_element_value_2 = par_dto_value;
        frame_f26191b1c1ed58d999f4563aa488b6dc->m_frame.f_lineno = 702;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[88],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_tup == NULL);
        var_tup = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_2 = var_tup;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 704;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_3 = var_tup;
        tmp_subscript_value_2 = mod_consts[20];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 705;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_4 = var_tup;
        tmp_subscript_value_3 = mod_consts[91];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 706;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_5 = var_tup;
        tmp_subscript_value_4 = mod_consts[92];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_4, 3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 707;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_6 = var_tup;
        tmp_subscript_value_5 = mod_consts[93];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_5, 4);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 708;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_7 = var_tup;
        tmp_subscript_value_6 = mod_consts[94];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_6, 5);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 709;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_8 = var_tup;
        tmp_subscript_value_7 = mod_consts[95];
        tmp_floordiv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_7, 6);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 710;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[96];
        tmp_args_element_value_9 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 710;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 711;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[34]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 711;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 712;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[97]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 712;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_11 = var_tup;
        tmp_subscript_value_8 = mod_consts[12];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_8, 7);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 712;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tup);
        tmp_expression_value_12 = var_tup;
        tmp_subscript_value_9 = mod_consts[98];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_9, 8);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 712;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f26191b1c1ed58d999f4563aa488b6dc->m_frame.f_lineno = 712;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_args_element_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[99]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 712;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f26191b1c1ed58d999f4563aa488b6dc->m_frame.f_lineno = 711;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 711;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f26191b1c1ed58d999f4563aa488b6dc->m_frame.f_lineno = 703;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
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
        exception_tb = MAKE_TRACEBACK(frame_f26191b1c1ed58d999f4563aa488b6dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f26191b1c1ed58d999f4563aa488b6dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f26191b1c1ed58d999f4563aa488b6dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f26191b1c1ed58d999f4563aa488b6dc,
        type_description_1,
        par_dto_value,
        var_tup
    );


    // Release cached frame if used for exception.
    if (frame_f26191b1c1ed58d999f4563aa488b6dc == cache_frame_f26191b1c1ed58d999f4563aa488b6dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f26191b1c1ed58d999f4563aa488b6dc);
        cache_frame_f26191b1c1ed58d999f4563aa488b6dc = NULL;
    }

    assertFrameObject(frame_f26191b1c1ed58d999f4563aa488b6dc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_tup);
    Py_DECREF(var_tup);
    var_tup = NULL;
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

    Py_XDECREF(var_tup);
    var_tup = NULL;
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
    CHECK_OBJECT(par_dto_value);
    Py_DECREF(par_dto_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dto_value);
    Py_DECREF(par_dto_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__18_do_executemany(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_6f835b122170006a9fd7b08db67f9f60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6f835b122170006a9fd7b08db67f9f60 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f835b122170006a9fd7b08db67f9f60)) {
        Py_XDECREF(cache_frame_6f835b122170006a9fd7b08db67f9f60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f835b122170006a9fd7b08db67f9f60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f835b122170006a9fd7b08db67f9f60 = MAKE_FUNCTION_FRAME(codeobj_6f835b122170006a9fd7b08db67f9f60, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f835b122170006a9fd7b08db67f9f60->m_type_description == NULL);
    frame_6f835b122170006a9fd7b08db67f9f60 = cache_frame_6f835b122170006a9fd7b08db67f9f60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f835b122170006a9fd7b08db67f9f60);
    assert(Py_REFCNT(frame_6f835b122170006a9fd7b08db67f9f60) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 722;
            type_description_1 = "oooooc";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_cursor);
        tmp_assattr_target_1 = par_cursor;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 724;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_2 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[100]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_cursor == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 724;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_cursor;
        CHECK_OBJECT(par_statement);
        tmp_kw_call_arg_value_1_1 = par_statement;
        CHECK_OBJECT(par_parameters);
        tmp_kw_call_arg_value_2_1 = par_parameters;
        CHECK_OBJECT(par_context);
        tmp_kw_call_dict_value_0_1 = par_context;
        frame_6f835b122170006a9fd7b08db67f9f60->m_frame.f_lineno = 724;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[101]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
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
        exception_tb = MAKE_TRACEBACK(frame_6f835b122170006a9fd7b08db67f9f60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f835b122170006a9fd7b08db67f9f60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f835b122170006a9fd7b08db67f9f60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f835b122170006a9fd7b08db67f9f60,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6f835b122170006a9fd7b08db67f9f60 == cache_frame_6f835b122170006a9fd7b08db67f9f60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f835b122170006a9fd7b08db67f9f60);
        cache_frame_6f835b122170006a9fd7b08db67f9f60 = NULL;
    }

    assertFrameObject(frame_6f835b122170006a9fd7b08db67f9f60);

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
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$pyodbc$$$function__19_is_disconnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *par_connection = python_pars[2];
    PyObject *par_cursor = python_pars[3];
    PyObject *var_code = NULL;
    struct Nuitka_FrameObject *frame_779dcca4d588da243365dcd19229848a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_779dcca4d588da243365dcd19229848a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_779dcca4d588da243365dcd19229848a)) {
        Py_XDECREF(cache_frame_779dcca4d588da243365dcd19229848a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_779dcca4d588da243365dcd19229848a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_779dcca4d588da243365dcd19229848a = MAKE_FUNCTION_FRAME(codeobj_779dcca4d588da243365dcd19229848a, module_sqlalchemy$dialects$mssql$pyodbc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_779dcca4d588da243365dcd19229848a->m_type_description == NULL);
    frame_779dcca4d588da243365dcd19229848a = cache_frame_779dcca4d588da243365dcd19229848a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_779dcca4d588da243365dcd19229848a);
    assert(Py_REFCNT(frame_779dcca4d588da243365dcd19229848a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_e);
        tmp_isinstance_inst_1 = par_e;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[57]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "oooooc";
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_e);
        tmp_expression_value_4 = par_e;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[102]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[10];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_code == NULL);
        var_code = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_1 = var_code;
        tmp_cmp_expr_right_1 = PySet_New(mod_consts[103]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 729;
            type_description_1 = "oooooc";
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 742;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_5 = BUILTIN_SUPER0(moduledict_sqlalchemy$dialects$mssql$pyodbc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[104]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_e == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 742;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_e;
        CHECK_OBJECT(par_connection);
        tmp_args_element_value_2 = par_connection;
        CHECK_OBJECT(par_cursor);
        tmp_args_element_value_3 = par_cursor;
        frame_779dcca4d588da243365dcd19229848a->m_frame.f_lineno = 742;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
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
        exception_tb = MAKE_TRACEBACK(frame_779dcca4d588da243365dcd19229848a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_779dcca4d588da243365dcd19229848a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_779dcca4d588da243365dcd19229848a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_779dcca4d588da243365dcd19229848a,
        type_description_1,
        par_self,
        par_e,
        par_connection,
        par_cursor,
        var_code,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_779dcca4d588da243365dcd19229848a == cache_frame_779dcca4d588da243365dcd19229848a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_779dcca4d588da243365dcd19229848a);
        cache_frame_779dcca4d588da243365dcd19229848a = NULL;
    }

    assertFrameObject(frame_779dcca4d588da243365dcd19229848a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_code);
    var_code = NULL;
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

    Py_XDECREF(var_code);
    var_code = NULL;
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
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__10_get_dbapi_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__10_get_dbapi_type,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_6f37ffd3673f23a8a2b51d2255b1eaef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__11_get_dbapi_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__11_get_dbapi_type,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_a0dd69517eb014e2bf9187536c2c92ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__12_pre_exec(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__12_pre_exec,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_183420fb96c7127ccdd873a4d4c98070,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        mod_consts[54],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__13_post_exec(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__13_post_exec,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_d62bb8a99dbe07ac8149e3ca7d1282da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__14___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__14___init__,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_a89d17675abc85d1703b8ee1641e7515,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__15__get_server_version_info(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__15__get_server_version_info,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_3cb727e7816a346da57d418986b311ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_e2befce8beaf3169219ce437288cd632,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect$$$function__1_on_connect(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect$$$function__1_on_connect,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_c13e909c3abf399fd252022faa8254a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_18838596e6a6a157705152293b0c6254,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type$$$function__1__handle_datetimeoffset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type$$$function__1__handle_datetimeoffset,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_f26191b1c1ed58d999f4563aa488b6dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__18_do_executemany(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__18_do_executemany,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_6f835b122170006a9fd7b08db67f9f60,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__19_is_disconnect(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__19_is_disconnect,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_779dcca4d588da243365dcd19229848a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_48fff596f918f10cdd2e33a07de67b0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor$$$function__1_process,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_0298e5094182d474d14d6cc377e39040,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__2__small_dec_to_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__2__small_dec_to_string,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_02a6f07b3517e6d2319e366ae33d253e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__3__large_dec_to_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__3__large_dec_to_string,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_d716ddfb38bd975e94932cdd2fecfcda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_0d99916da7d3ebd11d514589559fb1d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor$$$function__1_process,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_d7db7f6a4472435f81207bc83fb2bc6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_2da1d423a531c13c9b8662afe9c32309,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor$$$function__1_process,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_0d2e637cf4516671bb1c2d05ee7fae27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__6_get_dbapi_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__6_get_dbapi_type,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_f40f4605c87e671c515d797c44b887f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__7_get_dbapi_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__7_get_dbapi_type,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_8256c776c7bdefbb50e4a4db7466fed9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__8_get_dbapi_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__8_get_dbapi_type,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_f6be122a9b4d022f6b09a388e295eaf2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__9_get_dbapi_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$pyodbc$$$function__9_get_dbapi_type,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_b4a8df20637fdb13060dcdabe95c1060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$pyodbc,
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

function_impl_code functable_sqlalchemy$dialects$mssql$pyodbc[] = {
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor$$$function__1_process,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor$$$function__1_process,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor$$$function__1_process,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect$$$function__1_on_connect,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type$$$function__1__handle_datetimeoffset,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__2__small_dec_to_string,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__3__large_dec_to_string,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__6_get_dbapi_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__7_get_dbapi_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__8_get_dbapi_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__9_get_dbapi_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__10_get_dbapi_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__11_get_dbapi_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__12_pre_exec,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__13_post_exec,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__14___init__,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__15__get_server_version_info,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__18_do_executemany,
    impl_sqlalchemy$dialects$mssql$pyodbc$$$function__19_is_disconnect,
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

    function_impl_code *current = functable_sqlalchemy$dialects$mssql$pyodbc;
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

    if (offset > sizeof(functable_sqlalchemy$dialects$mssql$pyodbc) || offset < 0) {
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
        functable_sqlalchemy$dialects$mssql$pyodbc[offset],
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
        module_sqlalchemy$dialects$mssql$pyodbc,
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
PyObject *modulecode_sqlalchemy$dialects$mssql$pyodbc(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.dialects.mssql.pyodbc");

    // Store the module for future use.
    module_sqlalchemy$dialects$mssql$pyodbc = module;

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
        PRINT_STRING("sqlalchemy.dialects.mssql.pyodbc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.dialects.mssql.pyodbc: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.dialects.mssql.pyodbc: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$dialects$mssql$pyodbc\n");

    moduledict_sqlalchemy$dialects$mssql$pyodbc = MODULE_DICT(module_sqlalchemy$dialects$mssql$pyodbc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$dialects$mssql$pyodbc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$mssql$pyodbc,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[18]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$mssql$pyodbc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$mssql$pyodbc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$mssql$pyodbc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$dialects$mssql$pyodbc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$dialects$mssql$pyodbc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
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
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    struct Nuitka_CellObject *outline_15_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_16_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
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
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
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
    struct Nuitka_FrameObject *frame_4ad1efbdd56e791d0d5f50954147cc9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509 = NULL;
    struct Nuitka_FrameObject *frame_75ca7bc1c3a5364506dccdbd523c644c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521 = NULL;
    struct Nuitka_FrameObject *frame_0185a7a378b6b5bcaebcb4f22219e1aa_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529 = NULL;
    struct Nuitka_FrameObject *frame_62d6ad312dfe590c12ffc2eb9d5206d1_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537 = NULL;
    struct Nuitka_FrameObject *frame_3b642780995e1194c40ba92b11d4ad22_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545 = NULL;
    struct Nuitka_FrameObject *frame_7a62cde69a71756f05205d16f8d915da_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550 = NULL;
    struct Nuitka_FrameObject *frame_6f743249e593ed5df4351ffa5a9b0d46_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555 = NULL;
    struct Nuitka_FrameObject *frame_34f8620c1b3860e50b8f12628e6ea4db_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560 = NULL;
    struct Nuitka_FrameObject *frame_fb48ee503eecc178de4eee720c58be8f_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610 = NULL;
    struct Nuitka_FrameObject *frame_36757635fb4a09d5876316184c98887f_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_2);
    }
    frame_4ad1efbdd56e791d0d5f50954147cc9a = MAKE_MODULE_FRAME(codeobj_4ad1efbdd56e791d0d5f50954147cc9a, module_sqlalchemy$dialects$mssql$pyodbc);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ad1efbdd56e791d0d5f50954147cc9a);
    assert(Py_REFCNT(frame_4ad1efbdd56e791d0d5f50954147cc9a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[110], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[111], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[90];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[10];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 357;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[7];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[10];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 358;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[10];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 359;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[87];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[10];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 360;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[113];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[114];
        tmp_level_value_5 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 362;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[115],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[113];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[116];
        tmp_level_value_6 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 363;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[117],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[117]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[113];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[118];
        tmp_level_value_7 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 364;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[119],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[113];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[120];
        tmp_level_value_8 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 365;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[121],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[113];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[122];
        tmp_level_value_9 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 366;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[123],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[113];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[124];
        tmp_level_value_10 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 367;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[125],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[125]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[113];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[126];
        tmp_level_value_11 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 368;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[127],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[113];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[128];
        tmp_level_value_12 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 369;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[129],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[129]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[130];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[131];
        tmp_level_value_13 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 370;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[132],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[132]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[130];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[134];
        tmp_level_value_14 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 371;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[135],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[130];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[137];
        tmp_level_value_15 = mod_consts[20];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 372;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[138],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[138]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[18];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[140];
        tmp_level_value_16 = mod_consts[92];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 373;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[70],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[18];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[141];
        tmp_level_value_17 = mod_consts[92];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 374;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[142],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[142]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[18];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[144];
        tmp_level_value_18 = mod_consts[92];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 375;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[145],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[146];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[147];
        tmp_level_value_19 = mod_consts[92];
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 376;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$pyodbc,
                mod_consts[148],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[148]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379, mod_consts[150], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379, mod_consts[107], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[152];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379, mod_consts[153], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__1_bind_processor(tmp_closure_1);

            tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__2__small_dec_to_string();

        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__3__large_dec_to_string();

        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379, mod_consts[13], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[152];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[157];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 379;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_26);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_25 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__1__ms_numeric_pyodbc_379 = NULL;
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
        exception_lineno = 379;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_25);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_2);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[158]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_27, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_27);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_2 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_3 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[159]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_4 = tmp_class_creation_2__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[159]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        tmp_tuple_element_3 = mod_consts[160];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 443;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_5 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[161]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[163];
        tmp_getattr_default_1 = mod_consts[164];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[163]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 443;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_6;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_3 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_5 = mod_consts[160];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 443;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_33 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__2__MSNumeric_pyodbc_443 = NULL;
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
        exception_lineno = 443;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_33);
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_6);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[166]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_35, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_35);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_8 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_9 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[159]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_10 = tmp_class_creation_3__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[159]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = mod_consts[167];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 447;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_11 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[161]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_2 = mod_consts[163];
        tmp_getattr_default_2 = mod_consts[164];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[163]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
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


            exception_lineno = 447;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 447;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_9;
        }
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


                exception_lineno = 447;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_5 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[167];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 447;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_41 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__3__MSFloat_pyodbc_447 = NULL;
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
        exception_lineno = 447;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_41);
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
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_44;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451, mod_consts[150], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451, mod_consts[107], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451, mod_consts[153], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__4_bind_processor();

        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_6 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[169];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[157];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 451;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_45 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__4__ms_binary_pyodbc_451 = NULL;
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
        exception_lineno = 451;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_45);
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
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474, mod_consts[150], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474, mod_consts[107], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474, mod_consts[153], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__5_bind_processor();

        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[172];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[157];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 474;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_49 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__5__ODBCDateTimeBindProcessor_474 = NULL;
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
        exception_lineno = 474;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_49);
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

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        assert(!(tmp_tuple_element_12 == NULL));
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_51, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_51);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_52 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_13 = tmp_class_creation_6__bases;
        tmp_subscript_value_3 = mod_consts[10];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_3 = tmp_class_creation_6__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_14 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[159]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_15 = tmp_class_creation_6__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[159]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        tmp_tuple_element_13 = mod_consts[174];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_13 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_6__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 505;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_16 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[161]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
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
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_3 = mod_consts[163];
        tmp_getattr_default_3 = mod_consts[164];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_6 = tmp_class_creation_6__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[163]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 505;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_56;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_18;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_18;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_9 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_15 = mod_consts[174];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_15 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_6__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 505;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_57 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__6__ODBCDateTime_505 = NULL;
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
        exception_lineno = 505;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_57);
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_59, 1, tmp_tuple_element_16);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_59);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_60 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_18 = tmp_class_creation_7__bases;
        tmp_subscript_value_4 = mod_consts[10];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_4 = tmp_class_creation_7__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_19 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[159]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_20 = tmp_class_creation_7__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[159]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        tmp_tuple_element_17 = mod_consts[175];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_17 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_7__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 509;
        tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_21 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[161]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
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
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_4 = mod_consts[163];
        tmp_getattr_default_4 = mod_consts[164];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_8 = tmp_class_creation_7__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[163]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 509;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_64;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[175];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_21;
        }
        frame_75ca7bc1c3a5364506dccdbd523c644c_2 = MAKE_CLASS_FRAME(codeobj_75ca7bc1c3a5364506dccdbd523c644c, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_75ca7bc1c3a5364506dccdbd523c644c_2);
        assert(Py_REFCNT(frame_75ca7bc1c3a5364506dccdbd523c644c_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_75ca7bc1c3a5364506dccdbd523c644c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_75ca7bc1c3a5364506dccdbd523c644c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_75ca7bc1c3a5364506dccdbd523c644c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_75ca7bc1c3a5364506dccdbd523c644c_2,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_75ca7bc1c3a5364506dccdbd523c644c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_21;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto try_except_handler_21;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_11 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_19 = mod_consts[175];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_19 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_7__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 509;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_65 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__7__ODBCDATETIMEOFFSET_509 = NULL;
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
        exception_lineno = 509;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_65);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        tmp_assign_source_67 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_20);
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_67, 1, tmp_tuple_element_20);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_67);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_68 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_23 = tmp_class_creation_8__bases;
        tmp_subscript_value_5 = mod_consts[10];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_5 = tmp_class_creation_8__bases;
        tmp_assign_source_70 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_24 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[159]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_12;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_25 = tmp_class_creation_8__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[159]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        tmp_tuple_element_21 = mod_consts[176];
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_21 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_12 = tmp_class_creation_8__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 513;
        tmp_assign_source_71 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_12);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_26 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[161]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
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
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_5 = mod_consts[163];
        tmp_getattr_default_5 = mod_consts[164];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_10 = tmp_class_creation_8__prepared;
            tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_27 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[163]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 513;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_72;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[176];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_24;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto try_except_handler_24;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_13 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_23 = mod_consts[176];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_23 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_8__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 513;
            tmp_assign_source_74 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_73 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__8__VARBINARY_pyodbc_513 = NULL;
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
        exception_lineno = 513;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_73);
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
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        tmp_assign_source_75 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_24);
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto tuple_build_exception_11;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_75, 1, tmp_tuple_element_24);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_assign_source_75);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_76 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_28 = tmp_class_creation_9__bases;
        tmp_subscript_value_6 = mod_consts[10];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_6 = tmp_class_creation_9__bases;
        tmp_assign_source_78 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_29 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[159]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_14;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_14;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_30 = tmp_class_creation_9__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[159]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        tmp_tuple_element_25 = mod_consts[177];
        tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_25 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_14 = tmp_class_creation_9__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 517;
        tmp_assign_source_79 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_14);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_31 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[161]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_6 = mod_consts[163];
        tmp_getattr_default_6 = mod_consts[164];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_12 = tmp_class_creation_9__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[163]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 517;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_80;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[177];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_27;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto try_except_handler_27;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_15 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_27 = mod_consts[177];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_27 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_15 = tmp_class_creation_9__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 517;
            tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_81 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__9__BINARY_pyodbc_517 = NULL;
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
        exception_lineno = 517;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_81);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[178]);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_83, 0, tmp_tuple_element_28);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_84 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_34 = tmp_class_creation_10__bases;
        tmp_subscript_value_7 = mod_consts[10];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_34, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_7 = tmp_class_creation_10__bases;
        tmp_assign_source_86 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_86;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_35 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[159]);
        tmp_condition_result_26 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_value_16;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_value_16;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_36 = tmp_class_creation_10__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[159]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_tuple_element_29 = mod_consts[179];
        tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_29 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_16 = tmp_class_creation_10__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 521;
        tmp_assign_source_87 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_16);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_37 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[161]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_7 = mod_consts[163];
        tmp_getattr_default_7 = mod_consts[164];
        tmp_tuple_element_30 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_14 = tmp_class_creation_10__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[163]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 521;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_88;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[179];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_30;
        }
        frame_0185a7a378b6b5bcaebcb4f22219e1aa_3 = MAKE_CLASS_FRAME(codeobj_0185a7a378b6b5bcaebcb4f22219e1aa, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0185a7a378b6b5bcaebcb4f22219e1aa_3);
        assert(Py_REFCNT(frame_0185a7a378b6b5bcaebcb4f22219e1aa_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__6_get_dbapi_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0185a7a378b6b5bcaebcb4f22219e1aa_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0185a7a378b6b5bcaebcb4f22219e1aa_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0185a7a378b6b5bcaebcb4f22219e1aa_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0185a7a378b6b5bcaebcb4f22219e1aa_3,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_0185a7a378b6b5bcaebcb4f22219e1aa_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_30;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_30;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_17 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_31 = mod_consts[179];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_31 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_17 = tmp_class_creation_10__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 521;
            tmp_assign_source_90 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_90;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_89 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_89);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__10__String_pyodbc_521 = NULL;
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
        exception_lineno = 521;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_89);
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
        PyObject *tmp_assign_source_91;
        PyObject *tmp_tuple_element_32;
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        tmp_assign_source_91 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_91, 0, tmp_tuple_element_32);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_92 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_39 = tmp_class_creation_11__bases;
        tmp_subscript_value_8 = mod_consts[10];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_39, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_8 = tmp_class_creation_11__bases;
        tmp_assign_source_94 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_94;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_40 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_40, mod_consts[159]);
        tmp_condition_result_30 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_18;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_18;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_41 = tmp_class_creation_11__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[159]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        tmp_tuple_element_33 = mod_consts[182];
        tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_33 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_18 = tmp_class_creation_11__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 529;
        tmp_assign_source_95 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_18);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_95;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_42 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[161]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_8 = mod_consts[163];
        tmp_getattr_default_8 = mod_consts[164];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_16 = tmp_class_creation_11__prepared;
            tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_43 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[163]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 529;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_96;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_97;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_33;
        }
        frame_62d6ad312dfe590c12ffc2eb9d5206d1_4 = MAKE_CLASS_FRAME(codeobj_62d6ad312dfe590c12ffc2eb9d5206d1, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_62d6ad312dfe590c12ffc2eb9d5206d1_4);
        assert(Py_REFCNT(frame_62d6ad312dfe590c12ffc2eb9d5206d1_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__7_get_dbapi_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_62d6ad312dfe590c12ffc2eb9d5206d1_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_62d6ad312dfe590c12ffc2eb9d5206d1_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_62d6ad312dfe590c12ffc2eb9d5206d1_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_62d6ad312dfe590c12ffc2eb9d5206d1_4,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_62d6ad312dfe590c12ffc2eb9d5206d1_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_33;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_33;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_19 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_35 = mod_consts[182];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_35 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_11__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 529;
            tmp_assign_source_98 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_98;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_97 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_97);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__11__Unicode_pyodbc_529 = NULL;
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
        exception_lineno = 529;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_97);
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
        PyObject *tmp_assign_source_99;
        PyObject *tmp_tuple_element_36;
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_36 == NULL)) {
            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        tmp_assign_source_99 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_36);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_100 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_44 = tmp_class_creation_12__bases;
        tmp_subscript_value_9 = mod_consts[10];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_44, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_9 = tmp_class_creation_12__bases;
        tmp_assign_source_102 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_102;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_45 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_45, mod_consts[159]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_value_20;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_20;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_46 = tmp_class_creation_12__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[159]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        tmp_tuple_element_37 = mod_consts[184];
        tmp_args_value_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_37 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_20 = tmp_class_creation_12__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 537;
        tmp_assign_source_103 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_20);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_103;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_47 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_47, mod_consts[161]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_9 = mod_consts[163];
        tmp_getattr_default_9 = mod_consts[164];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_18 = tmp_class_creation_12__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[163]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 537;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_104;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_105;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_36;
        }
        frame_3b642780995e1194c40ba92b11d4ad22_5 = MAKE_CLASS_FRAME(codeobj_3b642780995e1194c40ba92b11d4ad22, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3b642780995e1194c40ba92b11d4ad22_5);
        assert(Py_REFCNT(frame_3b642780995e1194c40ba92b11d4ad22_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__8_get_dbapi_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3b642780995e1194c40ba92b11d4ad22_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3b642780995e1194c40ba92b11d4ad22_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3b642780995e1194c40ba92b11d4ad22_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3b642780995e1194c40ba92b11d4ad22_5,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_3b642780995e1194c40ba92b11d4ad22_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_36;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto try_except_handler_36;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_36;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_21 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_39 = mod_consts[184];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_39 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537;
            PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_21 = tmp_class_creation_12__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 537;
            tmp_assign_source_106 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto try_except_handler_36;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_106;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_105 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_105);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__12__UnicodeText_pyodbc_537 = NULL;
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
        exception_lineno = 537;
        goto try_except_handler_34;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_105);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_tuple_element_40;
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_tuple_element_40 == NULL)) {
            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_tuple_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        tmp_assign_source_107 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_107, 0, tmp_tuple_element_40);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_108 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_49 = tmp_class_creation_13__bases;
        tmp_subscript_value_10 = mod_consts[10];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_49, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_10 = tmp_class_creation_13__bases;
        tmp_assign_source_110 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_110;
    }
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_50 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_50, mod_consts[159]);
        tmp_condition_result_38 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_22;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_kwargs_value_22;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_51 = tmp_class_creation_13__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[159]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        tmp_tuple_element_41 = mod_consts[186];
        tmp_args_value_22 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_41 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_22 = tmp_class_creation_13__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 545;
        tmp_assign_source_111 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_22, tmp_kwargs_value_22);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_22);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_52 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_52, mod_consts[161]);
        tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_10 = mod_consts[163];
        tmp_getattr_default_10 = mod_consts[164];
        tmp_tuple_element_42 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_20 = tmp_class_creation_13__prepared;
            tmp_expression_value_53 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_53 == NULL));
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[163]);
            Py_DECREF(tmp_expression_value_53);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_37;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 545;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_37;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_112;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[186];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_39;
        }
        frame_7a62cde69a71756f05205d16f8d915da_6 = MAKE_CLASS_FRAME(codeobj_7a62cde69a71756f05205d16f8d915da, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7a62cde69a71756f05205d16f8d915da_6);
        assert(Py_REFCNT(frame_7a62cde69a71756f05205d16f8d915da_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__9_get_dbapi_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7a62cde69a71756f05205d16f8d915da_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7a62cde69a71756f05205d16f8d915da_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7a62cde69a71756f05205d16f8d915da_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7a62cde69a71756f05205d16f8d915da_6,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_7a62cde69a71756f05205d16f8d915da_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_39;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto try_except_handler_39;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto try_except_handler_39;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_23;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_23 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_43 = mod_consts[186];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_43 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545;
            PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_23 = tmp_class_creation_13__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 545;
            tmp_assign_source_114 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto try_except_handler_39;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_114;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_113 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_113);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__13__JSON_pyodbc_545 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 545;
        goto try_except_handler_37;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_113);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_tuple_element_44;
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_tuple_element_44 == NULL)) {
            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_tuple_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        tmp_assign_source_115 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_44);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_116 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_54 = tmp_class_creation_14__bases;
        tmp_subscript_value_11 = mod_consts[10];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_54, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_11 = tmp_class_creation_14__bases;
        tmp_assign_source_118 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_118;
    }
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_55 = tmp_class_creation_14__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_55, mod_consts[159]);
        tmp_condition_result_42 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_value_24;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_kwargs_value_24;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_56 = tmp_class_creation_14__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[159]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        tmp_tuple_element_45 = mod_consts[188];
        tmp_args_value_24 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_45 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_24 = tmp_class_creation_14__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 550;
        tmp_assign_source_119 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_24, tmp_kwargs_value_24);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_24);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_119;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_57 = tmp_class_creation_14__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[161]);
        tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_14__metaclass;
        tmp_getattr_attr_11 = mod_consts[163];
        tmp_getattr_default_11 = mod_consts[164];
        tmp_tuple_element_46 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_22 = tmp_class_creation_14__prepared;
            tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_58 == NULL));
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[163]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_40;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 550;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_40;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_120;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_121;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[188];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_42;
        }
        frame_6f743249e593ed5df4351ffa5a9b0d46_7 = MAKE_CLASS_FRAME(codeobj_6f743249e593ed5df4351ffa5a9b0d46, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6f743249e593ed5df4351ffa5a9b0d46_7);
        assert(Py_REFCNT(frame_6f743249e593ed5df4351ffa5a9b0d46_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__10_get_dbapi_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f743249e593ed5df4351ffa5a9b0d46_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f743249e593ed5df4351ffa5a9b0d46_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f743249e593ed5df4351ffa5a9b0d46_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f743249e593ed5df4351ffa5a9b0d46_7,
            type_description_2,
            outline_13_var___class__
        );



        assertFrameObject(frame_6f743249e593ed5df4351ffa5a9b0d46_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_42;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto try_except_handler_42;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto try_except_handler_42;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_25;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_25 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_47 = mod_consts[188];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_47 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550;
            PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_25 = tmp_class_creation_14__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 550;
            tmp_assign_source_122 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_25, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_25);
            if (tmp_assign_source_122 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto try_except_handler_42;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_122;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_121 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_121);
        goto try_return_handler_42;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__14__JSONIndexType_pyodbc_550 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_41;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 550;
        goto try_except_handler_40;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_121);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_tuple_element_48;
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_48 == NULL)) {
            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_tuple_element_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        tmp_assign_source_123 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_123, 0, tmp_tuple_element_48);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_124 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_59 = tmp_class_creation_15__bases;
        tmp_subscript_value_12 = mod_consts[10];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_59, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_12 = tmp_class_creation_15__bases;
        tmp_assign_source_126 = SELECT_METACLASS(tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_126;
    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_60 = tmp_class_creation_15__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_60, mod_consts[159]);
        tmp_condition_result_46 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_value_26;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_26;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_61 = tmp_class_creation_15__metaclass;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[159]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        tmp_tuple_element_49 = mod_consts[190];
        tmp_args_value_26 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_49 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_26 = tmp_class_creation_15__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 555;
        tmp_assign_source_127 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_26, tmp_kwargs_value_26);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_26);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_62 = tmp_class_creation_15__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_62, mod_consts[161]);
        tmp_operand_value_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_15__metaclass;
        tmp_getattr_attr_12 = mod_consts[163];
        tmp_getattr_default_12 = mod_consts[164];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_63;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_24 = tmp_class_creation_15__prepared;
            tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_63 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[163]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_43;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 555;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_43;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_128;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_129;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_45;
        }
        frame_34f8620c1b3860e50b8f12628e6ea4db_8 = MAKE_CLASS_FRAME(codeobj_34f8620c1b3860e50b8f12628e6ea4db, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_34f8620c1b3860e50b8f12628e6ea4db_8);
        assert(Py_REFCNT(frame_34f8620c1b3860e50b8f12628e6ea4db_8) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__11_get_dbapi_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_34f8620c1b3860e50b8f12628e6ea4db_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_34f8620c1b3860e50b8f12628e6ea4db_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_34f8620c1b3860e50b8f12628e6ea4db_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_34f8620c1b3860e50b8f12628e6ea4db_8,
            type_description_2,
            outline_14_var___class__
        );



        assertFrameObject(frame_34f8620c1b3860e50b8f12628e6ea4db_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_45;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto try_except_handler_45;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto try_except_handler_45;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_130;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_27;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_27 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_51 = mod_consts[190];
            tmp_args_value_27 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_51 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555;
            PyTuple_SET_ITEM0(tmp_args_value_27, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_27 = tmp_class_creation_15__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 555;
            tmp_assign_source_130 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_27, tmp_kwargs_value_27);
            Py_DECREF(tmp_args_value_27);
            if (tmp_assign_source_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto try_except_handler_45;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_130;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_129 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_129);
        goto try_return_handler_45;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555 = NULL;
        goto try_return_handler_44;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__15__JSONPathType_pyodbc_555 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto try_except_handler_44;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 555;
        goto try_except_handler_43;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_129);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_tuple_element_52;
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_132 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_64 = tmp_class_creation_16__bases;
        tmp_subscript_value_13 = mod_consts[10];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_64, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_13 = tmp_class_creation_16__bases;
        tmp_assign_source_134 = SELECT_METACLASS(tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_134;
    }
    {
        nuitka_bool tmp_condition_result_50;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_65 = tmp_class_creation_16__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_65, mod_consts[159]);
        tmp_condition_result_50 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_value_28;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_28;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_66 = tmp_class_creation_16__metaclass;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[159]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        tmp_tuple_element_53 = mod_consts[192];
        tmp_args_value_28 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_53 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_28 = tmp_class_creation_16__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 560;
        tmp_assign_source_135 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_28, tmp_kwargs_value_28);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_value_28);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_135;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_67;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_67 = tmp_class_creation_16__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_67, mod_consts[161]);
        tmp_operand_value_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_16__metaclass;
        tmp_getattr_attr_13 = mod_consts[163];
        tmp_getattr_default_13 = mod_consts[164];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_26 = tmp_class_creation_16__prepared;
            tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_68 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[163]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_46;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_46;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 560;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_46;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_136;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_137;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_48;
        }
        frame_fb48ee503eecc178de4eee720c58be8f_9 = MAKE_CLASS_FRAME(codeobj_fb48ee503eecc178de4eee720c58be8f, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_fb48ee503eecc178de4eee720c58be8f_9);
        assert(Py_REFCNT(frame_fb48ee503eecc178de4eee720c58be8f_9) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_2 = "c";
            goto frame_exception_exit_9;
        }
        {
            struct Nuitka_CellObject *tmp_closure_2[1];

            tmp_closure_2[0] = outline_15_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__12_pre_exec(tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_2 = "c";
                goto frame_exception_exit_9;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = outline_15_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__13_post_exec(tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;
                type_description_2 = "c";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fb48ee503eecc178de4eee720c58be8f_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fb48ee503eecc178de4eee720c58be8f_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fb48ee503eecc178de4eee720c58be8f_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fb48ee503eecc178de4eee720c58be8f_9,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_fb48ee503eecc178de4eee720c58be8f_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_48;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto try_except_handler_48;
            }
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto try_except_handler_48;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_29;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_29;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_29 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_55 = mod_consts[192];
            tmp_args_value_29 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_55 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560;
            PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_29 = tmp_class_creation_16__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 560;
            tmp_assign_source_138 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_29, tmp_kwargs_value_29);
            Py_DECREF(tmp_args_value_29);
            if (tmp_assign_source_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto try_except_handler_48;
            }
            assert(Nuitka_Cell_GET(outline_15_var___class__) == NULL);
            PyCell_SET(outline_15_var___class__, tmp_assign_source_138);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_15_var___class__));
        tmp_assign_source_137 = Nuitka_Cell_GET(outline_15_var___class__);
        Py_INCREF(tmp_assign_source_137);
        goto try_return_handler_48;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560 = NULL;
        goto try_return_handler_47;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__16_MSExecutionContext_pyodbc_560 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_47;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 560;
        goto try_except_handler_46;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_137);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        tmp_assign_source_139 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_139, 0, tmp_tuple_element_56);
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto tuple_build_exception_20;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_139, 1, tmp_tuple_element_56);
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_assign_source_139);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_140 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_140;
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_53;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_69 = tmp_class_creation_17__bases;
        tmp_subscript_value_14 = mod_consts[10];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_69, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_14 = tmp_class_creation_17__bases;
        tmp_assign_source_142 = SELECT_METACLASS(tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_142;
    }
    {
        nuitka_bool tmp_condition_result_54;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_70 = tmp_class_creation_17__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_70, mod_consts[159]);
        tmp_condition_result_54 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_value_30;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_30;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_71 = tmp_class_creation_17__metaclass;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[159]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        tmp_tuple_element_57 = mod_consts[195];
        tmp_args_value_30 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_57 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_30 = tmp_class_creation_17__class_decl_dict;
        frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 610;
        tmp_assign_source_143 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_30, tmp_kwargs_value_30);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_value_30);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_143;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_72 = tmp_class_creation_17__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[161]);
        tmp_operand_value_14 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_getattr_target_14;
        PyObject *tmp_getattr_attr_14;
        PyObject *tmp_getattr_default_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[162];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_getattr_target_14 = tmp_class_creation_17__metaclass;
        tmp_getattr_attr_14 = mod_consts[163];
        tmp_getattr_default_14 = mod_consts[164];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
        if (tmp_tuple_element_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_28 = tmp_class_creation_17__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[163]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_49;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 610;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_49;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_144;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_145;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_51;
        }
        frame_36757635fb4a09d5876316184c98887f_10 = MAKE_CLASS_FRAME(codeobj_36757635fb4a09d5876316184c98887f, module_sqlalchemy$dialects$mssql$pyodbc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_36757635fb4a09d5876316184c98887f_10);
        assert(Py_REFCNT(frame_36757635fb4a09d5876316184c98887f_10) == 2);

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[196], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[192]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[192]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 617;
                    type_description_2 = "c";
                    goto frame_exception_exit_10;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_10;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[198], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_76;
            tmp_expression_value_74 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[145]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 619;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[199]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
            tmp_expression_value_75 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[125]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[125]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 620;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[200]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 620;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
            tmp_expression_value_76 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_1);

                        exception_lineno = 622;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[158]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 622;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
            tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[160]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[160]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_dict_key_1);

                        exception_lineno = 622;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_args_element_value_2 = _PyDict_NewPresized( 15 );
            {
                PyObject *tmp_expression_value_77;
                PyObject *tmp_expression_value_78;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_expression_value_80;
                PyObject *tmp_expression_value_81;
                PyObject *tmp_expression_value_82;
                PyObject *tmp_expression_value_83;
                PyObject *tmp_expression_value_84;
                PyObject *tmp_expression_value_85;
                PyObject *tmp_expression_value_86;
                PyObject *tmp_expression_value_87;
                PyObject *tmp_expression_value_88;
                PyObject *tmp_expression_value_89;
                PyObject *tmp_expression_value_90;
                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 622;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_77 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_77 == NULL)) {
                            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_77 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 623;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_77);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[166]);
                Py_DECREF(tmp_expression_value_77);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 623;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[167]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[167]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 623;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 623;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[121]);

                if (tmp_dict_key_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_dict_key_1 == NULL)) {
                            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_dict_key_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 624;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_key_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[177]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[177]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 624;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 624;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_78 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_78 == NULL)) {
                            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_78 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 626;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_78);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[201]);
                Py_DECREF(tmp_expression_value_78);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 626;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[174]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 626;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 626;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[123]);

                if (tmp_dict_key_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_dict_key_1 == NULL)) {
                            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_dict_key_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 627;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_key_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[175]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[175]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 627;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 627;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[129]);

                if (tmp_dict_key_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[129]);

                        if (unlikely(tmp_dict_key_1 == NULL)) {
                            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                        }

                        if (tmp_dict_key_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 631;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_key_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[176]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[176]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 631;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 631;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_79 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_79 == NULL)) {
                            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_79 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 632;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_79);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[129]);
                Py_DECREF(tmp_expression_value_79);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 632;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[176]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[176]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 632;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 632;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_80 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_80 == NULL)) {
                            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 633;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_80);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[202]);
                Py_DECREF(tmp_expression_value_80);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 633;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[176]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[176]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 633;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 633;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_81 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_81 == NULL)) {
                            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_81 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 634;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_81);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[178]);
                Py_DECREF(tmp_expression_value_81);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 634;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[179]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[179]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 634;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 634;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_82 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_82 == NULL)) {
                            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_82 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 635;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_82);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[203]);
                Py_DECREF(tmp_expression_value_82);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 635;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[182]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[182]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 635;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 635;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_83 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_83 == NULL)) {
                            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_83 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 636;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_83);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[204]);
                Py_DECREF(tmp_expression_value_83);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 636;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[184]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[184]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 636;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 636;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_84 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_84 == NULL)) {
                            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_84 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 637;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_84);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[132]);
                Py_DECREF(tmp_expression_value_84);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 637;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[186]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[186]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 637;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 637;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_86 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_86 == NULL)) {
                            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_86 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 638;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_86);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[132]);
                Py_DECREF(tmp_expression_value_86);
                if (tmp_expression_value_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 638;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[135]);
                Py_DECREF(tmp_expression_value_85);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 638;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[188]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[188]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 638;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 638;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_88 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_88 == NULL)) {
                            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_88 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 639;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_88);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[132]);
                Py_DECREF(tmp_expression_value_88);
                if (tmp_expression_value_87 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 639;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[138]);
                Py_DECREF(tmp_expression_value_87);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 639;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[190]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[190]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 639;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 639;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_89 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_89 == NULL)) {
                            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_89 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 643;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_89);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[205]);
                Py_DECREF(tmp_expression_value_89);
                if (tmp_dict_key_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 643;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_90 = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[143]);

                if (tmp_expression_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_90 == NULL)) {
                            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_90 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 643;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_90);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[205]);
                Py_DECREF(tmp_expression_value_90);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 643;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 643;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            goto frame_exception_exit_10;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            frame_36757635fb4a09d5876316184c98887f_10->m_frame.f_lineno = 619;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
            }

            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[200], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_defaults_1 = mod_consts[206];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_4[0] = outline_16_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__14___init__(tmp_defaults_1, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_5[1];

            tmp_closure_5[0] = outline_16_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__15__get_server_version_info(tmp_closure_5);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_6[1];

            tmp_closure_6[0] = outline_16_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__16_on_connect(tmp_closure_6);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 688;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__17__setup_timestampoffset_type();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_defaults_2;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_defaults_2 = mod_consts[211];
            Py_INCREF(tmp_defaults_2);

            tmp_closure_7[0] = outline_16_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__18_do_executemany(tmp_defaults_2, tmp_closure_7);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_8[1];

            tmp_closure_8[0] = outline_16_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$pyodbc$$$function__19_is_disconnect(tmp_closure_8);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_36757635fb4a09d5876316184c98887f_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_36757635fb4a09d5876316184c98887f_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_36757635fb4a09d5876316184c98887f_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_36757635fb4a09d5876316184c98887f_10,
            type_description_2,
            outline_16_var___class__
        );



        assertFrameObject(frame_36757635fb4a09d5876316184c98887f_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_51;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;

                goto try_except_handler_51;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_51;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_146;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_31;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_31;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_32 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_59 = mod_consts[195];
            tmp_args_value_31 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_59 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610;
            PyTuple_SET_ITEM0(tmp_args_value_31, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_31 = tmp_class_creation_17__class_decl_dict;
            frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame.f_lineno = 610;
            tmp_assign_source_146 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_31, tmp_kwargs_value_31);
            Py_DECREF(tmp_args_value_31);
            if (tmp_assign_source_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;

                goto try_except_handler_51;
            }
            assert(Nuitka_Cell_GET(outline_16_var___class__) == NULL);
            PyCell_SET(outline_16_var___class__, tmp_assign_source_146);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_16_var___class__));
        tmp_assign_source_145 = Nuitka_Cell_GET(outline_16_var___class__);
        Py_INCREF(tmp_assign_source_145);
        goto try_return_handler_51;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610 = NULL;
        goto try_return_handler_50;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610);
        locals_sqlalchemy$dialects$mssql$pyodbc$$$class__17_MSDialect_pyodbc_610 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto try_except_handler_50;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 610;
        goto try_except_handler_49;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_145);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assign_source_147 == NULL)) {
            tmp_assign_source_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_147);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ad1efbdd56e791d0d5f50954147cc9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ad1efbdd56e791d0d5f50954147cc9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ad1efbdd56e791d0d5f50954147cc9a, exception_lineno);
    }



    assertFrameObject(frame_4ad1efbdd56e791d0d5f50954147cc9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.dialects.mssql.pyodbc", false);

    Py_INCREF(module_sqlalchemy$dialects$mssql$pyodbc);
    return module_sqlalchemy$dialects$mssql$pyodbc;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$pyodbc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$dialects$mssql$pyodbc", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
