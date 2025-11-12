#include <stdlib.h>
/**
* array_range - create an array from min to max
* @min: minimum int
* @max: maximum int
* Return: NULL if there's an illogical thing else return p
*
*/

int *array_range(int min, int max)
{
	int *p;
	int s, e;

	if (min > max)
	return (NULL);

	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
	return (NULL);

	for (e = 0; e < s; e++)
	p[e] = min + e;

	return (p);
}
