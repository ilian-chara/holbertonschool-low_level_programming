#include "main.h"
/**
 * string_toupper - function name
 * @str: pointer
 * Return: alphabet letter by letter
 *
 */

char *string_toupper(char *str)
{
	int e = 0;

	while (str[e] != '\0')
	{
		if (str[e] >= 'a' && str[e] <= 'z')
		{
			str[e] = str[e] - 32;
		}
		e++;
	}
	return (str);
}
