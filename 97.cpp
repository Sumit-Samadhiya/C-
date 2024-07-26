// Write a program to given string into lowercase.

#include<iostream>
using namespace std;


void tolowercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        
        if (str[i] >= 'A' && str[i] <= 'Z') {
           
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }

}

int main()
{
    char a[100];
    char c;
    cout<<"Enter a String : ";
    cin.getline(a,100);

   
    
    tolowercase(a);
    cout<<"UpperCase = "<<a;
    
    
}   