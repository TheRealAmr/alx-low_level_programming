#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    size_t n = 10;
    char *buffer;

    buffer = malloc(sizeof(char) * n);

    printf("$ ");
    getline(&buffer, &n, stdin);

    printf("Text written: %s\nBuffer size: %ld\n", buffer, n);

    free(buffer);

    return (0);
}
