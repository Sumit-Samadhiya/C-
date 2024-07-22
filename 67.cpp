// write a funtion to Calculate Sum of N natural Number by Recursion;

#include<iostream>
using namespace std;

int Function(int n)
{
    int sum=0; 
    if(n<=0)
        return 0; 
    else 
          
         return n+Function(n-1);   
        
    
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;

    int c=Function(n);
    cout<<c;

}