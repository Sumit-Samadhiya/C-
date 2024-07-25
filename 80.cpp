// Write a Funtion to Find Gretest Number from the given array is any size .


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

int Findmax(int a[],int n)
{
    int i,max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    int max=Findmax(a,n);
    cout<<"The Gretest Number is : "<<max;
}