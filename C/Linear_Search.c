#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main() {
    int n,i,item,flag;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    scanf("%d",&item);
    for(i=0;i<n-1;i++)
    {
        if(a[i]==item)
        {
            flag=i+1;
            break;
        }
        else
        {
        	flag=0;
		}
    }
    if(flag!=0)
    {
        printf("%d Found at %d",item,flag);
    }
    else
    {
        printf("%d is not found",item);
    }
}
