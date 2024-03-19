#include <Python.h>

/**
 * print_python_list_info - does exactly like the name suggests
 * @p: python object
 * Return: null
 */

void print_python_list_info(PyObject *p)
{
	int i;
	int size, memory;
	PyObject *object;

	size = PyList_Size(p);
	memory = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", memory);
	for (i = 0; i < size; i++)
	{
		object = PyList_GetItem(p, i);
		printf("Element %d: %s\n", i, Py_TYPE(object)->tp_name);
	}
}
