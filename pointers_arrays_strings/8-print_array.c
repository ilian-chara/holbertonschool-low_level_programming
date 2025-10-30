#include <stdio.h>
#include "main.h"
/**
 * print_array - function name
 * @n: array
 * @a: pointer
 */

void print_array(int *a, int n)
{
	int e = 0;

		while (e < n)
		{
			printf("%d", a[e]);
			if (e < n - 1)
				printf(", ");
			e++;
		}

	putchar('\n');
}
