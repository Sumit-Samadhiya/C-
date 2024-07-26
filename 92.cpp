// Write a program to calculate the lenght of the String .

#include<iostream>
using namespace std;

int main()
{
    char a[100];

    cout<<"Enter a String : ";
    cin.getline(a,100);

     int c=0;
    while(a[c] !='\0')
    {
        c++;
    }

    cout<<c;
}   