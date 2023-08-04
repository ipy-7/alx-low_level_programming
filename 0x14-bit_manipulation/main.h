#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void _putchar(int c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int idx);
int set_bit(unsigned long int *n, unsigned int idx);
int clear_bit(unsigned long int *n, unsigned int idx);
unsigned int flip_bits(unsigned long int n, unsigned int m);

#endif
