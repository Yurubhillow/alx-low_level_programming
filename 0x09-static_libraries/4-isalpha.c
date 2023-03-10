#include "main.h"
/**
 * _isalpha - Checks if the alphabets are lowercase
 * @c: parameter to be checked
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
