/*
1-  Always public
2-  Name is same as class name
3-  Automatically invoked when object is created in memory
4-  don't have any return type[not even void]-------------> why?

Types of constructor:
1-  Default Const
2-  Parameterized Const
3-  Copy Constructor
*/
#include<iostream>
using namespace std;
class Person
{
    int a;
    public:
    Person()
    {
        a=11;
        cout<<"Default const. invoked !!!!!!\n";
    }
    void get()
    {
        cout<<"\nEnter value for a: ";
        cin>>a;
    }
    void show()
    {
        cout<<"\nvalue of a: "<<a;
    }
};
int main()
{
    Person p;
    p.show();
    p.get();
    p.show();
    return 0;
}