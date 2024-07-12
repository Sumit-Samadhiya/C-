// reverse number

#include<iostream>
using namespace std;

int main()
{
	int n,i,r;
	cout<<"Enter a number= ";
	cin>>n;
	
	for(i=1;i<n;i++)
	{
			r=n%10;
			cout<<r;
			n=n/10;
			
	}
	cout<<n;
}
