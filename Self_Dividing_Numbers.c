#include<stdio.h>
int main()
{
	int f,l,i,I,N,cnt1=0,cnt2=0;
	scanf("%d%d",&f,&l);
	for(i=f;i<=l;i++)
	{
		cnt2=0;
		cnt1=0;
		I=i;
		while(I!=0)
		{
			//printf("The Number Going To Check for Is: %d
",I);
			N=I%10;
			//printf("And The Digit Is: %d
",N);
			if(N==0) cnt1=cnt1;
			else
			{
				if(i%N==0)	
				{
					cnt1++;
					//printf("Cnt1 Has Increased!!! To: %d
",cnt1);
				}
			}
			cnt2++;
			I/=10;
		}
		if(cnt1 == cnt2)
		{
			//printf("Here Is A Number In Given Range Which Is Self-Divivding!
");
			printf("%d ",i);
		}
	}
}