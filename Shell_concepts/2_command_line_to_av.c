#include <string.h>
#include <stdio.h>

int main()
{
    char *token, teststring[100] = "This is my test string.";

    token = strtok(teststring, " ");

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return (0);
}