#include <stdio.h>
int greeting(const char *name);
int main(void)
{
    greeting("Developer A,B,C !!");
    return 0;
}
// print a greeting message for the specified user
int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}