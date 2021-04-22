void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();
#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
int main()
{
	int ch,item;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Quit\nEnter Choice: ");
		scanf("%d\n",&ch);
		switch(ch)
		{
			case 1:printf("Enter the Element: ");
				   scanf("%d",&item);
				   push(item);
				   break;
			case 2:item==pop();
				   if(item==0)
				   {
				   	printf("Stack is underflolw\n");
				   }
				   else
				   {
				   	printf("Popped Element is %d\n",item);
				   }
				   break;
			case 3:peek();
				   break;
			case 4:traverse();
				   break;
			case 5:printf("Exiting....\n");
			default:printf("Invalid Input\n");
		}
	}
}
void push(int ele)
{
	if(top==CAPACITY-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d is pushed into stack\n",ele);
	}
}
int pop(int item)
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		item=stack[top--];
		printf("%d is popped from the stack\n",item);
	}
}/*
int isFull()
{
	if(top==CAPACITY-1)
	{
		printf("stack is full\n");
	}
	else
	{
		return 1;
	}
}
int isEmpty()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		return 0;
	}
}*/
void peek()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("%d is at the top\n",stack[top]);
	}
}
void traverse()
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
