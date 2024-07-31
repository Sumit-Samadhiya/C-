

#include<iostream>
#include<string.h>
using namespace std;

char* trim(char a[])
{
    int i=0,j,k=0;
    char temp[100];
    
    while(a[i]==' ')
      i++;

    for(k,i;a[i]!='\0';i++,k++)
    {
        temp[k]=a[i];
    }
    j=strlen(a);
    for(i=j-1;temp[i]==' ';i--)
    {

        temp[i]='\0';
    }
   
    return temp;
}

int main()
{
    char a[100];
    cout<<"Enter a String : ";
    cin.getline(a,100);

    cout<<trim(a);

}
