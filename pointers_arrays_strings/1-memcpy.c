#include "main.h"
/**
* _memcpy - function name
* @dest: paste the value of src
* @src: copy its value to dest
* @n: ammount of bytes
* Return: value of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e = 0;

	while (e < n)
	{
		dest[e] = src[e];
		e++;
	}
	return (dest);
}
