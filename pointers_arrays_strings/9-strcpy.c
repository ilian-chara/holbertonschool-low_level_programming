#include "main.h"
/**
 * _strcpy - function name
 * @dest: first pointer
 * @src: second pointer
 * Return: the value of s
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (s);
}
