/**
 * _memset - sets the first n bytes of the memory area pointed to by s to the
 * value of b
 *
 * @s: pointer to the memory area to be filled
 * @b: value to be set
 * @n: number of bytes to be filled
**/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    while (i < n)
        s[++i] = b;
    return s;
}