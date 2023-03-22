#include"main.h"
/**
* main - print _putchar ft_putstr
* str is string
* is written by mbah
* Return: 0
*/
/**
* ft_putstr - writes the string str to stdout
* @str: The string to print
*
* Return: void.
*/
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	ft_putstr("_putchar\n");
	return (0);
}
