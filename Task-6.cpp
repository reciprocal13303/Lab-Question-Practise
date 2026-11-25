#include <iostream>
using namespace std;

class LandVehicle {
    public: 
    void landInfo(){
        cout<<"This is a land vehicle"<<endl;
    }
};

class WaterVehicle {
    public:
    void WaterInfo(){
        cout<<"This is a water vehicle"<<endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle{
  public:
  void displayVehicleType(){
      cout<<"This is a AmphibiousVehicle"<<endl;
  }
};

int main()
{   
    AmphibiousVehicle vehicle1;
    vehicle1.displayVehicleType();
    vehicle1.landInfo();
    vehicle1.WaterInfo();

    return 0;
}
