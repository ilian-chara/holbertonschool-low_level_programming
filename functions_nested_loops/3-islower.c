#include <stdio.h>
#include "main.h"
/**
 *_islower -Verif si un caractere est en min
 *@c: Le caractere a verifier (code ASCII)
 *Return: c'est 1 si c'est une min et 0 sinon
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
