// prime number

#include<iostream>
using namespace std;

int main()
{
	int n,i,s=0,c=0,d=0;
	cout<<"Enter a number = ";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
			break;
		}
		else
			d++;
	}
	if(c==1)
		cout<<"not prime";
	else
	    cout<<"prime";
	
}
