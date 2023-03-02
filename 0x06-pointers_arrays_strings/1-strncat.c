#include "main.h"
/**
 * _strncat -  Concatenates two strings with the second strings n elements
 * @dest: First string pointer
 * @src: Second string pointer
 * @n: Integer parameter
 * Return: returns pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		if (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			i++;
		}
		else
			return (dest);
	}
	*(dest + i) = '\0';
	return (dest);
}
