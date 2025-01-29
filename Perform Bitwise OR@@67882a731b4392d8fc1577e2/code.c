#include <stdio.h>

int main() {
    int a;
    int b;
    scan("%d %d",&a,&b);
    int c=a|b;
    printf("%d",c);
    return 0;
}