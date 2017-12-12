#include "stdafx.h"
#include <Python.h>
#include <stdio.h>
#include <conio.h>

char * myFileString;
char * myCourseString;

static int numargs = 0;

/* 
 *
 *
 *Return the number of arguments of the application command line 
 *
 *
 */
static PyObject*
emb_numargs(PyObject *self, PyObject *args)
{
	if (!PyArg_ParseTuple(args, ":numargs"))
		return NULL;
	return PyLong_FromLong(numargs);
}


static PyMethodDef EmbMethods[] = {
	{ "numargs", emb_numargs, METH_VARARGS,
	"Return the number of arguments received by the process." },
	{ NULL, NULL, 0, NULL }
};

static PyModuleDef EmbModule = {
	PyModuleDef_HEAD_INIT, "emb", NULL, -1, EmbMethods,
	NULL, NULL, NULL, NULL
};

static PyObject*
PyInit_emb(void)
{
	return PyModule_Create(&EmbModule);
}


/*
//
//
//
// function for passing Python script file name
//
//
//
*/
static char* myFile;

/* Return a character ... command line */
static PyObject*
file_argstring(PyObject *self, PyObject *args)
{
	if (!PyArg_ParseTuple(args, ":myFileString"))
		return NULL;
	return PyUnicode_FromString(myFileString);
}

static PyMethodDef FileMethods[] = {
	{ "myFile", file_argstring, METH_VARARGS,
	"Returns the keywords received by the process." },
	{ NULL, NULL, 0, NULL }
};

static PyModuleDef FileModule = {
	PyModuleDef_HEAD_INIT, "filestring", NULL, -1, FileMethods,
	NULL, NULL, NULL, NULL
};

static PyObject*
PyInit_file(void)
{
	return PyModule_Create(&FileModule);
}


/*
//
//
//
// function for passing course
//
//
//
*/
static char* myCourse;

/* Return a character ... command line */
static PyObject*
cse_argstring(PyObject *self, PyObject *args)
{
	if (!PyArg_ParseTuple(args, ":myCourseString"))
		return NULL;
	return PyUnicode_FromString(myCourseString);
}

static PyMethodDef CseMethods[] = {
	{ "myCourse", cse_argstring, METH_VARARGS,
	"Returns the keywords received by the process." },
	{ NULL, NULL, 0, NULL }
};

static PyModuleDef CseModule = {
	PyModuleDef_HEAD_INIT, "course", NULL, -1, CseMethods,
	NULL, NULL, NULL, NULL
};

static PyObject*
PyInit_course(void)
{
	return PyModule_Create(&CseModule);
}
