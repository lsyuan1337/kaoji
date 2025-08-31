/* Generated code for Python module 'xlwt.ExcelMagic'
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

/* The "module_xlwt$ExcelMagic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_xlwt$ExcelMagic;
PyDictObject *moduledict_xlwt$ExcelMagic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[213];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[213];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("xlwt.ExcelMagic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 213; i++) {
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
void checkModuleConstants_xlwt$ExcelMagic(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 213; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8992b9f179563da3b8f22d01dba0490b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[210]); CHECK_OBJECT(module_filename_obj);
    codeobj_8992b9f179563da3b8f22d01dba0490b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[211], mod_consts[211], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_xlwt$ExcelMagic[] = {

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

    function_impl_code *current = functable_xlwt$ExcelMagic;
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

    if (offset > sizeof(functable_xlwt$ExcelMagic) || offset < 0) {
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
        functable_xlwt$ExcelMagic[offset],
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
        module_xlwt$ExcelMagic,
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
PyObject *modulecode_xlwt$ExcelMagic(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("xlwt.ExcelMagic");

    // Store the module for future use.
    module_xlwt$ExcelMagic = module;

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
        PRINT_STRING("xlwt.ExcelMagic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("xlwt.ExcelMagic: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("xlwt.ExcelMagic: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initxlwt$ExcelMagic\n");

    moduledict_xlwt$ExcelMagic = MODULE_DICT(module_xlwt$ExcelMagic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_xlwt$ExcelMagic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_xlwt$ExcelMagic,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[212]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_xlwt$ExcelMagic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_xlwt$ExcelMagic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_xlwt$ExcelMagic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_xlwt$ExcelMagic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_xlwt$ExcelMagic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8992b9f179563da3b8f22d01dba0490b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_8992b9f179563da3b8f22d01dba0490b = MAKE_MODULE_FRAME(codeobj_8992b9f179563da3b8f22d01dba0490b, module_xlwt$ExcelMagic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8992b9f179563da3b8f22d01dba0490b);
    assert(Py_REFCNT(frame_8992b9f179563da3b8f22d01dba0490b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = DICT_COPY(mod_consts[11]);
        UPDATE_STRING_DICT1(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = DICT_COPY(mod_consts[13]);
        UPDATE_STRING_DICT1(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[16];
        tmp_assign_source_104 = _PyDict_NewPresized( 96 );
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 755;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[18];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[20];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[22];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[24];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 759;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[26];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[28];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[32];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[34];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[36];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[38];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[40];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[42];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[44];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[46];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[48];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[50];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[52];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[54];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[56];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 775;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[58];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[60];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[62];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[64];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[66];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[68];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[70];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[72];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[74];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[76];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[78];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[80];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[82];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[84];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[86];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[88];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[90];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[92];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 793;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[94];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 794;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[96];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 795;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[98];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[100];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[102];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[104];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[106];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[108];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[110];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 802;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[112];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 803;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[114];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[116];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[118];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[120];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[122];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 808;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[124];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 809;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[126];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 810;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[128];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[130];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[132];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[134];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[136];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[138];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[140];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[142];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[144];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[146];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[148];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 821;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[150];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 822;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[152];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 823;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[154];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[156];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[158];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 826;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[160];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 827;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[162];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 828;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[164];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 829;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[166];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 830;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[168];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[170];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 832;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[172];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 833;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[174];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[176];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[178];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 836;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[180];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 837;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[182];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 838;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[184];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[186];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 840;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[188];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[190];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 842;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[192];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[194];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 844;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[196];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[198];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[200];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 847;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[202];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 848;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[204];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 849;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = mod_consts[206];
        tmp_res = PyDict_SetItem(tmp_assign_source_104, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 850;

            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_104);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_104);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8992b9f179563da3b8f22d01dba0490b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8992b9f179563da3b8f22d01dba0490b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8992b9f179563da3b8f22d01dba0490b, exception_lineno);
    }



    assertFrameObject(frame_8992b9f179563da3b8f22d01dba0490b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = DICT_COPY(mod_consts[208]);
        UPDATE_STRING_DICT1(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_105);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("xlwt.ExcelMagic", false);

    Py_INCREF(module_xlwt$ExcelMagic);
    return module_xlwt$ExcelMagic;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$ExcelMagic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("xlwt$ExcelMagic", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
