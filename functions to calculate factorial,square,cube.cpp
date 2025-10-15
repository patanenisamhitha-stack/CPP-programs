#include <iostream>
using namespace std;
class Maths {
public:
    static int square(int n) {
        return n * n;
    }
    static int cube(int n) {
        return n * n * n;
    }
    static int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " is: " << Maths::square(num) << endl;
    cout << "Cube of " << num << " is: " << Maths::cube(num) << endl;
    cout << "Factorial of " << num << " is: " << Maths::factorial(num) << endl;

    return 0;
}
