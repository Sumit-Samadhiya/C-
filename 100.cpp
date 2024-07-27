// write a function to check whether a given string is palindrome or not.

#include<iostream>
using namespace std;

int pailndrome(char a[100])
{
    int i=0,j=0;

    while(a[i] != '\0')
    {
        i++;
    }
    i--;

    while(i>j)
    {
        if(a[j] != a[i])
        {
            return -1;
        }
        j++;
        i--;
    }
    return 1;
}

int main()
{
     char a[100];
    cout<<"Enter a string : ";
    cin.getline(a,100);

    int d=pailndrome(a);
    if(d==-1)
    {
        cout<<"not a palindrome";
    }
    else{
        cout<<" palindrome";
    }
}