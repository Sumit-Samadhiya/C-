// Write a Program to Find even numbers and sum of odd Numbers Stored in Array of size 10 .

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int Even=0,odd=0;
    cout<<"Enter the Numbers";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            Even=Even+a[i];
        else
            odd=odd+a[i];
    }
    cout<<"The Sum of Even is = "<<Even;
    cout<<"The Sum of Odd is = "<<odd;
    
}