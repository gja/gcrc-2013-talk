#include "Python.h"
#include "ruby.h"

static PyObject *python_ruby_require(PyObject *self, PyObject *file)
{
    rb_require(PyString_AsString(file));
    return Py_True;
}

static PyObject *python_ruby_eval(PyObject *self, PyObject *string)
{
    VALUE val = rb_eval_string(PyString_AsString(string));
    switch(TYPE(val)) {
        case T_FIXNUM: return PyInt_FromLong(FIX2INT(val));
        case T_STRING: return PyString_FromString(StringValuePtr(val));
        default: return Py_None; // Can handle these cases later
    }
}

static PyMethodDef module_functions[] = {
    { "require", python_ruby_require, METH_O, "Require A File" },
    { "eval", python_ruby_eval, METH_O, "Evaluate Ruby Code that returns an int" },
    { NULL }
};

void initruby(void)
{
    ruby_init();
    rb_eval_string("$: << '.'");
    Py_InitModule3("ruby", module_functions, "A ruby module for python.");
}
