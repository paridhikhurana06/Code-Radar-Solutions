#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime\n");
    } 
    else {
                for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }

    
}
