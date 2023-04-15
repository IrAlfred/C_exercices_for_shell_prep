#include <stdio.h>

/**
 * _getline - reads the line from user
 * @lineptr: buffer
 * @nread: number of characters read
 *
 * Return: number of chars
 */
ssize_t _getline(char **lineptr, size_t *n)
{
	ssize_t index = 0;
	while (*lineptr[index] != '\n' && c != EOF)
	{
		*lineptr[index] = getchar();
		index++;
	}
	return (index);
}
int main(void)
{
	size_t nbChars;
	char **line = malloc(sizeof(char) * 50);
	
	printf("$ ");
	_getline(line, &nbChars);
	return (0);
}
