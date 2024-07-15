 // tringles check  ;

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter Expression: ";
    cin>>m;

    int a,b,c;
    cout<<"Enter lenght of tringles sides : ";
    cin>>a>>b>>c;



    switch (m)
    {
    case 1:
        if(a==b || a==c || b==c)
        {
            cout<<"issosceles Tringle";
        }
        else{
            cout<<"not a issosceles tringle";
        }

    case 2:
        if((a*a)+(b*b)==c*c ||  (c*c)+(b*b)==a*a  || (a*a)+(c*c)==b*b )
        {
            cout<<"right angle tringle";
        }
        else
            cout<<"Not a right engle tringle";
    
    case 3:
        if(a==b && b==c)

        {
            cout<<"equilateral tringle";
        }
        else
            cout<<"not a equilateral ";
    
    default:
        break;
    }

    
}