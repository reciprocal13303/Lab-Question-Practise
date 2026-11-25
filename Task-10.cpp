#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string name) 
    { 
        this->name = name; 
        
    }
    
    string getName() 
    { 
        return name; 
        
    }

    void setAge(int age) 
    { 
        this->age = age; 
        
    }
    
    int getAge() 
    
    { 
        return age; 
        
    }
};

class Employee : public Person {

private:
    int employeeId;
    double salary;

public:
    void setEmployeeId(int employeeId) 
    
    { 
        this->employeeId = employeeId; 
        
    }
    
    int getEmployeeId() 
    
    { 
        return employeeId; 
        
    }

    void setSalary(double salary) 
    
    { 
        this->salary = salary; 
        
    }
    
    double getSalary() 
    
    { 
        return salary; 
        
    }
};

int main() {
    Employee e1;
    e1.setName("Hamza");
    e1.setAge(32);
    e1.setEmployeeId(505);
    e1.setSalary(25000.50);

    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Employee ID: " << e1.getEmployeeId() << endl;
    cout << "Salary: " << e1.getSalary() << endl;

    return 0;
}