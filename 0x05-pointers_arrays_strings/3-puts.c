#include "main.h"
/**
 * _puts - function that prints a screen
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
