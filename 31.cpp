//Armstrong number 1 to 1000

#include<iostream>
using namespace std;

int main()
{
    int a,i,c,d=0,e;
    
   for(i=1;i<1000;i++)
   {
    e=i;
    while(e>0)
    {
        c=e%10;
        d=d+(c*c*c);
        e=e/10;
    }
    if(d==i)
    {
        cout<<i;
    }

   }
    
}