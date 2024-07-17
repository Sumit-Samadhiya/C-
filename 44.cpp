//write function for area of a circle;

#include<iostream>
using namespace std;

int circle(double r)
{
    
            const double PI = 3.14159;
           
            double area = PI * r * r;
            return area;
}

int main()
{
     double r;
     cout<<"Enter the radius of a circle ";
     cin>>r; 

    double area=circle(r);
    cout << "Area of the circle is " << area << endl;


}