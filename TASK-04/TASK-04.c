#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade A\n");
    }
    else if (marks >= 75 && marks < 90)
    {
        printf("Grade B\n");
    }
    else if (marks >= 50 && marks < 75)
    {
        printf("Grade C\n");
    }
    else if (marks >= 0 && marks < 50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid marks\n");
    }

    return 0;
}
