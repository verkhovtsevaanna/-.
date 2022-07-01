#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"
static PyMethodDef module_methods[] = {
    {"sum", (PyCFunction)CPyPy_sum, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"f", (PyCFunction)CPyPy_f, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "darbu_compiled",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_darbu_compiled(void)
{
    PyObject* modname = NULL;
    if (CPyModule_darbu_compiled_internal) {
        Py_INCREF(CPyModule_darbu_compiled_internal);
        return CPyModule_darbu_compiled_internal;
    }
    CPyModule_darbu_compiled_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_darbu_compiled_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_darbu_compiled_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_darbu_compiled_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_darbu_compiled_internal;
    fail:
    Py_CLEAR(CPyModule_darbu_compiled_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_sum(PyObject *cpy_r_beg, PyObject *cpy_r_end, PyObject *cpy_r_divis) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_Min;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_Max;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_razb;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_delta;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_subrazb;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_df;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
CPyL0: ;
    cpy_r_r0 = CPyStatics[8]; /* 0 */
    CPy_INCREF(cpy_r_r0);
    cpy_r_Min = cpy_r_r0;
    cpy_r_r1 = CPyStatics[8]; /* 0 */
    CPy_INCREF(cpy_r_r1);
    cpy_r_Max = cpy_r_r1;
    cpy_r_r2 = CPyStatic_globals;
    cpy_r_r3 = CPyStatics[3]; /* 'linspace' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 7, CPyStatic_globals);
        goto CPyL30;
    }
CPyL1: ;
    cpy_r_r5 = PyObject_CallFunctionObjArgs(cpy_r_r4, cpy_r_beg, cpy_r_end, cpy_r_divis, NULL);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 7, CPyStatic_globals);
        goto CPyL30;
    }
CPyL2: ;
    cpy_r_razb = cpy_r_r5;
    cpy_r_r6 = CPyStatics[9]; /* 1 */
    cpy_r_r7 = PyObject_GetItem(cpy_r_razb, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 8, CPyStatic_globals);
        goto CPyL31;
    }
CPyL3: ;
    cpy_r_r8 = CPyStatics[8]; /* 0 */
    cpy_r_r9 = PyObject_GetItem(cpy_r_razb, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 8, CPyStatic_globals);
        goto CPyL32;
    }
CPyL4: ;
    cpy_r_r10 = PyNumber_Subtract(cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 8, CPyStatic_globals);
        goto CPyL31;
    }
CPyL5: ;
    cpy_r_delta = cpy_r_r10;
    cpy_r_r11 = CPyObject_Size(cpy_r_razb);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 10, CPyStatic_globals);
        goto CPyL33;
    }
CPyL6: ;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r11);
    cpy_r_r13 = CPyStatics[9]; /* 1 */
    cpy_r_r14 = PyNumber_Subtract(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 10, CPyStatic_globals);
        goto CPyL33;
    }
CPyL7: ;
    cpy_r_r15 = 0;
    CPyTagged_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_i = cpy_r_r16;
CPyL8: ;
    CPyTagged_INCREF(cpy_r_r15);
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_r18 = PyObject_RichCompare(cpy_r_r17, cpy_r_r14, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 10, CPyStatic_globals);
        goto CPyL34;
    }
CPyL9: ;
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 10, CPyStatic_globals);
        goto CPyL34;
    }
CPyL10: ;
    cpy_r_r21 = cpy_r_r19;
    if (!cpy_r_r21) goto CPyL35;
CPyL11: ;
    cpy_r_r22 = PyObject_GetItem(cpy_r_razb, cpy_r_i);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 12, CPyStatic_globals);
        goto CPyL34;
    }
CPyL12: ;
    cpy_r_r23 = CPyStatics[9]; /* 1 */
    cpy_r_r24 = PyNumber_Add(cpy_r_i, cpy_r_r23);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 12, CPyStatic_globals);
        goto CPyL36;
    }
CPyL13: ;
    cpy_r_r25 = PyObject_GetItem(cpy_r_razb, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 12, CPyStatic_globals);
        goto CPyL36;
    }
