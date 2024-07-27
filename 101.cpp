// write a function to trim string .

#include<iostream>
using namespace std;

int Trim(char a[100])
{
    int i=0,j=0;

    while(a[i] != '\0')
    {
        i++;
    }
    i--;

    while(a[j] == ' ')
    {
        j++;
    }
   
    while(a[i] == ' ')
    {
        i--;
    }
    
    for(int k=j; k<=i; k++)
    {
        cout<<a[k];
        a[k] = a[j];
    }



    

    
}

int main()
{
     char a[100];
    cout<<"Enter a string : ";
    cin.getline(a,100);

    Trim(a);
    
}