#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a=0,b=1,c,n;
	cout<<"Enter n number of values: ";
	cin>>n;
	cout<<a<<"\n";
	cout<<b<<"\n";
	for(int i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<"\n";
	}
}
