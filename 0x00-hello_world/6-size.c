#include <stdio.h>
/**
 * main - program that print the previous size of types of computers
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %i1 byte(s)\n", sizeof(char));
	printf("size of an int: %i4 byte(s)\n", sizeof(int));
	printf("size of a long int: %i4 byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i8 byte(s)\n", sizeof(long long int));
	printf("size of a float: %i4 byte(s)\n", sizeof(float));
	return (0);
}
