#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;
    int result;

    result = a + b * c;
    printf("Result 1 = %d\n", result);

    result = (a + b) * c;
    printf("Result 2 = %d\n", result);

    result = a - b - c;
    printf("Result 3 = %d\n", result);

    return 0;
}
