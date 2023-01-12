#include "main.h"

/**
 ** malloc_checked - Allocates memory using malloc
 ** @b: number of bytes to be allocated
 ** Return: void
 **/

void *malloc_checked(unsigned int b)
{
void *k;
k = malloc(b);
if (k == NULL)
{
exit(98);
}
return (k);
}
