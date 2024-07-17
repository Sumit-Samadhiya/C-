// Factorial of a number .
// even or odd.
// Area of circle.
// Sum of first n number.


#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select an option:\n";
    cout << "1. Factorial of a number\n";
    cout << "2. Even or odd\n";
    cout << "3. Area of a circle\n";
    cout << "4. Sum of first n numbers\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int num, fact = 1;
            cout << "Enter a number: ";
            cin >> num;
            for (int i = 1; i <= num; ++i) {
                fact *= i;
            }
            cout << "Factorial of " << num << " is " << fact << endl;
            break;
        }
        case 2: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << num << " is even." << endl;
            } else {
                cout << num << " is odd." << endl;
            }
            break;
        }
        case 3: {
            double radius;
            const double PI = 3.14159;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "Area of the circle is " << area << endl;
            break;
        }
        case 4: {
            int n, sum = 0;
            cout << "Enter a number: ";
            cin >> n;
            for (int i = 1; i <= n; ++i) {
                sum += i;
            }
            cout << "Sum of first " << n << " numbers is " << sum << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
    }

    return 0;
}
