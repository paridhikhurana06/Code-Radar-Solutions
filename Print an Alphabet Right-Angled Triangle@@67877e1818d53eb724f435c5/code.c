#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a = 1;  // Reset a for each row
        for (int j = 1; j <= i; j++) {
            char ch = (char)(a + 64);  // Convert to uppercase letter
            printf("%c ", ch);
            a++;  // Increment a to get next letter
        }
        printf("\n");
    }
    
    return 0;
}
