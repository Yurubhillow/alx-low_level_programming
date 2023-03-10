#include "main.h"
/**
 * _strchr - Returns pointer to first occurence of a character
 * @s: POinter to a string
 * @c: Character to be searched
 * Return: Returns a pointer to found string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
