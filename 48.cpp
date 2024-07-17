// write function N odd number ;

#include<iostream>
using namespace std;

int odd(int n)
{
    for(int i=1;i<n*2;++i)
       {
        if(i&1)
            cout<<i;
       }
}

int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;

    odd(n);
    
   
}