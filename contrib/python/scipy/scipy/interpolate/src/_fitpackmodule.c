/*
    Multipack project.
    This file is generated by setmodules.py. Do not modify it.
 */
#include "multipack.h"
static PyObject *fitpack_error;
#include "__fitpack.h"

static struct PyMethodDef fitpack_module_methods[] = {
{"_curfit",
    fitpack_curfit,
    METH_VARARGS, doc_curfit},
{"_spl_",
    fitpack_spl_,
    METH_VARARGS, doc_spl_},
{"_splint",
    fitpack_splint,
    METH_VARARGS, doc_splint},
{"_sproot",
    fitpack_sproot,
    METH_VARARGS, doc_sproot},
{"_spalde",
    fitpack_spalde,
    METH_VARARGS, doc_spalde},
{"_parcur",
    fitpack_parcur,
    METH_VARARGS, doc_parcur},
{"_surfit",
    fitpack_surfit,
    METH_VARARGS, doc_surfit},
{"_bispev",
    fitpack_bispev,
    METH_VARARGS, doc_bispev},
{"_insert",
    fitpack_insert,
    METH_VARARGS, doc_insert},
{"_bspleval",
    _bspleval,
    METH_VARARGS, doc_bspleval},
{"_bsplmat",
    _bsplmat,
    METH_VARARGS, doc_bsplmat},
{"_bspldismat",
    _bspldismat,
    METH_VARARGS, doc_bspldismat},
{NULL, NULL, 0, NULL}
};

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "_fitpack",
    NULL,
    -1,
    fitpack_module_methods,
    NULL,
    NULL,
    NULL,
    NULL
};

PyObject *PyInit__fitpack(void)
{
    PyObject *m, *d, *s;

    m = PyModule_Create(&moduledef);
    import_array();

    d = PyModule_GetDict(m);

    s = PyUnicode_FromString(" 1.7 ");
    PyDict_SetItemString(d, "__version__", s);
    fitpack_error = PyErr_NewException ("fitpack.error", NULL, NULL);
    Py_DECREF(s);
    if (PyErr_Occurred()) {
        Py_FatalError("can't initialize module fitpack");
    }

    return m;
}
#else
PyMODINIT_FUNC init5scipy11interpolate8_fitpack(void) {
    PyObject *m, *d, *s;
    m = Py_InitModule("scipy.interpolate._fitpack", fitpack_module_methods);
    import_array();
    d = PyModule_GetDict(m);

    s = PyString_FromString(" 1.7 ");
    PyDict_SetItemString(d, "__version__", s);
    fitpack_error = PyErr_NewException ("fitpack.error", NULL, NULL);
    Py_DECREF(s);
    if (PyErr_Occurred()) {
        Py_FatalError("can't initialize module fitpack");
    }
}
#endif 
