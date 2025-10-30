#include "main.h"
/**
 * leet - function name
 * @str: pointer
 * Return: final value of str
 *
 */
char *leet(char *str)
{
	int e, d;
	char l[] = "aAzZoOtTlL";
	char c[] = "4433007711";

	for (e = 0; str[e] != '\0'; e++)
	{
		for (d = 0; l[d] != '\0'; d++)
		{
			if (str[e] == l[d])
			{
				str[e] = c[d];
				break;
			}
		}
	}
	return (str);
}
