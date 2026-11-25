#include <iostream>
using namespace std;
class Student{
  private:
  int studentId;
  string studentName;
  double cgpa;
  public:
   void setID(int studentId)
   {
       this->studentId=studentId;
   }
   void setName(string studentName)
   {
       this->studentName=studentName;
   }
   void setCgpa(double cgpa)
   {
       this->cgpa=cgpa;
   }
   int getID()
   {
       return this->studentId;
   }
   string getName()
   {
     return this->studentName;  
   }
   double getCgpa()
   {
       return this->cgpa;
       return 0;
   }
};

int main()
{
 Student s1;  
 s1.setID(3303);
 s1.setName("Rahim");
 s1.setCgpa(3.45);
 cout<<s1.getID()<<endl;
 cout<<s1.getName()<<endl;
 cout<<s1.getCgpa()<<endl;
    return 0;
}
