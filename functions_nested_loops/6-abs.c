#include "main.h"
/**
 * _abs - a function
 * @abs: a variable
 * Return: return (-abs) if(abs >  0).
 */

int _abs(int abs)
{
	if (abs < 0)
		return (-abs);
	else
		return (abs);
}
