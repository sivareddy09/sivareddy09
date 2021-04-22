#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
