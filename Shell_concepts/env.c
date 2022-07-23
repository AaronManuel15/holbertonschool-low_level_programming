#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/stat.h>
extern char **environ;

char *_getenv(const char *name)
{
    int i = 0, len = strlen(name);
    char *fail = "(null)", *copy;
    while (environ[i])
    {
        if (strncmp(name, environ[i], len) == 0)
        {
            copy = strdup(environ[i]);
            copy += ++len;
            return (copy);
        }
        i++;
    }
    return (fail);
}

int main(int ac, char **av, char **env)
{
    int i = 0;

    // while (environ[i])
    // {
    //     printf("%s\n", environ[i]);
    //     i++;
    // }


    printf("%p\n", &env[0]);
    printf("%p\n", &environ[0]);

    printf("getenv PATH : %s\n", getenv("PATH"));
    printf("getenv HOME : %s\n", getenv("HOME"));
    printf("getenv ROOT : %s\n", getenv("ROOT"));

    printf("_getenv PATH : %s\n", _getenv("PATH"));
    printf("_getenv HOME : %s\n", _getenv("HOME"));
    printf("_getenv ROOT : %s\n", _getenv("ROOT"));

    return (0);
}