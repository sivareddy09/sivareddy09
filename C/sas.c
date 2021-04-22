#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a=100;
	char* x=(char*)&a;
	char** y=&x;
	y[0]=(char*)0x62fe14;
	printf("%x\n",x);
	printf("%x",*y);
}
