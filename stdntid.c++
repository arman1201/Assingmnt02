#include <iostream> #include <string> using namespace std;
class University_Student { private: string name; string studentID; string department; float cgpa;
public: University_Student(string n, string id, string dept, float c) {name = n;
studentID = id;
department = dept;
cgpa = c;
}
University_Student(const University_Student &other) {
name = other.name;
studentID = other.studentID;
department = other.department;
cgpa = other.cgpa;
}
void display() {
cout << "Name: " << name << endl;
cout << "Student ID: " << studentID << endl;
cout << "Department: " << department << endl;
cout << "CGPA: " << cgpa << endl;
cout << "---" << endl;
}
};
int main() {
University_Student student1("Arman Uddin", "ET243100", "EEE", 3.85);
University_Student student2("Artha Dhar", "ET243195", "EEE", 3.92);
University_Student student3 = student1;
cout << "Student 1 Details:\n";
student1.display();
cout << "Student 2 Details:\n";
student2.display();
cout << "Student 3 (Copy of Student 1) Details:\n";student3.display(); return 0;
}
