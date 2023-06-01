#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int c=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i=i+2){
        if(a[i]%2!=0) c=0;
    }
    if(c==0) printf("False");
    else printf("True");
}