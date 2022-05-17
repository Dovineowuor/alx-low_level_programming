#ifndef _FUNCTION_FILE_H_
#define _FUNCTION_FILE_H_
/*Function_pointers.h is the header file gor this repo
*It defines the basic functions and their pointers.
*/
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
