#include<stdio.h>
int main()
{
	int n,a=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d\n",fib(a));
	a++;
	}
}
int fib(n)
{
	if(n>1)
	{
		return (fib(n-1)+fib(n-2));
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
