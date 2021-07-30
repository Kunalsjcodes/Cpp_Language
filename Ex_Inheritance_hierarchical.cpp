#include <iostream>
using namespace std; 
class Vehicle
{
    public:
    void allVehicle()
    {
        cout<<"2 wheelers & 4 wheelers-> "; 
    }
};
class TwoWheel: public Vehicle
{
    public:
    void Bike()
    {
        cout<<"Bike is 2 wheeler"<<endl;
    }
};
class FourWheel: public Vehicle
{
    public:
    void Car()
    {
        cout<<"Car is 4 wheeler"<<endl;
    }
};
int main()
{ 
    TwoWheel TW;
    FourWheel FW;
    TW.allVehicle();
    TW.Bike();
    FW.allVehicle();
    FW.Car();
    return 0;
}