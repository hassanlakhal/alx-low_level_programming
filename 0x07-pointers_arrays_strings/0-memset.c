#include "main.h"

/**
* _memset - sets the first n bytes of the memory area pointed to by s to the
* value of b
* @s: pointer to the memory area to be filled
* @b: value to be set
* @n: number of bytes to be filled
*
* Return: change array whit new value for n byte
*/

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (i < n)
		s[++i] = b;

	return s;
}
