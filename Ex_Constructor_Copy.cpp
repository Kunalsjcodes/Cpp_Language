#include <iostream>
using namespace std; 
class Employee 
{
    int id,age;
    public: 
    Employee()
    { 
        id=000;
        age=00; 
    }
    void getDat()
    {
        cout<<"\nEnter id and age: ";   
        cin>>id>>age;
    }
    Employee(Employee &A) 
    { 
        id=A.id;
        age=A.age; 
    }
    void dispDat()
    {
        cout<<"\nID: "<<id<<"\tAge: "<<age;
    }
}; 

int main() 
{
    Employee E;
    E.dispDat(); 
    E.getDat();
    Employee F(E);
    F.dispDat();
    return 0; 
}