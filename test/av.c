#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int ac, char **av) {
    char **argv = av;

    while (*argv != NULL)
	{
        printf("%s ", *argv);
        argv++;
    }
	printf("\n");

    return (0);
}