#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocate memory
* @b: bytes to allocate
* Return: pointer to malloc
*
*
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);

	return (p);
}
