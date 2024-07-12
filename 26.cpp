// Fibonacci N term series

#include<iostream>
using namespace std;

int main()
{
	int n, a,b,c;
	cout<<"Enter a number = ";
	cin>>n;
	
	a=-1;
	b=1;
	
	for(int i=1;i<=n;i++)
	{
		c=a+b;	
		a=b;
		b=c;
		cout<<c;
	}
	
	
}
