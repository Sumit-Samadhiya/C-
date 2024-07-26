// Write a program to transpose of a given matrix;

#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;
    cout<<"Enter number of row: ";
    cin>>r;
    cout<<"Enter number of coloum: ";
    cin>>c;
    int a[r][c];

    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter the row of "<<i<<" coloum of "<<j<<" :";
            cin>>a[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }

    cout<<"transpose a Matrix : \n";
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }

}