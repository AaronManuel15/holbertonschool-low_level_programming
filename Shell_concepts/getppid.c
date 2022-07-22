#include <stdio.h>
#include <unistd.h>

int main(void)
{   
    printf("PID: %d\nPPID: %d\n", getpid(), getppid());
}