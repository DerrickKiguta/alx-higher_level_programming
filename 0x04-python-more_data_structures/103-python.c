#include <Python.h>

void print_python_list(PyObject *p)
{
    Py_ssize_t size, i;
    PyListObject *list;

    size = PyList_Size(p);
    list = (PyListObject *)p;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", list->allocated);

    for (i = 0; i < size; i++)
    {
        printf("Element %ld: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
    }
}

void print_python_bytes(PyObject *p)
{
    Py_ssize_t size, i;
    char *str;

    printf("[.] bytes object info\n");

    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    str = PyBytes_AsString(p);

    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", str);

    if (size > 10)
        size = 10;

    printf("  first %ld bytes:", size);
    for (i = 0; i < size; i++)
    {
        printf(" %02x", (unsigned char)str[i]);
    }
    printf("\n");
}
