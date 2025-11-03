#include "main.h"
/**
 * cap_string - function name
 * @str: pointer
 * Return: str final value
 *
 */

char *cap_string(char *str)
{
	int e = 0, y;
	char s[] = " \t\n,;.!?\"(){}";

	while (str[e] != '\0')
	{
		if (e == 0 && str[e] >= 'a' && str[e] <= 'z')
			str[e] -= 32;
		for (y = 0; s[y] != '\0'; y++)
		{
			if (str[e] == s[y] && str[e + 1] >= 'a' && str[e + 1] <= 'z')
			{
				str[e + 1] -= 32;
				break;
			}
		}
		e++;
	}
	return (str);
}
