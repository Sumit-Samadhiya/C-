// write a funtion for Print Octal of a Given Decimal Number by Recursion;

#include<iostream>
using namespace std;

int Natural(int n)
{
    if(n<=0)
        return 0; 
    else 
        { 
            int e=n%8;
            n=n/8;
           
            Natural(n);
              cout<<e;
        }
    
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;

    Natural(n);


}