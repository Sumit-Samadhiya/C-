// write a funtion to Calculate Sum of digit by Recursion;

#include<iostream>
using namespace std;

int Function(int n)
{
    int sum=0; 
    if(n<=0)
        return 0; 
    else 
        {
            int e=n%10;
            n=n/10;
            return e+Function(n); 

        }  
        
    
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;

    int c=Function(n);
    cout<<c;

}