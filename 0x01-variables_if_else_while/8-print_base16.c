#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all the numbers of base 16 in lowercase'
 *Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i >= 10)
			putchar(i + 87);
		else
			putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
