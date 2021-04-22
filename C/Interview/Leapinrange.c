#include<stdio.h>
int main()
{
	int i,l,h;
	printf("Enter the range: ");
	scanf("%d%d",&l,&h);
	for(i=l;i<=h;i++)
	{
		if((i%4==0)&&((i%100==0&&i%400==0)||(i%100!=0)))
		{
			printf("%d\n",i);
		}
	}
}
