// Write a Program to Copy Elements in one Array to another Array, size is 10 .

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
     
    int b[10];
    
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
   cout<<"The Copied Array is : "<<endl;

   for( i=0;i<10;i++)
    {
       cout<<" "<<b[i];
    }
    
}