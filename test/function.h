#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <ctype.h>

// void arguments(int ac, char *av)
// {
//     char *argv = av;
//     int i;

//     while (*argv != '\0')
//     {
//         printf("%c", *argv);
//         argv++;
//     }

//     char *tokenizer = strtok(av, " ");

//     char *args[ac + 1];

//     args[0] = tokenizer;

//     for (i = 1; i < ac; i++)
//     {
//         args[i] = strtok(NULL, " ");
//     }

//     args[ac] = NULL;

//     char *env[] = { NULL };

//     int input = execve(tokenizer, args, env);

//     if (input == -1)
//         perror("ERROR");
//         exit(1);
// }

void arguments(int ac, char *command)
{
    (void)ac;

    char *tokenizer = strtok(command, " ");
    
    char *args[20];  // Define an array to hold the command and its arguments
    int i = 0;
    
    args[i++] = tokenizer;  // The first argument is the command
    
    // Tokenize the rest of the string for arguments
    while (tokenizer != NULL) {
        tokenizer = strtok(NULL, " ");
        args[i++] = tokenizer;
    }
    args[i] = NULL;  // Ensure the last element is NULL
    
    char *env[] = { NULL };
    
    int input = execve(args[0], args, env);
    
    if (input == -1) {
        perror("ERROR");
        exit(1);
    }
}
