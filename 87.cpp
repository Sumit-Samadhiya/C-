// Write a Funtion to count frequency of each element an Array .

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

int Frequency(int a[],int n)
{
    int i,j;
    int freq[n];
    for(i=0;i<n;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                freq[i]++;
            }
        }
    }
   for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<freq[i]<<endl;
    }
       
   
}



int main()
{
    int n;
    
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    int a[n];

    inputArray(a,n);
    Frequency(a,n);
    
}