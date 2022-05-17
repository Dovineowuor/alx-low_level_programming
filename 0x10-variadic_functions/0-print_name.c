#ifndef VAR_FUNCS_H
#define VAR_FUNCS_H

#include <stdio.h>
#include <stdarg.h>
/*
*   0-print_name.c: This file prints the name using the function\n defined in the VAR_FUNCS_H
*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNCS_H */
