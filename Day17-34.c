/*
Q34 (Loops without Arrays/Strings)

Write a program to check if a number is prime.
*/

#include <stdio.h>

int main() {
    int n, i = 2;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n / 2) {
        if (n % i == 0) {
            count++;
            break;
        }
        i++;
    }

    if (n > 1 && count == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}