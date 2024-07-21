//write a function for given number is prime or not.

#include<iostream>
using namespace std;

int PrimeNumber(int n)
{
    int c=0,d=0;
    for(int i=2;i<n;i++)
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
        cout<<"Not a prime Number";
    else    
        cout<<"Prime Number";
	
}


int main()
{
    int a,b,c;
    cout<<"Enter the Number: ";
    cin>>a;

    PrimeNumber(a);
}