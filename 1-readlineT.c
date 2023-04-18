#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _getline - reads the line from user
 * @lineptr: buffer
 * @nread: number of characters read
 *
 * Return: number of chars
 */
ssize_t _getline(char **s, size_t lim)
{
	char c = 'c';
	size_t i = 0;
	int j;

	while (i < lim && c != EOF && c != '\n')
	{
		j = 0;
		s[i] = malloc(20 * sizeof(char));
		while ((c = getchar()) != ' ')
		{

			if (c == '\n')
			{
				break;
			}
			else if (c = EOF)
			{
				break;
			}
			else
			{
				s[i][j] = c;
			}
			j++;
		}
		s[i][j] = '\0';
		i++;
	}
	return (i);
}
int main(void)
{
	/*int nbChars = 0;*/
	char **line = malloc(sizeof(char *) * 10);
	int i = 0;
	printf("$ ");
	_getline(line, 20);
	while (line[i])
	{
		printf("Result : %s\n", *(line + i));
		i++;
	}
	return (0);
}
