//write function to calculate the number of combinations one make from n items and r selected at a time ;

#include <iostream>
using namespace std;

long fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}


long combination(int n,int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}


int main() {
    int n ,r;
    cout<<"Enter n and r : ";
    cin>>n>>r;

    cout<<combination(n,r);
}


