#include "main.h"
/**
 * _islower - Checks if the alphabets are lowercase
 * @c: parameter to be checked
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

