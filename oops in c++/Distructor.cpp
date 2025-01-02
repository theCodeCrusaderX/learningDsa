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

    ~Student() {
      cout << "Destructor called" << endl;
      cout << *cgpaptr << " is deleted" << endl;  // This will print the CGPA value
      delete cgpaptr;  // Deallocating heap memory  
      cout << *cgpaptr << " is deleted" << endl;  // This will print garbage value
    }

    void getInfo() {
      cout << "Name: " << name << endl;
      cout << "CGPA: " << *cgpaptr << endl;
    }
};

int main() {
  Student s1("Dinesh Kumar Shaw", 9.5);
  s1.getInfo();  // Output: Name: Dinesh Kumar Shaw, CGPA: 9.5
  return 0;
}