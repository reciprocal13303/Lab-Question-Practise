#include <iostream>
using namespace std;
class Person{
public:
string name;
int age;
void displayPersonInfo()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
};

class Employee : public Person{
    public:
    int employeeId;
    double salary;
    
    void displayEmployeeInfo(){
        displayPersonInfo();
        cout<<"Employee ID: "<< employeeId <<endl;
        cout<<"Salary: "<< salary <<endl;
    }
};
int main()
{
    Employee e1;
    e1.name ="Md. Rohan";
    e1.age = 28;
    e1.employeeId = 101;
    e1.salary = 12000.0;
    e1.displayEmployeeInfo();
    return 0;
}
