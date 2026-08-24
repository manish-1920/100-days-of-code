#include <stdio.h>

int main() {
    long long n, reversed = 0, rem;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    long long temp = n;

    while (temp != 0) {
        rem = temp % 10;
        reversed = reversed * 10 + rem;
        temp /= 10;
    }

    printf("Reversed number is %lld\n", reversed);

    return 0;
}