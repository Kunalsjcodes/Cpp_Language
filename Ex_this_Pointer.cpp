#include <iostream>
using namespace std; 
class Employee
{
    public: 
    int id;
    float salary; 
    void setDat(int id, float salary) 
    { 
        this->id = id; 
        this->salary = salary; 
    } 
    void dispDat() 
    { 
        cout<<"ID\tSalary"<<endl;
        cout<<id<<"\t"<<salary<<endl; 
    } 
};

int main()
{
    Employee E,F;
    E.setDat(101, 8900);
    F.setDat(102, 9200);
    E.dispDat();
    F.dispDat();
    return 0;
}