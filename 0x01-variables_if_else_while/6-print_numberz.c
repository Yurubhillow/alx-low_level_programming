#include <stdio.h>
/**
 * main - Entry point
 * Return: ALways 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar((c++ % 10) + '0');
	}
	putchar('\n');
	return (0);
}
