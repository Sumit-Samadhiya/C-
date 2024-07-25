// Write a Funtion to sort array is any size .


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

int sort(int a[],int n)
{
    int i,temp;
    for(i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int printArray(int a[],int n)
{
    int i;
    
    cout<<"Sorted Array : ";
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
    sort(a,n);
    printArray(a,n);
}