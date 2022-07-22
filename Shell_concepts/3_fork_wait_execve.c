#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t childcheck;
    int rep, status;
    char *cmd[] = {"/bin/ls", "-l", "/tmp", NULL};

    for (rep = 0; rep < 5; rep++)
    {
        childcheck = fork();

        if (childcheck == 0)
        {
            printf("this is a dumby child\n");
            execve(cmd[0], cmd, NULL);
        }
        wait(&status);
    }
    printf("This is the glorified parent\n");
    return (1);
}