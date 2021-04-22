#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d",fact(num));
}
int fact(int n)
{
	int i;
	if(n>=1)
		return n*fact(n-1);
	else
		return i;
}
