#include <stdio.h>
int main(int argc, char *argv[])
{
    int argNo = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Number of arguments is %d\n", argNo);

    printf("Program name: %s \n\n", arg1);

    printf("argument: %s \n\n", arg2);

    return 0;
}
