#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s,c=0;
    scanf("%d",&s);
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