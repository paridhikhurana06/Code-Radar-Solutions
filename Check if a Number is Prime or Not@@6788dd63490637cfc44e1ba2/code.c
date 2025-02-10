#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers must be greater than 1
    if (num <= 1) {
        printf("Not Prime\n");
    } 
    else {
        // Check divisibility from 2 to num-1
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }

        // Print the result
        if (isPrime)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }

    return 0;
}
