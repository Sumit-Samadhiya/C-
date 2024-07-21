//write a function for given digit in the number or not.

#include<iostream>
using namespace std;

int checkNumber(int n,int d)
{
    for(int i=1;i<n;i++)
    {
        int e=n%10;
        if(e==d)
            return 1;
        else
            n=n/12;
        
    }

}

int main()
{
    int a,b,c;
    cout<<"Enter a Number: ";
    cin>>a;
    cout<<"Enter a digit: ";
    cin>>b;
    c=checkNumber(a,b);
    if(c==1)
        cout<<"Digit in the number";
    else
        cout<<"Digit not in the number";
}