#include <stdio.h>
#include <stdlib.h>

/**
 * _getline - reads the line from user
 * @lineptr: buffer
 * @nread: number of characters read
 *
 * Return: number of chars
 */
int _getline(char *s, int lim)
{
	char c;
	int i = 0;

	while (i < lim && (c = getchar()) != EOF && c != '\n')
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (i);
}
int main(void)
{
	/*int nbChars = 0;*/
	char *line = malloc(sizeof(char) * 50);
	
	printf("$ ");
	_getline(line, 20);
	return (0);
}
