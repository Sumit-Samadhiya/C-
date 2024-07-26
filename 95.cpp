// Write a program to count space of the given String.

#include<iostream>
using namespace std;

int space(char a[100],char c)
{
    int d=0,e=0;
    while(a[d] != '\0')
    {
        if(a[d] == ' ')
            e++;
        d++;
    }
   cout<<"Number of space is "<<e;
}

int main()
{
    char a[100];
    char c;
    cout<<"Enter a String : ";
    cin.getline(a,100);

   

    space(a,c);
    
    
    
}   