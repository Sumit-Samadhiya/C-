// star pattern
//      *
//     **
//    ***
//   ****

#include<iostream>
using namespace std;

int main()
{
    int i,j,s=1;
    for(i=5;i>1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=s; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
        s++;
    }
}