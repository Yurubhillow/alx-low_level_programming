#include <stdio.h>
/**
 * main - Entry pointof the function
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int n = 'a';

	while (c < 10)
	{
		putchar((c % 10) + '0');
		c++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
