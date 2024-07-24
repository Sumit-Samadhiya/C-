// Write a Program to Find Gretest Number Stored in Array of size 10 .

#include<iostream>
using namespace std;

int main()
{
    int a[10],i;
    cout<<"Enter the Numbers";
    for( i=0;i<10;i++)
    {
        cin>>a[i];
    }
     
     int greate;
    
    for(i=0;i<10;i++)
    {
        if(a[i]>a[i+1])
        {
            greate=a[i];
        }
    }
    cout<<"Gretest number is = "<<greate;
    
    
}