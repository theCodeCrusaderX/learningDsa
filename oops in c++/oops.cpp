#include <iostream>
#include <string>
using namespace std;

class Teacher {
  private:
    double salary;  //not access in main function or other classes

  public:
    Teacher() {  // non-parametarize constructor
      cout << "hello form constructor function\n";
      dep = "computer science";  //we can also set default properties 
    }

    Teacher(string n, string d, string s, double sal) {  //parametarized constructor
      name = n;
      dep = d;
      sub = s;
      salary = sal;
    }


    //properties or attribute
    string name;
    string dep;
    string sub;

    //methods or member-functions
    void changeDep(string newDep) {
      dep = newDep;
    }

    //setter
    void changeSalary(double s) {
      salary = s;
    }

    //getter
    double getSalary() {
      return salary;
    }
};

class Account {
  private: 
    string password;  //hide data
  public:
    string userName;
    string accountId;
};

int main() {

  Teacher t1("Dinesh","cs","cse",202555); //constructor call parametarize wla

  // Teacher t1;  //constructor call non-parametarize wla
  // t1.name = "Dinesh";
  // t1.dep = "cs";
  // t1.sub = "cn";
  // t1.salary = 208567.36;  //as salary is set to private
  
  cout << t1.dep << endl; 
  t1.changeDep("maths");
  cout << t1.dep << endl;

  t1.changeSalary(200000);  //we can actully change the salary using this public function in the given class
  cout << "set salary ->" << t1.getSalary();  //we can actully get the salary using this public function in the given class


  return 0;
}