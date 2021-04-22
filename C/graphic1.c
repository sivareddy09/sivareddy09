#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	bar(100,100,200,400);
	circle(400,250,50);
	getch();
	closegraph();
	return 0;
}
