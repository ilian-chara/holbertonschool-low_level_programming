#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int e;

	if (size == 0)
	return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	return (NULL);
	
	for (e = 0; e < size; e++)
	p[e] = c;

	return (p);
}