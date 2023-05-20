#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==0 && m%2==0){
        printf("YES");
    }
    else if(n==0 && m%2!=0){
        printf("NO");
    }
    else if((n+(2*m))%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}