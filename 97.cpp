// Write a program to given string into uppercase.

#include<iostream>
using namespace std;



void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
           
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

}

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

    // toUpperCase(a);
    // cout<<"UpperCase = "<<a;
    
    tolowercase(a);
    cout<<"UpperCase = "<<a;
    
    
}   