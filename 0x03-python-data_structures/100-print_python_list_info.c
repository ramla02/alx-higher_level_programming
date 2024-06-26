#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - a C function that prints some basic info
 * about Python lists
 * @p: python
 */

void print_python_list_info(PyObject *p)
{
	long int size = PyList_size(p);
	int i;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
}
