// swap number in single expression

#include<iostream>
using namespace std;

int main()
{
	int a,t,b;
	cout<<"Enter Two number a and b  ";
	cin>>a>>b;
	
	a=a+b-(a=b);
	
	cout<<"a = "<<a<<" b = " <<b;
}
