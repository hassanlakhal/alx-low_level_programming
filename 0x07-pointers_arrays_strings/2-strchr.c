#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[0])
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (s);
}
