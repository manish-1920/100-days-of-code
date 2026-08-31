/*
Q44 (Loops without Arrays/Strings)

Write a program to find the sum of the series:
1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n == 1)
    {
        sum = 1.0;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            int numerator = 2 * i - 1;
            int denominator = 2 * i;

            sum = sum + (float)numerator / denominator;
        }
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}