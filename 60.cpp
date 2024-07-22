// write a funtion for Print N Natural Number in Reverse Order by Recursion;

#include<iostream>
using namespace std;

int Natural(int n)
{
    if(n<=0)
        return 0;
    else
        {
            cout<<n;
            Natural(n-1);
        }
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;

    Natural(n);


}