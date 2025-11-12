#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concat two strings
* @s1: string one
* @s2: string two
* @n: number of bytes
* Return: .
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, e, r;
	char *p;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[l1] != '\0')
	l1++;
	while (s2[l2] != '\0')
	l2++;

	if (n >= l2)
	n = l2;

	p = malloc(sizeof(char) * (l1 + n + 1));
	if (p == NULL)
	return (0);

	for (e = 0; e < l1; e++)
	p[e] = s1[e];
	for (r = 0; r < n; r++)
	p[l1 + r] = s2[r];

	p[l1 + n] = '\0';

	return (p);
}
