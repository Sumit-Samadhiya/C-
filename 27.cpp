// given nuber in the Fibonacci series or not

#include<iostream>
using namespace std;

int main()
{
	int n, a,b,c,d=0;
	cout<<"Enter a number = ";
	cin>>n;
	
	a=-1;
	b=1;
	
	for(int i=1;i<=n+5;i++)
	{
		c=a+b;	
		a=b;
		b=c;
		if(n==c)
			d++;
	}
	if(d==1)
	{
		cout<<"in fibonacci Series";
	}
	else
		cout<<"not in the fibonacci Series";
	
	
}
