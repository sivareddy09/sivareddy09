#include<stdio.h>
int main()
{
	int i,f,n;
	printf("%d%d%d",i,n,f);
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
