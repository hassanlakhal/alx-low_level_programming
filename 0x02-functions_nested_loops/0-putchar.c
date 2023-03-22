#include"main.h"
/**
* main - print _putchar ft_putstr
* str is string
* is written by mbah
* Return: 0
*/
/**
* ft_putstr - writes a string to standard output
* @str: the string to be written
*
* This function writes the string pointed to by 'str' to the standard output stream.
* If the string contains null characters, the output will be truncated at the first null
* character encountered. There is no return value.
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
