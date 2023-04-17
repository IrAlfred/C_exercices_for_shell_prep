#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(void)
{
	char **strings;
	int total = 0;
	char buffer[BUFFER_SIZE];

	length = 0;

	printf("Enter number of strings: ");
	scanf("%d", &total);

	while (getchar() != '\n');

	strings = malloc(total * sizeof(char *));
	printf("\n");

	for (int i = 0; i < total; i++)
	{
		printf("Enter string %d: ", i + 1);
		fgets(buffer, BUFFER_SIZE, stdin);
		length = strlen(buffer);
		buffer[length - 1] = '\0';

		strings[i] = malloc(length * sizeof(char));
		strcpy(strings[i], buffer);
	}

	printf("\nResulting strings array:\n\n");
	for(int i = 0; i < total; i++)
	{
		printf("strings[%d]: %s\n", i, strings[i]);
	}
	return (0);
}
