//  Write a Funtion to merge two arrays of the same size sorted in decending order.

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

void mergeArray(int a[], int b[],int n)
{
    int i,j,k;
    int c[n*2];
    for(i=0;i<n;i++)
    {
        c[i]=a[i];

    }
    for(j=n;j<n*2;j++)
    {
        c[j]=b[j-n];
    }
    for(i=0;i<n*2;i++)
    {
        for(j=i+1;j<n*2;j++)
        {
            if(c[i]<c[j])
            {
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
                for(i=0;i<n*2;i++)
                {
                    cout<<c[i]<<" ";
                }

}

int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n],b[n];

    inputArray(a,n);
    inputArray(b,n);
    mergeArray(a,b,n);
}