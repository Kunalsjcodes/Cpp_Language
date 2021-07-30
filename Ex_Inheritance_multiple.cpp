#include <iostream>
using namespace std; 
class Truck
{
    public:
    void heavyMotor()
    {
        cout<<"Truck is a heavy motor vehicle"<<endl;
    }
};
class Car
{
    public:
    void lightMotor()
    {
        cout<<"Car is a light motor vehicle"<<endl;
    }
};
class Vehicle: public Truck, public Car
{
    public:
    void fourWheel()
    {
        cout<<"Both Truck & Car are 4 wheelers."<<endl;
    }
};

int main()
{ 
    Vehicle Ob;
    Ob.heavyMotor();
    Ob.lightMotor();
    Ob.fourWheel();
    return 0;
}