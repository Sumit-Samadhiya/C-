// write a funtion to Calculate N term of Fibonacci Series by Recursion;

#include<iostream> 
using namespace std;

int Function(int n, int a,int b)
{
    
    if(n<=0)
        return 0; 
    else 
        {
           
           int c=a+b;
           a=b;
           b=c;
           cout<<b;
           Function(n-1,a,b);
           
        }  
        
    
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;
    int a=-1;
    int b=1;
    Function(n,a,b);
    
}