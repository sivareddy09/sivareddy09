#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<malloc.h>

int main()
{
	int T,t_i,i_w;
	scanf("%d",&T);
	for(t_i=0;t_i<T;t_i++)
	{
		int N,W;
		scanf("%d",&N);
		int i_w;
		int *w=(int *)malloc(sizeof(int)*(N));
		for(i_w=0;i_w<N;i_w++)
			scanf("%d", &w[i_w]);
		
		long long out_ = solve(N,W);
		printf("%lld", out_);
		printf("\n");
	}
}
long long solve(int N,int* W)
{
	int a,b,c,d;
	a=W[0]+W[1];
	b=W[2];
	c=W[3]+W[4];
	d=mod(a-b)+mod(a-c)+mod(b-c);
	return d;
}
