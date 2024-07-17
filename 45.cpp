// write function for simple interest;


#include<iostream>
using namespace std;

int interest(int p,int r, int t)
{
    int s;
    s=(p*r*t)/100;
    return s;
}

int main()
{
     double p,r,t;
     cout<<"Enter the P and r and t ";
     cin>>p>>r>>t; 

    double intrest=interest(p,r,t);
    cout << "simple intrest is " << intrest << endl;


}