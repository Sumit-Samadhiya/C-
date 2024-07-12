//leap year

#include<iostream>
using namespace std;

int main()
{
 int a,b;
	cout<<"enter a year  : ";
	cin>>a;
	
	if(a%100==0)
	{
		if(a%400==0)
		{
			cout<<"leap year";
		}
		else
			cout<<"not a leap year";
	}
	else if(a%4==0)
		cout<<"leap year";
	else
		cout<<"not a leap year";	
}
