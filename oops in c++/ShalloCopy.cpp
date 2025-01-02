#include <iostream>
using namespace std;

class Student {
  public:
    string name;
    double* cgpaptr;  // Pointer to store CGPA

    Student(string name, double cgpa) {
      this->name = name;
      cgpaptr = new double;  // Allocating heap memory for CGPA
      *cgpaptr = cgpa;  // Storing CGPA in heap memory with given cgpa value
    }

    Student(Student &orgObj) {
      this->name = orgObj.name;
      this->cgpaptr = orgObj.cgpaptr;  
    }

    void getInfo() {
      cout << "Name: " << name << endl;
      cout << "CGPA: " << *cgpaptr << endl;
    }
};

int main() {
  Student s1("Dinesh Kumar Shaw", 9.5);
  Student s2(s1);
  s1.getInfo();  // Output: Name: Dinesh Kumar Shaw, CGPA: 9.5
  *(s2.cgpaptr) = 9.8;
  s2.getInfo();  // Output: Name: Dinesh Kumar Shaw, CGPA: 9.8
  
  s1.getInfo();  // Output: Name: Dinesh Kumar Shaw, CGPA: 9.8 (CGPA is changed for both objects) as it was pointing to the same memory location
  return 0;
}