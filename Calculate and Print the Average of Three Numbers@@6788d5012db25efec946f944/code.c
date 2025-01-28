#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    scanf("%f %f %f",&a,&b,&c);
    float c=a+b+c/3;
    printf("Average: %.2f", c);
    return 0;
}