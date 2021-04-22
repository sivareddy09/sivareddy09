#include<stdio.h>
int fact(int g)
{
	if(g==0)
	return 1;
	else if(g<0)
	return 0;
	else
	return fact(g-1)+fact(g-2)+fact(g-3);
	
}
int main()
{
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&a);
		printf("%d\n",fact(a+1));
		t--;
		
	}
}
