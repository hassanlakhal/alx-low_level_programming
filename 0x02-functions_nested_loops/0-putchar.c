#include"main.h"
/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */
void ft_putstr(char *str)
{
    while(str[i])
        _putchar(str[i++]);
}
int main(void)
{
    ft_putstr("_putchar\n");
    return (0);
}