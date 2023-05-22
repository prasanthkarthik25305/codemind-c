#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,x=0,y=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+2){
        x+=a[i];
    }
    for(i=1;i<n;i=i+2){
        y+=a[i];
    }
    if(abs(x-y)%4==0) printf("X");
    else printf("Y");
}