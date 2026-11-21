#include <stdio.h>

int count = 0;

int check()
{
    count++;
    printf("Function called\n");
    return 1;
}

int main()
{
    int a = 0, b = 1;

    if (a && check())
    {
        printf("AND condition is true\n");
    }
    else
    {
        printf("AND condition is false\n");
    }

    printf("Function calls = %d\n", count);

    if (b || check())
    {
        printf("OR condition is true\n");
    }

    printf("Function calls = %d\n", count);

    return 0;
}
