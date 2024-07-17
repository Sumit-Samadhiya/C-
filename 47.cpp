// write function N natural Number ;

#include<iostream>
using namespace std;

int Natural(int n)
{
    for(int i=1;i<=n;i++)
        cout<<i;
}

int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;

    cout<<Natural(n);
    
   
}