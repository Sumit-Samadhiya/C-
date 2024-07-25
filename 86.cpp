// Write a Funtion to print all unique element in the Array .

#include<iostream>
using namespace std;

int inputArray(int a[],int n)
{
    int i;
    cout<<"Enter Array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    } 
}

int unique(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    int count=0;
    for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                count++;
                cout<<a[i]<<" ";
            }
        }

   
}



int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    unique(a,n);
    
}