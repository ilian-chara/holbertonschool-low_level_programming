#include "main.h"
/**
* _strpbrk - function name
* @s: is a string
* @accept: list of character
* Return: a char or null
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (0);
}
