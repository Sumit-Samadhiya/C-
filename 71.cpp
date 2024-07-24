// Write a Program to Average of Numbers Stored in Array of size 10 .

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int sum=0;
    cout<<"Enter the Numbers";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    
    for(int i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The Average is = "<<sum/10;
    
}