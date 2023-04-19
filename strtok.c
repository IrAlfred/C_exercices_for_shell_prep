#include <stdio.h>
#include <stdbool.h>

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
		if (strchr(delim, *next_token))
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
	char *token = _strtok(str, ' ');
	while (token != NULL)
	{
		printf("%s\n", token);
		token = _strtok(NULL, ' ');
	}
	return (0);
}
