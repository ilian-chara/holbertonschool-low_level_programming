#include "main.h"
/**
 * _strcmp - function name
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: final value
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (s1[e] != '\0' && s2[e] != '\0')
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
		e++;
	}
	return (s1[e] - s2[e]);
}
