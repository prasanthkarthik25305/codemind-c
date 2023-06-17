#include<stdio.h>
int main(){
    int n,j=1;
    float s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s+=(float)j/i;
    }
    printf("%.2f",s);
}