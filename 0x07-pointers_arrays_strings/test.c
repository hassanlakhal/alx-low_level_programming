#include <stdio.h>
#include <stdlib.h>
/*#include "main.h"*/
/**
* main - multiply 2 numbers as arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	unsigned long res;
	int i, j;
	char NULL;
	i = 1;
	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		i++;
	}
	res = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", res);
	return (0);
}