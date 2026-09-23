#include <stdio.h>
int greeting(const char *name);
int main(void)
{
    greeting("Developer A,B,C !!");
    farewell("Developer A,B,C");
    return 0;
}
// print a greeting message for the specified user
int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}

// Print a farewell message for the specified user
int farewell(const char *name)
{
printf("Goodbye, %s!\n", name);
return 0;
}
// vfd