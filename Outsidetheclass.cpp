#include <iostream>
using namespace std;
class Student 
{
  private:
    int roll;
    string name;

  public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};
int main() 
{
    Student s1(101, "Alice");
    Student s2(102, "Bob");
    s1.display();
    s2.display();

    return 0;
}
