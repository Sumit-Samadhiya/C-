// swap number without third variable and arthmetic operator

#include<iostream>
using namespace std;

int main()
{
	int a,t,b;
	cout<<"Enter Two number a and b   ";
	cin>>a>>b;
	a=a^b;
    b=a^b;
    a=a^b;
	
	cout<<"a = "<<a<<" b = " <<b;
}
