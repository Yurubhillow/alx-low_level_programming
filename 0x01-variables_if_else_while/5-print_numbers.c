#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		printf("%d", c++);
	}
	putchar('\n');
	return (0);
}
