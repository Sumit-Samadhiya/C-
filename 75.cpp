// Write a Program to Find Second Gretest Number Stored in Array of size 10 .

#include<iostream>
using namespace std;

int main()
{
    int a[10],i;
    int temp;
    cout<<"Enter the Numbers";
    for( i=0;i<10;i++)
    {
        cin>>a[i];
    }
     
     
    
    for(i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Second Gretest Number = "<<a[1];
    
    
}