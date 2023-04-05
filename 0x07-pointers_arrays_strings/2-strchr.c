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
	int i = -1;

	while (++i && s[i])
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}