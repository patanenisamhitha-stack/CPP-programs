#include <iostream>
using namespace std;
class Counter {
private:
    static int count;
public:
    Counter() {
        count++;
    }
    void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};
int Counter::count = 0;
int main() {
    Counter c1, c2;
    c1.showCount();
}
