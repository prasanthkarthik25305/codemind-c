#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s,k=0,c=0;
    for(int i=0;i<n;i++)
    k+=a[i];
    s=k/n;
    for(int i=0;i<n;i++){
        if(a[i]==s) c=1;
    }
    if(c==1){
        printf("True");
    }
    else{
        printf("False");
    }
}