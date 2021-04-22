#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	printf("Enter a,b values: ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Values after swap: %d %d",a,b);
}
