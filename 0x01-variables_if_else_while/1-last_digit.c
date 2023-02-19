#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of a randomly generated number
 * and where it is greater than 5, less than 6 or 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and less than 6 not 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
