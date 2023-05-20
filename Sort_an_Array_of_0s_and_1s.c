#include<stdio.h>
int main(){
    int n,count1=0,count0=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==0) count0++;
        else count1++;
    }
    for(int i=0;i<count0;i++)
    printf("0 ");
     for(int i=0;i<count1;i++)
    printf("1 ");
}