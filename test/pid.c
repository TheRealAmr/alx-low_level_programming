#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
    char* executablePath = "./hi";
    char* const arguments[] = {executablePath, NULL};

    if (execv(executablePath, arguments) == -1) {
        perror("execv");
        return 1;
    }

    return 0;  // This line will never be reached if execv is successful
}