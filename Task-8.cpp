#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public: 
    void displayVehicleInfo(){
        cout<<"This is a transport vehicle."<<endl;
    }
};

class Car : public Vehicle {
    public:
        string brand;
        int doors;
    
    void carInfo(){
        cout<<"Car Brand: "<< brand << ",Doors: " << doors <<endl;
    }
};

class Bus : public Vehicle{
  public:
  int routeNumber;
  int passengerCapacity;
  
  void busInfo(){
      cout<<"Bus Route: "<< routeNumber << ",Capacity: " << passengerCapacity <<endl;
  }
  };


int main()
{   
   Car c1;
   c1.brand = "Toyota";
   c1.doors = 4 ;
   c1.displayVehicleInfo();
   c1.carInfo();
   
   Bus b;
   b.routeNumber = 12;
   b.passengerCapacity = 50;
   b.busInfo();

    return 0;
}