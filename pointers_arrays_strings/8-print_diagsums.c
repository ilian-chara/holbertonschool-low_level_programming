#include "main.h"
#include <stdio.h>
/**
* print_diagsums - function name
* @a: pointer
* @size: size
*
*/

void print_diagsums(int *a, int size)
{
	int e, d1 = 0, d2 = 0;

	for (e = 0; e < size; e++)
	{
		d1 += *(a + e * size + e);
		d2 += *(a + e * size + (size - 1 - e));
	}
	printf("%d, %d\n", d1, d2);
}
