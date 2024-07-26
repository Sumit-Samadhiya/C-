// write a program to reverse a String.

#include<iostream>
using namespace std;

void reverse(char a[100])
{
    int i=0,j=0;

    while(a[i] != '\0')
    {
        i++;
    } 
    i--;

    while(i>j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;

        j++;
        i--;
    }
}

int main()
{
    char a[100];
    cout<<"Enter the string ";
    cin.getline(a,100);

    reverse(a);
    cout<<a;


}