#include<stdio.h>
int main(){
    int n,m,a=0,b=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<n;i++){
        if(n%i==0) a+=i; 
    }
    for(int i=1;i<m;i++){
        if(m%i==0) b+=i;
    }
    if(n==b && m==a)
    printf("Amicable");
    else
    printf("Not Amicable");
}