#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
    int input = execve(argv[0], argv, NULL);

    if (input == -1)
        perror("ERROR");

    return (0);
}