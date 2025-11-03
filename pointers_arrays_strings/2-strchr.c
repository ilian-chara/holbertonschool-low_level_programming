#include "main.h"
/**
* _strchr - function name
* @s: pointer
* @c: character
* Return: a character or null
*
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		return (s);
		s++;
	}
	if (c == '\0')
	return (s);
	return (0);
}
