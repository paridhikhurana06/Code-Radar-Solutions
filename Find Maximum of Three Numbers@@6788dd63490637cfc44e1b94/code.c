#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&& a>=c){
        print(a);
    }
    else if(b>=a&& b>=c){
        print(b);
    }
    else{
    printf(c);
    }
    return 0;
}