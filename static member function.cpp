#include<iostream>
using namespace std;
class MyClass {
private:
    static int value;
public:
    static void setValue(int v) { value = v; }
    static void showValue() { cout << "Value: " << value << endl; }
};
int MyClass::value = 0;
int main() {
    MyClass::setValue(26);
    MyClass::showValue();
}
