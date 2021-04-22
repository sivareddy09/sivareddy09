#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void solution(int N)
{
	int i,b,c,d;
	int P[10];
	P[0]=N%10;
	P[1]=(N/10)+P[0];
	int S[]={1,2,3,4,6,12};
	for(i=1;i<6;i++)
	{
		if(P[0]%S[i]==2)
		{
			b=b+1;
		}
	}
	for(i=0;i<6;i++)
	{
		if(P[1]%S[i]==3)
		{
			c=c+1;
		}
	}
	d=((b-1)*c)%1000003;
	printf("%d",d);
}
int main()
{
	int N;
	scanf("%d",&N);
	solution(N);
	return 0;
}
