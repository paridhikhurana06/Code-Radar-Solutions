#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j=1;j<=n-i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}