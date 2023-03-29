#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H
#include <stddef.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
