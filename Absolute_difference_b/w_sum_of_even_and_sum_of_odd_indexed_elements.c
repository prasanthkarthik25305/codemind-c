#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,s=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            s+=a[i];
        }
        else{
            m+=a[i];
        }
    }
    printf("%d",abs(s-m));
}