CPyL14: ;
    cpy_r_r26 = CPyStatic_globals;
    cpy_r_r27 = CPyStatics[3]; /* 'linspace' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 12, CPyStatic_globals);
        goto CPyL37;
    }
CPyL15: ;
    cpy_r_r29 = CPyStatics[10]; /* 1000 */
    cpy_r_r30 = PyObject_CallFunctionObjArgs(cpy_r_r28, cpy_r_r22, cpy_r_r25, cpy_r_r29, NULL);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 12, CPyStatic_globals);
        goto CPyL38;
    }
CPyL16: ;
    cpy_r_subrazb = cpy_r_r30;
    cpy_r_r31 = CPyDef_f(cpy_r_subrazb);
    CPy_DECREF(cpy_r_subrazb);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 13, CPyStatic_globals);
        goto CPyL38;
    }
CPyL17: ;
    cpy_r_df = cpy_r_r31;
    cpy_r_r32 = CPyStatic_globals;
    cpy_r_r33 = CPyStatics[4]; /* 'min' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 14, CPyStatic_globals);
        goto CPyL39;
    }
CPyL18: ;
    cpy_r_r35 = PyObject_CallFunctionObjArgs(cpy_r_r34, cpy_r_df, NULL);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 14, CPyStatic_globals);
        goto CPyL39;
    }
CPyL19: ;
    cpy_r_r36 = PyNumber_Multiply(cpy_r_r35, cpy_r_delta);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 14, CPyStatic_globals);
        goto CPyL39;
    }
CPyL20: ;
    cpy_r_r37 = PyNumber_InPlaceAdd(cpy_r_Min, cpy_r_r36);
    CPy_DECREF(cpy_r_Min);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 14, CPyStatic_globals);
        goto CPyL40;
    }
CPyL21: ;
    cpy_r_Min = cpy_r_r37;
    cpy_r_r38 = CPyStatic_globals;
    cpy_r_r39 = CPyStatics[5]; /* 'max' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 15, CPyStatic_globals);
        goto CPyL39;
    }
CPyL22: ;
    cpy_r_r41 = PyObject_CallFunctionObjArgs(cpy_r_r40, cpy_r_df, NULL);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_df);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 15, CPyStatic_globals);
        goto CPyL38;
    }
CPyL23: ;
    cpy_r_r42 = PyNumber_Multiply(cpy_r_r41, cpy_r_delta);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 15, CPyStatic_globals);
        goto CPyL38;
    }
CPyL24: ;
    cpy_r_r43 = PyNumber_InPlaceAdd(cpy_r_Max, cpy_r_r42);
    CPy_DECREF(cpy_r_Max);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 15, CPyStatic_globals);
        goto CPyL41;
    }
CPyL25: ;
    cpy_r_Max = cpy_r_r43;
CPyL26: ;
    cpy_r_r44 = CPyTagged_Add(cpy_r_r15, 2);
    CPyTagged_DECREF(cpy_r_r15);
    CPyTagged_INCREF(cpy_r_r44);
    cpy_r_r15 = cpy_r_r44;
    cpy_r_r45 = CPyTagged_StealAsObject(cpy_r_r44);
    cpy_r_i = cpy_r_r45;
    goto CPyL8;
CPyL27: ;
    cpy_r_r46 = PyNumber_Subtract(cpy_r_Min, cpy_r_Max);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "sum", 16, CPyStatic_globals);
        goto CPyL30;
    }
CPyL28: ;
    cpy_r_r47.f0 = cpy_r_Min;
    cpy_r_r47.f1 = cpy_r_Max;
    cpy_r_r47.f2 = cpy_r_r46;
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_INCREF(cpy_r_r47.f2);
    CPy_DECREF(cpy_r_Min);
    CPy_DECREF(cpy_r_Max);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = PyTuple_New(3);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp2);
    PyObject *__tmp3 = cpy_r_r47.f2;
    PyTuple_SET_ITEM(cpy_r_r48, 2, __tmp3);
    return cpy_r_r48;
CPyL29: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL30: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_r7);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_i);
    goto CPyL29;
CPyL35: ;
    CPy_DECREF(cpy_r_razb);
    CPy_DECREF(cpy_r_delta);
    CPy_DECREF(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_i);
    goto CPyL27;
CPyL36: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r22);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r25);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_df);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_Max);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_df);
    goto CPyL29;
CPyL41: ;
    CPy_DecRef(cpy_r_Min);
    CPy_DecRef(cpy_r_razb);
    CPy_DecRef(cpy_r_delta);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    goto CPyL29;
}

PyObject *CPyPy_sum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"beg", "end", "divis", 0};
    static CPyArg_Parser parser = {"OOO:sum", kwlist, 0};
    PyObject *obj_beg;
    PyObject *obj_end;
    PyObject *obj_divis;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_beg, &obj_end, &obj_divis)) {
        return NULL;
    }
    PyObject *arg_beg = obj_beg;
    PyObject *arg_end = obj_end;
    PyObject *arg_divis = obj_divis;
    PyObject *retval = CPyDef_sum(arg_beg, arg_end, arg_divis);
    return retval;
fail: ;
    CPy_AddTraceback("darbu_compiled.py", "sum", 2, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_f(PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
CPyL0: ;
    cpy_r_r0 = CPyStatics[11]; /* 2 */
    cpy_r_r1 = PyNumber_Multiply(cpy_r_x, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "f", 19, CPyStatic_globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_f(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:f", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg_x = obj_x;
    PyObject *retval = CPyDef_f(arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("darbu_compiled.py", "f", 18, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyStatics[6]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", -1, CPyStatic_globals);
        goto CPyL12;
    }
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatic_globals;
    cpy_r_r6 = CPyStatics[3]; /* 'linspace' */
    cpy_r_r7 = CPyStatics[4]; /* 'min' */
    cpy_r_r8 = CPyStatics[5]; /* 'max' */
    cpy_r_r9 = PyList_New(3);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r11 = cpy_r_r6;
    cpy_r_r12 = cpy_r_r11 + 8;
    CPy_INCREF(cpy_r_r7);
    *(PyObject * *)cpy_r_r12 = cpy_r_r7;
    cpy_r_r13 = cpy_r_r11 + 16;
    CPy_INCREF(cpy_r_r8);
    *(PyObject * *)cpy_r_r13 = cpy_r_r8;
    cpy_r_r14 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r15 = PyImport_ImportModuleLevelObject(cpy_r_r14, cpy_r_r5, 0, cpy_r_r9, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL12;
    }
CPyL5: ;
    CPyModule_numpy = cpy_r_r15;
    CPy_INCREF(CPyModule_numpy);
    cpy_r_r16 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r17 = CPyStatics[3]; /* 'linspace' */
    cpy_r_r18 = CPyStatics[3]; /* 'linspace' */
    cpy_r_r19 = CPyImport_ImportFrom(cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL13;
    }
CPyL6: ;
    cpy_r_r20 = CPyStatics[3]; /* 'linspace' */
    cpy_r_r21 = CPyDict_SetItem(cpy_r_r5, cpy_r_r20, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL13;
    }
CPyL7: ;
    cpy_r_r23 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r24 = CPyStatics[4]; /* 'min' */
    cpy_r_r25 = CPyStatics[4]; /* 'min' */
    cpy_r_r26 = CPyImport_ImportFrom(cpy_r_r15, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL13;
    }
CPyL8: ;
    cpy_r_r27 = CPyStatics[4]; /* 'min' */
    cpy_r_r28 = CPyDict_SetItem(cpy_r_r5, cpy_r_r27, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL13;
    }
CPyL9: ;
    cpy_r_r30 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r31 = CPyStatics[5]; /* 'max' */
    cpy_r_r32 = CPyStatics[5]; /* 'max' */
    cpy_r_r33 = CPyImport_ImportFrom(cpy_r_r15, cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL12;
    }
CPyL10: ;
    cpy_r_r34 = CPyStatics[5]; /* 'max' */
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r5, cpy_r_r34, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("darbu_compiled.py", "<module>", 1, CPyStatic_globals);
        goto CPyL12;
    }
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL13: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL12;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_darbu_compiled = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_numpy = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[12];
const char * const CPyLit_Str[] = {
    "\005\blinspace\003min\003max\bbuiltins\005numpy",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0040\0001\0001000\0002",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {0};
CPyModule *CPyModule_darbu_compiled_internal = NULL;
CPyModule *CPyModule_darbu_compiled;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_numpy_internal = NULL;
CPyModule *CPyModule_numpy;
PyObject *CPyDef_sum(PyObject *cpy_r_beg, PyObject *cpy_r_end, PyObject *cpy_r_divis);
PyObject *CPyPy_sum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_f(PyObject *cpy_r_x);
PyObject *CPyPy_f(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);
