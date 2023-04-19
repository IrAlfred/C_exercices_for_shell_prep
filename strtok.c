#include <stdio.h>
#include <stdbool.h>

/**
 * _strchr - Search for the first occurence of a character
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the first occurence found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *f;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}
	if (*(s + i) == c)
	{
		f = &s[i];
	}
	else
	{
		f = NULL;
	}
	return (f);
}

char *_strtok(char *string, const char *delim)
{
	static char *next_token;
	char *current_token;
	bool found;
	if (string != NULL)
	{
		next_token = string;
	}

	/*Test if we are not at the end*/
	if (next_token == NULL)
	{
		return (NULL);
	}

	current_token = next_token;
	found = false;

	while (*next_token)
	{
		if (_strchr(delim, *next_token))
		{
			*next_token = '\0';
			next_token++;
			found = true;
			break;
		}
		next_token++;
	}

	if (!found)
	{
		next_token = NULL;
	}

	return (current_token);
}

int main(void)
{
	char str[] = "Welcome to UAC university";
	char *token = _strtok(str, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = _strtok(NULL, " ");
	}
	return (0);
}
