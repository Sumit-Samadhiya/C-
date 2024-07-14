//Armstrong number or not

#include<iostream>
using namespace std;

int main()
{
    int a,i,c,d=0,e;
    cout<<"Enter a number : ";
    cin>>a;
    e=a;
    while(a>0)
    {
        c=a%10;
        d=d+(c*c*c);
        a=a/10;
    }

    if(d==e)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not a armstong number";
    }
}