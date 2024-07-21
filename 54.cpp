//write a function for Find N prime Number;

#include<iostream>
using namespace std;

int PrimeNumber(int n)
{
    int c=0,d=0;
    for(int i=2;i<n;i++)
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
    cout<<"Enter the Number: ";
    cin>>a;

    PrimeNumber(a);
    
}