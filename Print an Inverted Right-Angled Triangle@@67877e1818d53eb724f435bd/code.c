// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            printf("* ");
        }
            printf("\n");
        }
        
}