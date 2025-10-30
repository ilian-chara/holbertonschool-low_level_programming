#include "main.h"
/**
 * rev_string - function name
 * @s: pointer
 *
 */

void rev_string(char *s)
{
	int z = 0, e;

	char t;

	while (s[z] != '\0')
		z++;

	for (e = 0; e < z / 2; e++)
	{
		t = s[e];
		s[e] = s[z - e - 1];
		s[z - e - 1] = t;
	}
}
