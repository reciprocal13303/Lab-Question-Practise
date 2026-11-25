#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    int courseId;
    string courseName;

public:
    void setCourseId(int courseId) 
    {
        this->courseId = courseId;
    }
    
    int getCourseId() 
    {
        return courseId;
    }

    void setCourseName(string courseName) 
    {
        this->courseName = courseName;
    }
   
    string getCourseName() 
    {
        return courseName;
    }

    virtual void displayCourseType() = 0;
    virtual ~Course() {}
};

class TheoryCourse : public Course {

public:
    void displayCourseType() override {
        cout << "This is a Theory Course" << endl;
    }
};

class LabCourse : public Course {
public:
    void displayCourseType() override {
        cout << "This is a Lab Course" << endl;
    }
};

int main() {
    Course* c;

    c = new TheoryCourse();
    c->setCourseId(101);
    c->setCourseName("Object-Oriented Programming");

    cout << "Course ID: " << c->getCourseId() << endl;
    cout << "Course Name: " << c->getCourseName() << endl;
    c->displayCourseType();
    delete c;

    cout << endl;

    c = new LabCourse();
    c->setCourseId(102);
    c->setCourseName("Object-Oriented Programming Lab");

    cout << "Course ID: " << c->getCourseId() << endl;
    cout << "Course Name: " << c->getCourseName() << endl;
    c->displayCourseType();
    delete c;

    return 0;
}