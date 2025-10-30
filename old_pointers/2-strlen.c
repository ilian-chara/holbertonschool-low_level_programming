#include "main.h"
/**
* _strlen - function name
* @s: pointer to e
* Return: value of e
*/

int _strlen(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	e++;

	return (e);
}
