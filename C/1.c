void push(int);
int pop();
int peek();
int isEmpty();
int isFull();
int traverse();
#include<stdio.h>
#define capacity 5
int stack[capacity],top=-1;
int main()
{
	int ch,item;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Quit\nEnter the Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the Element to push in to the stack: \n");
				   scanf("%d",&item);
				   push(item);
				   break;
			case 2:item=pop();
				   if(item==0)
				   {
				   	printf("Empty");
				   }
				   else
				   {
				   printf("Popped element is %d\n",item);
				   }
				   break;
			case 3:peek();
				   break;
			case 4:traverse();
				   break;
			case 5:exit(0);
		}
	}
}
void push(int ele)
{
	if(top==capacity-1)
	{
		printf("Stcak is Full\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("Pushed Element is %d\n",ele);
	}
}
int pop(int item)
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		item=stack[top--];
	}
}
int peek()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Top element is %d\n",stack[top]);
	}
}
int traverse()
{
	int i;
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
	for(i=0;i<=top;i++)
	{
		printf("%d\n",stack[i]);
	}
}
}
