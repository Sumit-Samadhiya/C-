// write a functionn to find characters in the betwee of two indices .

#include<iostream>
using namespace std;

int function(char a[100], int b, int d, int n)
{
    for(int i=b;i<d;i++)
    {
        if(a[i]== n)
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    char a[100];
    cout<<"Enter a string : ";
    cin.getline(a,100);

    int b,d;
    char n;
    cout<<"Enter indexes : ";
    cin>>b>>d;

    cout<<"Enter character = ";
    cin>>n;

    int index=function(a,b,d,n);

    if (index != -1) {
        cout << "Character '" << n << " found ." << endl;
    } else {
        cout << "Character '" << n << " not found ";
    }
}