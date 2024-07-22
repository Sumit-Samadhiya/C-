// write a funtion for Print Binary of a Given Decimal Number by Recursion;

#include<iostream>
using namespace std;

int Natural(int n)
{
    if(n<=0)
        return 0; 
    else 
        { 
            int e=n%2;
            n=n/2;
            cout<<e;
            Natural(n);
             
        }
    
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;

    Natural(n);


}