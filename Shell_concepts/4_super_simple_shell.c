#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int delimcount(char *buffer)
{
    int i = 0, count = 0;

    while (buffer[i])
    {
        if (buffer[i] == ' ')
            count++;
        if (buffer[i] == '\n')
            buffer[i] = '\0';
        i++;
    }
    count+=2;
    return (count);
}

int main(void)
{
    char *buffer = NULL, *token, **cmd;
    size_t bufsize = 0;
    pid_t childcheck;
    int i, status;

    while (1)
    {
        printf("($) ");
        getline(&buffer, &bufsize, stdin);
        if (strcmp(buffer, "exit\n") == 0)
        {
            free(buffer);
            return (0);
        }
        if (bufsize > 1)
        {
            cmd = malloc(sizeof(*cmd) * delimcount(buffer));
            token = strtok(buffer, " ");
            i = 0;
            while (token != NULL)
            {
                cmd[i] = token;
                token = strtok(NULL, " ");
                i++;
            }
            cmd[i] = NULL;
            childcheck = fork();
            if (childcheck == 0)
            {
                if (execve(cmd[0], cmd, NULL) == -1)
                {
                    printf("Child failed\n");
                    exit(1);
                }
            }
            wait(&status);
            free(cmd);
        }
        printf("%s\n", buffer);
        free(buffer);
        buffer = NULL;
        bufsize = 0;
    }
    return (1);
}