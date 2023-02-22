#include "main.h"
/**
 * times_table - function printing multiples of 1 to 9 tables
 * Return: Always 0
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			if ((row * column) > 9)
			{
				_putchar((row * column) / 10 + '0');
				_putchar((row * column) % 10 + '0');
			}
			else if (column != 0)
			{
				_putchar(' ');
				_putchar((row * column) + '0');
			}
			else
				_putchar((column * row) + '0');
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
