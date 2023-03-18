#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints the lowercase alphabets in reverse'
 *Return: Always 0
 */
int main(void)
{
	int letter;

	letter = 122;
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
