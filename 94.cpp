// Write a program to count vowel of the given String.

#include<iostream>
using namespace std;

int vowel(char a[100],char c)
{
    int d=0,e=0;
    while(a[d] != '\0')
    {
        if(a[d] == 'a'||a[d]=='i'||a[d]=='o'||a[d]=='e'||a[d]=='u')
            e++;
        d++;
    }
   cout<<"Number of vowel is "<<e;
}

int main()
{
    char a[100];
    char c;
    cout<<"Enter a String : ";
    cin.getline(a,100);

   

    vowel(a,c);
    
    
    
}   