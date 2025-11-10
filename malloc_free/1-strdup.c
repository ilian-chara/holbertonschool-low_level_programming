#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - copy a string with new malloc
* @str: original from copy
* Return: NULL if there's no memory. else, return cp
*/

char *_strdup(char *str)
{
	int e, len = 0;
	char *cp;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
	return (NULL);

	for (e = 0; e < len; e++)
	cp[e] = str[e];

	cp[e] = '\0';

	return (cp);
}
