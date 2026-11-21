#include <stdio.h>

int main()
{
    float loan, rate, payment, interest;
    float balance;
    int month = 0;

    printf("Enter loan amount: ");
    scanf("%f", &loan);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    balance = loan;

    if (loan <= 0 || rate < 0 || payment <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("\nMonth\tInterest\tBalance\n");

    while (balance > 0)
    {
        interest = balance * rate / 1200;

        if (payment <= interest)
        {
            printf("Payment is insufficient to repay the loan\n");
            break;
        }

        balance = balance + interest - payment;

        if (balance < 0)
        {
            balance = 0;
        }

        month++;

        printf("%d\t%.2f\t\t%.2f\n",
               month, interest, balance);
    }

    if (balance == 0)
    {
        printf("\nLoan repaid in %d months\n", month);
    }

    return 0;
}
