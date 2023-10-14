#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    (void)ac;

    for (i = 1; av[i] != NULL; i++)
        printf("%s ", av[i]);
    printf("\n");

    return (0);
}
