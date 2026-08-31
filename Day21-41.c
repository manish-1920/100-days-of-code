/*
Q41 (Loops without Arrays/Strings)

Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>

int main()
{
    int n, first, last, digits = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the last digit
    last = n % 10;

    // Find the number of digits
    int temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    // Find the first digit
    first = temp;

    // Remove first and last digit
    middle = (n % digits) / 10;

    // Swap first and last digit
    result = last * digits + middle * 10 + first;

    printf("After swapping: %d", result);

    return 0;
}