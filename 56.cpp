//write a function for first N term of Fibonacci ;

#include<iostream>
using namespace std;

int Fibonacci(int a, int b, int n)
{
    for(int i=1; i<=n; i++)
    {
        int c=a+b;
        a=b;
        b=c;
        cout<<b;
    }
}

int main()
{
    int a=-1, b=1,n;
    cout<<"Enter value: ";
    cin>>n;
    Fibonacci(a,b,n);
}