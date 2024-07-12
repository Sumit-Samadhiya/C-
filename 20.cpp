// sum of Cubes first n number.

#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	cout<<"Enter a number = ";
	cin>>n;
	
	for(i=0;i<=n;i++)
	{
			sum=sum+(i*i*i);
		
	}
	cout<<sum;
}
