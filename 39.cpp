// takes month number as input and display number of days in that month;

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter a Month : ";
    cin>>m;

    switch (m)
    {
    case 1:
        cout<<"31 Days";
        break;
     case 2:
        cout<<"28 Days";
        break;
     case 3:
        cout<<"31 Days";
        break;
     case 4:
        cout<<"30 Days";
        break;
     case 5:
        cout<<"31 Days";
        break;
     case 6:
        cout<<"30 Days";
        break;
     case 7:
        cout<<"31 Days";
        break;
     case 8:
        cout<<"31 Days";
        break;
     case 9:
        cout<<"30 Days";
        break;
     case 10:
        cout<<"31 Days";
        break;
     case 11:
        cout<<"30 Days";
        break;
     case 12:
        cout<<"31 Days";
        break;
    
    default:
        break;
    }

    
}