#include <iostream>
using namespace std;
class Person;
class Employee
{
    int id;
    float sal; 
    public: 
    void proDat() 
    { 
        cout<<"Enter Your ID: ";
        cin>>id;
        cout<<"Enter Your Salary: ";
        cin>>sal;
    } 
    friend void dispDat(Employee E, Person P);
};

class Person
{
    int a;
    char n[20]; 
    public: 
    void perDat() 
    { 
        cout<<"Enter Your Name: ";
        cin>>n;
        cout<<"Enter Your Age: ";
        cin>>a;
    }
    friend void dispDat(Employee E, Person P);
};

void dispDat(Employee E, Person P)
{
    cout<<endl<<"Name\tAge\tID\tSalary"<<endl;
    cout<<P.n<<"\t"<<P.a<<"\t"<<E.id<<"\t"<<E.sal; 
}
int main()
{
    Employee E;
    E.proDat();
    Person P;
    P.perDat();
    dispDat(E,P);
    return 0;
}