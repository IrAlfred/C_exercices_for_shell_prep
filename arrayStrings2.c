#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define INITIAL_CAPACITY 10

int main(void)
{
    char **strings = NULL;
    int capacity = 0;
    int total = 0;
    char buffer[BUFFER_SIZE];

    int length = 0;

    capacity = INITIAL_CAPACITY;
    strings = malloc(capacity * sizeof(char *));

    printf("Enter strings (press Enter to stop):\n");

    while (1) {
        printf("Enter string %d: ", total + 1);
        int c = getchar();
        if (c == '\n') {
            break;
        }
        int pos = 0;
        while (c != '\n' && c != EOF) {
            buffer[pos++] = c;
            c = getchar();
        }
        buffer[pos] = '\0';

        length = strlen(buffer);
        strings[total] = malloc((length + 1) * sizeof(char));
        strcpy(strings[total], buffer);
        total++;

        if (total >= capacity) {
            capacity *= 2;
            strings = realloc(strings, capacity * sizeof(char *));
        }
    }

    printf("\nResulting strings array:\n\n");
    for(int i = 0; i < total; i++)
    {
        printf("strings[%d]: %s\n", i, strings[i]);
    }
    return (0);
}
