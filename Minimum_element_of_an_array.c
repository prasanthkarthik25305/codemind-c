#include<stdio.h>
int main(){
    int n,s,j=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[j])
        s=a[j];
        else
        s=a[i];
        j++;
    }
    printf("%d",s);
}