#include "main.h"
/**
* minos_prime - helper to is_prime_number
* @n: search if prime number or not
* @e: begins at 2 and divide itself with n
* Return: 0 if not prime, 1 if prime
*/

int minos_prime(int n, int e)
{
	if (n <= 1)
	return (0);
	if (n % e == 0 && e != n)
	return (0);
	if (e * e > n)
	return (1);
	return (minos_prime(n, e + 1));
}

/**
* is_prime_number - check if a number is prime or not
* @n: check if it's prime or not
* Return: final result
*/
int is_prime_number(int n)
{
	return (minos_prime(n, 2));
}
