#include <stdio.h>
#include <stdlib.h>

/**
 * _getline - reads the line from user
 * @lineptr: buffer
 * @nread: number of characters read
 *
 * Return: number of chars
 */
ssize_t _getline(char **s, size_t lim)
{
	char c;
	size_t i = 0;

	while (i < lim && (c = getchar()) != EOF && c != '\n')
	{
		if (c == ' ')
		{
			s++;
			*s[i] = '\0';
		}
		else
		{
			*s[i] = c;
		}
		i++;
	}
	*s[i] = '\0';
	return (i);
}
int main(void)
{
	/*int nbChars = 0;*/
	char **line = malloc(10 * (sizeof(char) * 50));
	
	printf("$ ");
	_getline(line, 20);
	printf("Result : %s\n", line);
	return (0);
}
