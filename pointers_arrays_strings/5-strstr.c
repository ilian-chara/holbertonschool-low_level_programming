#include "main.h"
/**
* _strstr - function name
* @haystack: first string
* @needle: second string
* Return: too much words
*/

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	return (haystack);

	while (*haystack)
	{
		char *n = needle;
		char *h = haystack;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		return (haystack);
		haystack++;
	}
	return (0);
}
