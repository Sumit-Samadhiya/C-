// write a funtion for Print Reverse Number by Recursion;

#include<iostream>
using namespace std;

int Function(int n)
{
    if(n<=0)
        return 0; 
    else 
        { 
           int e=n%10;
           n=n/10;
           cout<<e;
            Function(n);
              
        }
    
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;

    Function(n);


}