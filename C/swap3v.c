#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	scanf("Enter a,b values:%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a:%d,b:%d",a,b);
}
