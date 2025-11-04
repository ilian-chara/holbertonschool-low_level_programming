#include "main.h"
/**
* _sqrt_recursion - function name
* @n: number to find the square root of
* Return: natural square root
*/

int _sqrt_recursion(int n)
{
	return (h(n, 0));
}
/**
* h - helper to _sqrt_recursion
* @n: number to find the square root of
* @e: number to test
* Return: natural quare root or -1 if negative
*/

int h(int n, int e)
{
	if (e * e > n)
	return (-1);
	if (n < 0)
	return (-1);
	if (e * e == n)
	return (e);
	return (h(n, e + 1));
}
