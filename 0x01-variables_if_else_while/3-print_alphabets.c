#include <stdio.h>
/**
 * main -  program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (secuss)
 */

int main(void)
{
	char b;
	char c;

	b = 'a';
	c = 'A';
	while (b <= 'z')
	{
		putchar (b);
		b++;
	}
	while (c <= 'z')
	{
		putchar (b);
		c++;
	}
	return (0);
}

