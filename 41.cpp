// Calculator

#include<iostream>
using namespace std;

int main()
{
    int e;
    
    cout<<"Enter Expression: ";
    cin>>e;

    int a ,b, c;
    cout<<"Enter Two number :";
    cin>>a>>b;
    
    switch (e)
    {
    case 1:
        c=a+b;
        cout<<"ADDition = "<<c;
        break;
    
    case 2:
        c=a-b;
        cout<<"Subtraction = " <<c;
        break;

    case 3:
        c=a*b;
        cout<<"Multiple = "<<c;
        break;

    case 4:
        c=a/b;
        cout<<"division = "<<c;
        break;

    default:
        break;
    }
}