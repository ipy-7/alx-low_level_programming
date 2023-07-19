#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, size_t size, void (*cmp)(int));
#endif
