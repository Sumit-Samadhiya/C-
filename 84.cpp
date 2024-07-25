// Write a Funtion to First Occurance of Adjecnt duplicate values in the Array .

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

int Duplicate(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                return a[i];
            }

        }
    }
    return -1;
}




int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    int v=Duplicate(a,n);
    cout<<"The First Occurance of Adjecnt duplicate Value is :"<<v;
}