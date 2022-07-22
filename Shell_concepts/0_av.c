#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{   
    (void)ac;
    int i = 1;

    while (av[i])
    {
        printf("%s\n", av[i]);
        i++;
    }
}