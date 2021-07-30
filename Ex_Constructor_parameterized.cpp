#include <iostream>
using namespace std; 
class Employee
{
    int id,age;
    public: 
    Employee(int i, int j) 
    { 
        id=i;
        age=j; 
    }
    void dispDat()  
    {
        cout<<"\nID: "<<id<<"\tAge: "<<age;
    }
};

int main() 
{
    Employee E(205,24);  
    Employee F(235,22);
    E.dispDat();
    F.dispDat();
    return 0;
}