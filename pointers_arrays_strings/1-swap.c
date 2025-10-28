#include <stdio.h>
#include "main.h"
/**
 * swap_int - function
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
