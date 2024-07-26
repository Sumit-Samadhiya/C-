// Write a program to Calculator the Sum of Two Mattrix each of Order 3*3;

#include<iostream>
using namespace std;

int main()
{

    int a[3][3],b[3][3],c[3][3];
    int i,j;

    cout<<"Enter the elements of first matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<"Enter the elements of Second matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The sum of two matrix is"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<c[i][j];
        }
        cout<<endl;
    }


}