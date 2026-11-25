#include <iostream>
#include <string>
using namespace std;

class University {
    public: 
    void universityInfo(){
        cout<<"Bangladesh University Of Professionals"<<endl;
    }
};

class Department : public University {
    public:
    void departmentInfo(){
        cout<<"Department: Computer Science and Engineering"<<endl;
    }
};

class Student : public Department{
  public:
  int studentId;
  string name;
  
  void studentInfo(){
      cout<<"Student ID: "<<studentId<<endl;
      cout<<"Student Name: "<<name<<endl;
  }
  };


int main()
{   
   Student s1;
   s1.studentId = 2026710440;
   s1.name = "John";
   
   s1.universityInfo();
   s1.departmentInfo();
   s1.studentInfo();

    return 0;
}
