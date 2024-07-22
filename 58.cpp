// write a function Sum of 1!/1+ 2!/2 ...... n!/n;


#include<iostream>

using namespace std;

int Fact(int n)
{
    if(n<=0)
        return 1  ;
    else
        return n*Fact(n-1);
    
}

int CheckSum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=Fact(i)/i;
    }
    cout<<s;
}

int main()
{
    int n;
    cout<<"Enter a Number = ";
    cin>>n;

    CheckSum(n);
}