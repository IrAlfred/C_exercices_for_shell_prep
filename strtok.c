#include <stdio.h>
#include <stdbool.h>

char *_strtok(char *string, const char *delim)
{
	int i = 0, j = 0;
	bool found = false;

	while (!found && string[i] != '\0')
	{
		while (delim[j] != '\0')
		{
			if (string[i] == delim[
			j++;
		}
		i++;
	}

}

int main(void)
{
}
