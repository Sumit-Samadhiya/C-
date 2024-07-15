// number pattern
// 1
// 21
// 321
// 4321

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<"\n";  
    }
}

