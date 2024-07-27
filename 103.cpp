// write a function to do case insenstive compersion in string.


#include<iostream>
using namespace std;


void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        
        if(str[i] >= 'a' && str[i] <= 'z') {
           
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

}
bool isCom(char a[100], char b[100])
{

    
    int i=0;
    while(a[i] != '\0')
    {
        i++;
    }
   
   
   
   for(int j=0;j<=i;j++)
   {
    if(toupper(a[i]) != toupper(b[i]))
    {
        return false;
    }

   }
    return true;
}

int main()
{
     char a[100],b[100];
    cout<<"Enter a string : ";
    cin.getline(a,100);

    cout<<"Enter Second string : ";
    cin.getline(b,100);
    
    int d=isCom(a,b);
    if(d==1)
    {
        cout<<"Good";
    }
    else{
        cout<<"Bad";
    }
}