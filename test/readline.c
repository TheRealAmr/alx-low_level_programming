#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "function.h"

int main(int ac, char **av)
{
    size_t n = 10;
    char *buffer;
    char *test;
    int id;
    char *command = "/bin/ls";

    buffer = malloc(sizeof(char) * n);

    printf("$ ");
    getline(&buffer, &n, stdin);

    id = fork();

    // Child Process:
    if (id == 0)
    {
        test = buffer;
        //printf("%s", test);
        arguments(ac, buffer);
    }

    wait(NULL);
    free(buffer);

    return (0);
}