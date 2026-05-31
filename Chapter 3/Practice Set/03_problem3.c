#include <stdio.h>
/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
2.5 – 5.0L ->  5%
5.0L - 10.0L -> 20%
Above 10.0L ->  30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
int main()
{
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000); // 5% tax on income above 2.5 lakh
    }
    else if (income <= 1000000)
    {
        tax = 0.05 * 250000 + 0.20 * (income - 500000); // 5% tax on 2.5L to 5L and 20% tax on income above 5L
    }
    else if (income > 1000000)
    {
        tax = 0.05 * 250000 + 0.20 * 500000 + 0.30 * (income - 1000000); // 5% tax on 2.5L to 5L, 20% tax on 5L to 10L and 30% tax on income above 10L
    }

    printf("Total tax payable = %.2f", tax);

    return 0;
}