//write a function for Find prime Number between two numbers;

#include<iostream>
using namespace std;

int PrimeNumber(int n, int s)
{
    int c=0,d=0;
    for(int i=n;i<s;i++)
	{ 
        c=0;
		for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
            
        }
        if(c==0)
        {
            cout<<i;
        }
	}
  
	
}



int main()
{
    int a,b,c;
    cout<<"Enter Start: ";
    cin>>a;
    cout<<"Enter End: ";
    cin>>b;

    PrimeNumber(a,b);
    
}