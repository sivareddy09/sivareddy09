#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m,n;
	int matrix[10][10];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter Element in [%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}

