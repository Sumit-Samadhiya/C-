// all prime number under 100

#include<iostream>
using namespace std;

int main()
{
    int i,j,n=100,c;

    for(i=2;i<n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            c=1;
            if(i%j==0)
            {
               c=0;
                break;
            }
            
                
        }
        if(c==1)
            cout<<" "<<i;
       
            
    }

}
    
    
    
    
    
    
    
    
 