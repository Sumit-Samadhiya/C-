// Write a Funtion to Find Smallest Number from the given array is any size .


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

int Findmin(int a[],int n)
{
    int i,min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    int max=Findmin(a,n);
    cout<<"The Smallest Number is : "<<max;
}