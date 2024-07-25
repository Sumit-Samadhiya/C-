// Write a Funtion to Find total duplicate values in the Array .

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
    int c=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }

        }
    }
    return c;
}



int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    int v=Duplicate(a,n);
    cout<<"The total duplicate Values is :"<<v;
}