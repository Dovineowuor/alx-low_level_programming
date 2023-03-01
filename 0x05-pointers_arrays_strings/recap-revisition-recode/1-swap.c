#include <stdio.h>
#include "main.h"
void swap_int(int *a, int *b)
{
/** printf("First Appreoach");
* vasr tmp = *a;
* *a = *b;
* *b = tmp;
*/
/*printf("Second Approach / Alternative");*/
*a ^= *b;
*b ^= *a;
*a ^= *b;
}
