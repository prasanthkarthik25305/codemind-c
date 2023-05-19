#include<stdio.h>
int main(){
    int r,m,t;
    scanf("%d",&t);
 for(int i=0;i<t;i++){
     int s=0,n;
     scanf("%d",&n);
     m=n;
     while(n>0){
         r=n%10;
         s=s*10+r;
         n=n/10;
     }
     if(m==s){
         printf("True
");
     }
     else{
         printf("False
");
     }
 }
}