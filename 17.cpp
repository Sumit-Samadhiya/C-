// sum of first n even number.

#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	cout<<"Enter a number= ";
	cin>>n;
	
	for(i=0;i<=n*2;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
}
