#include "main.h"
/**
 * _abs - Prints the absolute interger
 * @n: Number to compute
 * Return: n* -1 if number is negative, other cases return n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
