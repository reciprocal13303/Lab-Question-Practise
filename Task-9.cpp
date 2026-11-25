#include <iostream>
using namespace std;

class Vehicle {
    public: 
    void vehicleInfo(){
        cout<<"General Vehicle Information."<<endl;
    }
};

class Fare {
    public:
    void fareInfo(){
        cout<<"Transportation Fare Applied."<<endl;
    }
};

class Car : public Vehicle{
  public:
  
  
  void carInfo(){
      cout<<"Private Car Information."<<endl;
  }
 };

class Bus : public Vehicle, public Fare{
    public:
    void busInfo(){
    cout<<"Public Bus Information."<<endl;    
    }
};
int main()
{   
   Car c1;
   c1.vehicleInfo();
   c1.carInfo();
   
   Bus b;
   b.vehicleInfo();
   b.fareInfo();
   b.busInfo();

    return 0;
}