/* Generated code for Python module 'requests.packages.charade.mbcssm'
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

/* The "module_requests$packages$charade$mbcssm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$packages$charade$mbcssm;
PyDictObject *moduledict_requests$packages$charade$mbcssm;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[101];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[101];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("requests.packages.charade.mbcssm"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 101; i++) {
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
void checkModuleConstants_requests$packages$charade$mbcssm(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 101; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_84ff7a6589b28691a97c89952203edd4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[98]); CHECK_OBJECT(module_filename_obj);
    codeobj_84ff7a6589b28691a97c89952203edd4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[99], mod_consts[99], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_requests$packages$charade$mbcssm[] = {

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

    function_impl_code *current = functable_requests$packages$charade$mbcssm;
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

    if (offset > sizeof(functable_requests$packages$charade$mbcssm) || offset < 0) {
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
        functable_requests$packages$charade$mbcssm[offset],
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
        module_requests$packages$charade$mbcssm,
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
PyObject *modulecode_requests$packages$charade$mbcssm(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests.packages.charade.mbcssm");

    // Store the module for future use.
    module_requests$packages$charade$mbcssm = module;

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
        PRINT_STRING("requests.packages.charade.mbcssm: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests.packages.charade.mbcssm: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests.packages.charade.mbcssm: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrequests$packages$charade$mbcssm\n");

    moduledict_requests$packages$charade$mbcssm = MODULE_DICT(module_requests$packages$charade$mbcssm);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_requests$packages$charade$mbcssm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$packages$charade$mbcssm,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[100]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$packages$charade$mbcssm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$packages$charade$mbcssm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$packages$charade$mbcssm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$packages$charade$mbcssm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_requests$packages$charade$mbcssm);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_84ff7a6589b28691a97c89952203edd4;
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
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_84ff7a6589b28691a97c89952203edd4 = MAKE_MODULE_FRAME(codeobj_84ff7a6589b28691a97c89952203edd4, module_requests$packages$charade$mbcssm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84ff7a6589b28691a97c89952203edd4);
    assert(Py_REFCNT(frame_84ff7a6589b28691a97c89952203edd4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$packages$charade$mbcssm;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_84ff7a6589b28691a97c89952203edd4->m_frame.f_lineno = 28;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

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
                (PyObject *)moduledict_requests$packages$charade$mbcssm,
                mod_consts[9],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[9]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$packages$charade$mbcssm,
                mod_consts[11],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[11]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$packages$charade$mbcssm,
                mod_consts[12],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[12]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
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
        tmp_assign_source_8 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(24);
        PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_9, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 4, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 5, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 6, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 7, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 8, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 9, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 10, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 11, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 12, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 13, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 14, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 15, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 16, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 17, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 18, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 19, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 20, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 21, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 22, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_9, 23, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[19];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_11 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[20];
        tmp_dict_value_1 = mod_consts[21];
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[22];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = mod_consts[25];
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(70);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_13, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 3, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 4, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 5, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_13, 6, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_13, 7, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 8, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_13, 9, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 10, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 11, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 12, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 13, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 14, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 15, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 16, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 17, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 18, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 19, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 20, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 21, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 22, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 23, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 24, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 25, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 26, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 27, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 28, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 29, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 30, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 31, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 32, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 33, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 34, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 35, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 36, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 37, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 38, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 39, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 40, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 41, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 42, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 43, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 44, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 45, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 46, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 47, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 48, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 49, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 50, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 51, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 52, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 53, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 54, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 55, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 56, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 57, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 58, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 59, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 60, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 61, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 62, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 63, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 64, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 65, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 66, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 67, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 68, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_13, 69, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[19];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_assign_source_15 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[20];
        tmp_dict_value_2 = mod_consts[34];
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[22];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[23];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[24];
        tmp_dict_value_2 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[15];
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(40);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_17, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_17, 2, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_17, 3, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 4, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 5, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 6, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 7, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 8, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 9, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 10, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 11, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 12, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 13, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 14, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 15, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 16, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 17, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 18, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 19, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 20, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 21, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 22, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 23, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 24, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 25, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 26, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 27, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 28, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 29, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_17, 30, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 31, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_17, 32, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 33, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 34, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 35, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 36, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 37, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 38, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_17, 39, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_17);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[19];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_assign_source_19 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[20];
        tmp_dict_value_3 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[22];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[24];
        tmp_dict_value_3 = mod_consts[42];
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(16);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 1, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_21, 2, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 3, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 4, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 5, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 6, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 7, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 8, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 9, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 10, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 11, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 12, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 13, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 14, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_21, 15, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[19];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_assign_source_23 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[20];
        tmp_dict_value_4 = mod_consts[29];
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[22];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[23];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[24];
        tmp_dict_value_4 = mod_consts[49];
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(48);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 1, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 2, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_25, 3, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_25, 4, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_25, 5, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_25, 6, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 7, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 8, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 9, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 10, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 11, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 12, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 13, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 14, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 15, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 16, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 17, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 18, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 19, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 20, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 21, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 22, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 23, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 24, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 25, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 26, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 27, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 28, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 29, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 30, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 31, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_25, 32, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 33, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 34, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 35, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 36, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 37, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 38, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 39, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 40, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 41, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 42, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 43, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 44, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 45, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 46, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 47, tmp_tuple_element_5);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[19];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_assign_source_27 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[20];
        tmp_dict_value_5 = mod_consts[56];
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[22];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[23];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[24];
        tmp_dict_value_5 = mod_consts[57];
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(48);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 1, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 2, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 3, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 4, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 5, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_29, 6, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 7, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 8, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 9, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 10, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 11, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 12, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 13, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 14, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 15, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 16, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 17, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 18, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 19, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 20, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 21, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 22, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 23, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_29, 24, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 25, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 26, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 27, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 28, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 29, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 30, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 31, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 32, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 33, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_29, 34, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 35, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 36, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 37, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 38, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 39, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 40, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 41, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 42, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 43, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 44, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 45, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 46, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_29, 47, tmp_tuple_element_6);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_29);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[19];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_assign_source_31 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[20];
        tmp_dict_value_6 = mod_consts[56];
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[22];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[23];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[24];
        tmp_dict_value_6 = mod_consts[64];
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(24);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 1, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 2, tmp_tuple_element_7);
        tmp_tuple_element_7 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_33, 3, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 4, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 5, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 6, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 7, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 8, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 9, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 10, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 11, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 12, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 13, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 14, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 15, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 16, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 17, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 18, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 19, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 20, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 21, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 22, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_33, 23, tmp_tuple_element_7);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_33);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[19];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_assign_source_35 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[20];
        tmp_dict_value_7 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[22];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[23];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[24];
        tmp_dict_value_7 = mod_consts[71];
        tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = mod_consts[21];
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(56);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 1, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 2, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 3, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 4, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 5, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 6, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 7, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 8, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 9, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 10, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 11, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 12, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 13, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 14, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 15, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 16, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 17, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 18, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 19, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 20, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 21, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 22, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 23, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 24, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 25, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 26, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 27, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 28, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 29, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 30, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 31, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 32, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 33, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 34, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 35, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 36, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 37, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 38, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 39, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 40, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[75];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 41, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 42, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 43, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 44, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 45, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 46, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 47, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 48, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 49, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 50, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_37, 51, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 52, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 53, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 54, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 55, tmp_tuple_element_8);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_37);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[19];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_assign_source_39 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[20];
        tmp_dict_value_8 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[22];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[23];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[24];
        tmp_dict_value_8 = mod_consts[79];
        tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = mod_consts[30];
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(56);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 1, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 2, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 3, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 4, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 5, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 6, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 7, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 8, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 9, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 10, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 11, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 12, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 13, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 14, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 15, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 16, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 17, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 18, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 19, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 20, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 21, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 22, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 23, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 24, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 25, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 26, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 27, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 28, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 29, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 30, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 31, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 32, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 33, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[75];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 34, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[75];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 35, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 36, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 37, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 38, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 39, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 40, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 41, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 42, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 43, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 44, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 45, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 46, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 47, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 48, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 49, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 50, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 51, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_41, 52, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 53, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 54, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 55, tmp_tuple_element_9);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_41);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[19];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_assign_source_43 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[20];
        tmp_dict_value_9 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[22];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[23];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[24];
        tmp_dict_value_9 = mod_consts[85];
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(208);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 1, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 2, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 3, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 4, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 5, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 6, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 7, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 8, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[91];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 9, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[75];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 10, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 11, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 12, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 13, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 14, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 15, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 16, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 17, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 18, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 19, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 20, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 21, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 22, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 23, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 24, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 25, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 26, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 27, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 28, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 29, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 30, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 31, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 32, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 33, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 34, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 35, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 36, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 37, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 38, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 39, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 40, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 41, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 42, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 43, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 44, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 45, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 46, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 47, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 48, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 49, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 50, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 51, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 52, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 53, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 54, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 55, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 56, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 57, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 58, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 59, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 60, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 61, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 62, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 63, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 64, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 65, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 66, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 67, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 68, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 69, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 70, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 71, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 72, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 73, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 74, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 75, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 76, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 77, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 78, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 79, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 80, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 81, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 82, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 83, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 84, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 85, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 86, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 87, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 88, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 89, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 90, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 91, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 92, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 93, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 94, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 95, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 96, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 97, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 98, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 99, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 100, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 101, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 102, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 103, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 104, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 105, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 106, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 107, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 108, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 109, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 110, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 111, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 112, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 113, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 114, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 115, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 116, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 117, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 118, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 119, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 120, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 121, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 122, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 123, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 124, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 125, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 126, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 127, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 128, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 129, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 130, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 131, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 132, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 133, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 134, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 135, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 136, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 137, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 138, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 139, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 140, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 141, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 142, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 143, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 144, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 145, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 146, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 147, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 148, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 149, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 150, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 151, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 152, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 153, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 154, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 155, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 156, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 157, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 158, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 159, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 160, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 161, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 162, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 163, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 164, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 165, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 166, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 167, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 168, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 169, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 170, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 171, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 172, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 173, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 174, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 175, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 176, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 177, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 178, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 179, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_assign_source_45, 180, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 181, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 182, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 183, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 184, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 185, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 186, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 187, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 188, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 189, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 190, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 191, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 192, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 193, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 194, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 195, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 196, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 197, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 198, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 199, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 200, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 201, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 202, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 203, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 204, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 205, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 206, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_45, 207, tmp_tuple_element_10);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_assign_source_45);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_45);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84ff7a6589b28691a97c89952203edd4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84ff7a6589b28691a97c89952203edd4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84ff7a6589b28691a97c89952203edd4, exception_lineno);
    }



    assertFrameObject(frame_84ff7a6589b28691a97c89952203edd4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_10 = mod_consts[19];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_assign_source_47 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[20];
        tmp_dict_value_10 = mod_consts[95];
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[22];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[23];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[24];
        tmp_dict_value_10 = mod_consts[96];
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_47);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests.packages.charade.mbcssm", false);

    Py_INCREF(module_requests$packages$charade$mbcssm);
    return module_requests$packages$charade$mbcssm;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$packages$charade$mbcssm", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
