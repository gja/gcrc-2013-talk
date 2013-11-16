#include "Python.h"

static PyObject *run_fibonacci_in_ruby(PyObject *self, PyObject *number)
{
    long value = PyInt_AsLong(number);
    printf("%li", value);
    return Py_True;
}

static PyMethodDef module_functions[] = {
    { "factorial", run_fibonacci_in_ruby, METH_O, "Calculate factorial" },
    { NULL }
};

void initlibrupy(void)
{
    Py_InitModule3("librupy", module_functions, "A ruby module for python.");
}
