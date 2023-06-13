#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p) {
    Py_ssize_t size, alloc, i;
    PyObject *obj;

    // Get the size of the list
    size = PyList_Size(p);
    // Get the allocated size of the list
    alloc = ((PyListObject *)p)->allocated;

    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", alloc);

    for (i = 0; i < size; i++) {
        // Get the i-th element of the list
        obj = PyList_GetItem(p, i);
        // Get the type name of the element
        const char* type_name = Py_TYPE(obj)->tp_name;
        printf("Element %zd: %s\n", i, type_name);
    }
}
