#include "main.h"
/**
 * _atoi - function name
 * @s: pointer
 * Return: num multiplied by si
 *
 */

int _atoi(char *s)
{
	int i = 0;
	int si = 1;
	int n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			si = -si;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n * si);
}
