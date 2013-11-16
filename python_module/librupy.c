#include "Python.h"

void rupy_start_ruby_vm();
void rupy_require_file(const char *file);
long rupy_eval(const char *string);

static PyObject *python_rupy_require(PyObject *self, PyObject *file)
{
    rupy_require_file(PyString_AsString(file));
    return Py_True;
}

static PyObject *python_rupy_eval(PyObject *self, PyObject *string)
{
    return PyInt_FromLong(rupy_eval(PyString_AsString(string)));
}

static PyMethodDef module_functions[] = {
    { "require", python_rupy_require, METH_O, "Require A File" },
    { "eval", python_rupy_eval, METH_O, "Evaluate Ruby Code that returns an int" },
    { NULL }
};

void initlibrupy(void)
{
    rupy_start_ruby_vm();
    Py_InitModule3("librupy", module_functions, "A ruby module for python.");
}
