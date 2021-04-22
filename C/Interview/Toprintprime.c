#include<stdio.h>
int main()
{
	int n,i,l,h,count;
	printf("Enter the Range: ");
	scanf("%d%d",&l,&h);
	for(n=l;n<=h;n++)
	{
		count=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				count++;
				break;
			}
		}
	if(count==0&&n!=0)
		printf("%d\n",n);
	}
}
