#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={15,18,5,3,6,2};
	int i,j,k;
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter the k value: ");
	scanf("%d",&k);	
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
	leader(a,n,k);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
}

int leader(int a[], int n,int k)
{
	int i;
	for(i=0;i<=k-1;i++)
	{
		swap(&a[n-i],&a[i]);
	}
}

int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	
}
