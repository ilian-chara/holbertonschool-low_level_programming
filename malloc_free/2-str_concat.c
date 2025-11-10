#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concatenate two strings
* @s1: first string of char
* @s2: second string of char
* Return: NULL if no memory else return the two concatenate strings
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, e, r;
	char *p;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	return (NULL);

	for (e = 0; e < len1; e++)
	p[e] = s1[e];
	for (r = 0; r < len2; r++)
	p[len1 + r] = s2[r];

	p[len1 + len2] = '\0';

	return (p);
}
