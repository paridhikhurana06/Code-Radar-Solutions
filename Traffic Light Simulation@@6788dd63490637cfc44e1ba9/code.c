#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case "R":
        printf("Stop");
        break;
        case "G":
        printf("Go");
        break;
        case "Y":
        printf("Y");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}