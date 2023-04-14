#include <stdio.h>

/**
 * main - displays the content of av array without using ac
 * @ac: number of arguments
 * av: string array
 *
 * Return: always 0.
 */
int main(int ac, char **av)
{
	while(*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
