#include"main.h"
/**
* main - print _putchar
* is written by mbah
* Return: 0
*/
void ft_putstr(char *str)
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
