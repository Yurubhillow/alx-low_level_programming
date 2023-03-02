#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: String to be appended to
 * @src: String to be appended onto dest
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
