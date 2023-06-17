#include<stdio.h>
int main(){
    int t,n,m,c=0;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        scanf("%d%d",&n,&m);
        for(int j=n;j<=m;j++){
            if(j%10==2 ||j%10==3||j%10==9) c++;
        }
        printf("%d
",c);
        c=0;
    }
}