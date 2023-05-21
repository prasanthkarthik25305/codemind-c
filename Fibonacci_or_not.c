#include<stdio.h>
int main(){
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    while(n>c){
        a=b;
        b=c;
        c=a+b;
        if(c==n) break;
    }
  if(c==n){
      printf("True");
  }
  else{
      printf("False");
  }
}