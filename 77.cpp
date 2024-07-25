// Write a Program to sort Array of size 10 Asending order .

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
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

   for( i=0;i<10;i++)
    {
        cout<<" "<<a[i];
    }
     
    
    
}