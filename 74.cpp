// Write a Program to Find Smallest number Stored in Array of size 10 .

#include<iostream>
using namespace std;

int main()
{
    int a[10],i,j,temp;
    cout<<"Enter 10 Numbers : "<<endl;
    for(i=0;i<10;i++)
    {
        
        cin>>a[i];
    }

    int s=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]<s)
        {
           s=a[i]; 
        }
    }
    cout<<s;
}
    
    
