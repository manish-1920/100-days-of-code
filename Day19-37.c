// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        max = a;
    else
        max = b;

    lcm = max;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
            break;

        lcm++;
    }

    printf("LCM of %d and %d = %d", a, b, lcm);

    return 0;
}