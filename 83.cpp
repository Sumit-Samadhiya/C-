// Write a Funtion to Swap two elements of given Array with specified indices.

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

int Swap(int a[],int n)
{
    int i,j,temp;
    cout<<"Enter the index of two elements to be swapped : ";
    cin>>i>>j;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    
}


int printArray(int a[],int n)
{
    int i;
    
    cout<<"Swapped Array : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    Swap(a,n);
    printArray(a,n);
}