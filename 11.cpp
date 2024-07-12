//even or odd without % operator

#include<iostream>
using namespace std;

int main()
{
 int a;
	cout<<"enter a number : ";
	cin>>a;
	
	if((a/2)*2==a)
		cout<<"even";
	else
		cout<<"odd";
}
