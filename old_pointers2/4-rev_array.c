#include "main.h"
/**
 * reverse_array - function name
 * @a: pointer 1
 * @n: null byte
 */

void reverse_array(int *a, int n)
{
	int e, t;

	for (e = 0; e < n / 2; e++)
	{
		t = a[e];
		a[e] = a[n - 1 - e];
		a[n - 1 - e] = t;
	}
}
