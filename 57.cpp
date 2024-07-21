// write a function for all armstrong number;

#include<iostream>
using namespace std;

int Armstrong(int n)
{
    int result=n;
    int d=0;
    while(n>0)
    {
        int e=n%10;
        d+=e*e*e;
        n=n/10;
    }
    if(d==result)
    {
        cout<<"Armstrong";
    }
    else    
        cout<<"Not a Armstrong";
}

int main()
{
    int n;
    cout<<"Enter value: ";
    cin>>n;

    Armstrong(n);
}