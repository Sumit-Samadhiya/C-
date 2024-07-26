//Write a program to matrix Multiplication;

#include<iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i,j,k;
    cout<<"Enter the elements of first matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"The  matrix is"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter the elements of Second matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Matrix Multiplication : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        c[i][j]=0;
        for(k=0;k<3;k++)
        {
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }

    }
    cout<<"The matrix is"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<c[i][j];
        }
        cout<<endl;
    }


}

