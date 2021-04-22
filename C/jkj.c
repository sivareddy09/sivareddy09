#include<stdio.h>
int fact(int g)
{
	if(g==0)
	return 1;
	else if(g<0)
	return 0;
	else
	{
	  
	int b[g+1],i;
	b[0]=1;
	b[1]=2;
	for(i=2;i<=g;i++)
	{
		b[i]=b[i-1]+b[i-2];
	}
	return b[g];
}
}
int main()
{
	int t,a,i;
	scanf("%d",&t);
	int x[t],h=t;
	while(t>0)
	{
		scanf("%d",&a);
		x[h-t]=fact(a);
		t--;	
	}
	for(i=0;i<h;i++)
	printf("%d\n",x[i]);
	return 0;
}
