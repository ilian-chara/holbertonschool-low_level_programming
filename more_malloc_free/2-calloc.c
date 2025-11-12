#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocate memory and create an array
* @size: number of bytes
* @nmemb: the array
* Return: error if null else the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *e;
	char *p;
	unsigned int r;

	if (nmemb == 0)
	return (NULL);
	if (size == 0)
	return (NULL);

	e = malloc(nmemb * size);
	if (e == NULL)
	return (NULL);

	p = e;
	for (r = 0; r < (nmemb * size); r++)
	p[r] = 0;

	return (e);
}
