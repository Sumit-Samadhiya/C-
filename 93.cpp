// Write a program to occrance of a given character of the given String .

#include<iostream>
using namespace std;

int occrance(char a[100],char c)
{
    int d=0,e=0;
    while(a[d] != '\0')
    {
        if(a[d] == c)
        {
            e++;
        }
        d++;
    }
   cout<<"Number of occrance is "<<e;
}

int main()
{
    char a[100];
    char c;
    cout<<"Enter a String : ";
    cin.getline(a,100);

    cout<<"Enter a Char : ";
    cin>>c;

    occrance(a,c);
    
    
    
}   