#include<stdio.h>
int  main(){
    int b,i,s=0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    for(i=0;i<b;i++){
         s+=a[i];
    }
    printf("%d",s);
}