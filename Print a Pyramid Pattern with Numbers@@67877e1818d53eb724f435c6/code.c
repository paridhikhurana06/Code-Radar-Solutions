#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int k = 1; k <= n - i; k++) {
            printf("  "); // Adjust spacing for better alignment
        }
        
        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}
