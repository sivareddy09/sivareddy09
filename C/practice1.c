#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,w_h,w_l;
	printf("Enter Wave_height and wave_length: ");
	scanf("%d%d",&w_h,&w_l);
	for(i=1;i<=w_h;i++)
	{
		for(j=1;j<=w_l;j++)
		{
			for(k=1;k<=w_h;k++)
			{
				if(i==k || i+k==w_h+1)
				{
					printf(">>");
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
	
}
