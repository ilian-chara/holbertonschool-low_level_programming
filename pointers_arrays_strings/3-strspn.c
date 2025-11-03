#include "main.h"
/**
* _strspn - function name
* @s: variable
* @accept: variable
* Return: value of c
*
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s)
	{
		char *a = accept;
		int f = 0;

		while (*a)
		{
			if (*s == *a)
			{
				f = 1;
				break;
			}
			a++;
		}
		if (!f)
		break;
		c++;
		s++;
	}
	return (c);
}
