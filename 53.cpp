//write a function for given number is prime or not.

#include<iostream>
using namespace std;

bool PrimeNumber(int n)
{
    int c=0,d=0;
    for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
    return true;
   
}

int nextPrime(int n)
{
    int i=n+1;
    while(!PrimeNumber(i))
    {
        i++;
    }
    return i;
}


int main()
{
    int a,b,c;
    cout<<"Enter the Number: ";
    cin>>a;

    c=nextPrime(a);
    cout<<c;
}