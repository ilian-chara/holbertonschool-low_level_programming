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
		int dig = s[i] - '0';

		if (si == 1)
		{
			if (n > (2147483647 - dig) / 10)
				return (2147483647);
		}
		else
		{
			if (n < (-2147483648 + dig) / 10)
				return (-2147483648);
		}
		n = n * 10 + si * dig;
		i++;
	}
	return (n);
}
