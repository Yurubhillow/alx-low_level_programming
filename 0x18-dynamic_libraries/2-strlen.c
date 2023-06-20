#include "main.h"
/**
 * _strlen - Find length of a string
 * @s: String input
 * Return: Always nothing
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
	{
		count++;
	}
	return (count);
}
