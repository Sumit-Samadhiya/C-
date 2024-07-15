#include<iostream>
using namespace std;

int main()
{
    int e;
    cout<<"Enter day name : ";
    cin>>e;

    int a ,b, c;
    switch (e)
    {
    case 1:
        c=a+b;
        cout<<c;
        break;
    
    case 2:
        c=a-b;
        cout<<"
          " <<c;
        break;
    case 3:
        c=a*b;
        cout<<"Multiple "<<c;
        break;

    case 4:
        c=a/b;
        cout<<"division = "<<c;

        break;
    default:
        break;
    }
}