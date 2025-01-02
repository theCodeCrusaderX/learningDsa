#include <iostream>
#include <string>
using namespace std;

class Teacher {
  private:
    double salary;  

  public:

    Teacher(string name, string dep, string sub, double salary) {  
      this->name = name;
      this->dep = dep;
      this->sub = sub;
      this->salary = salary;
    }

    Teacher(Teacher &originalObj) {  //custome copy constructor
      cout << "custome Copy constructor called" << endl;
      name = originalObj.name;
      dep = originalObj.dep;
      sub = originalObj.sub;
      salary = originalObj.salary;
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


int main() {

  Teacher t1("Dinesh","cse","physics",202555); //constructor call parametarize wla
  // cout << t1.dep << endl; 

//default copy constructor
  // Teacher t2(t1); 
  // cout << t2.name << endl;

//coustom copy constructor
  Teacher t2(t1);
  cout << t2.name << endl;

  return 0;
}