#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to dest
 * @dest: Pointer to starting point
 * @src: Pointer to second memory area
 * @n: Number of bytes to be copied
 * Return: Returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
