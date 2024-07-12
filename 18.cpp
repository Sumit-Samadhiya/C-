// sum of first n odd number.

#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	cout<<"Enter a number= ";
	cin>>n;
	
	for(i=0;i<=n*2;i++)
	{
		if(i&1)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
}
