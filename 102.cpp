// write a function to count word in string.


#include<iostream>
using namespace std;



int WordCount(char a[100])
{

   
    int i=0,j=0;

    while(a[i] != '\0')
    {
        if(a[i] == ' ')
        {
            j++;
        }
        i++;
    }
   cout<<j+1;
    
}

int main()
{
     char a[100];
    cout<<"Enter a string : ";
    cin.getline(a,100);

   WordCount(a);
    
}