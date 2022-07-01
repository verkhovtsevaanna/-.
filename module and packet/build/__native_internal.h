#ifndef MYPYC_NATIVE_INTERNAL_H
#define MYPYC_NATIVE_INTERNAL_H
#include <Python.h>
#include <CPy.h>
#include "__native.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[12];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern CPyModule *CPyModule_darbu_compiled_internal;
extern CPyModule *CPyModule_darbu_compiled;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins_internal;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_numpy_internal;
extern CPyModule *CPyModule_numpy;
extern PyObject *CPyDef_sum(PyObject *cpy_r_beg, PyObject *cpy_r_end, PyObject *cpy_r_divis);
extern PyObject *CPyPy_sum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_f(PyObject *cpy_r_x);
extern PyObject *CPyPy_f(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
