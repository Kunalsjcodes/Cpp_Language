#include<iostream> 
#include<conio.h> 
using namespace std;
class Employee 
{
    public: 
    Employee() 
    { 
        cout<<"Default Constructor Invoked"<<endl; 
    } 
};

int main() 
{ 
    Employee E; 
    Employee F;
    return 0; 
}