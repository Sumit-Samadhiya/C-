//write a function for all prime factors in the given Number.

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
		return 0;
    else 
        return 1;
	
}

int factor(int n)
{
    int e;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            e=PrimeNumber(i);
        }
       if(e==1)
        cout<<" "<<i;
        
    }
}

int main()
{
    int a,b,c;
    cout<<"Enter the Number: ";
    cin>>a;

    factor(a);
}