// takes days number as input and display name of days ;

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter day name : ";
    cin>>m;

    switch (m)
    {
    case 1:
        cout<<"Sunday";
        break;
     case 2:
        cout<<"mon";
        break;
     case 3:
        cout<<"tus";
        break;
     case 4:
        cout<<"wed";
        break;
     case 5:
        cout<<"Thu";
        break;
     case 6:
        cout<<"friday";
        break;
     case 7:
        cout<<"sat ";
        break;
    
    
    default:
        break;
    }

    
}