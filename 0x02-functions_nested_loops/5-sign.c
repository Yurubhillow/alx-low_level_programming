#include "main.h"
/**
 * print_sign - prints whether a number is positive or negative
 * @n: Number to be checked
 * Return: 1 if n greater than zero or 0 if no is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
