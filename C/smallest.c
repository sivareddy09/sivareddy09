#include<stdio.h>
int main()
{
	int a,A[10],b,i,j,temp;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&A[i]);

	}
	scanf("%d",&b);
	for(i=0;i<=a-1;i++)
	{
		for(j=0;j<a-i-1;j++)
		{
		
		if(A[i]<A[i+1])
		{
		temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
	}
		}
	}
	printf("%d",A[b-1]);
	 
}
