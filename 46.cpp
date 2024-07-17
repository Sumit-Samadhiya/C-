// write function for even or odd ;

#include<iostream>
using namespace std;

int evenOdd(int n)
{
    if((n/2)*2==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;

    int r= evenOdd(n);
    
    if(r==1)
        cout<<"Even";
    else
        cout<<"odd";
}