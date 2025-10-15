#include <iostream>
using namespace std;
class Student {
    int id;
    string name;
public:
    Student(int studentId, string studentName) {
        id = studentId;
        name = studentName;
    }
    void display() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};
int main() {
    Student student1(26, "Priya");
    student1.display();
    return 0;
}
