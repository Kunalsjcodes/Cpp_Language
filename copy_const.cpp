#include<iostream>
using namespace std;
class Person
{
    int a,b;
    public:
    Person()
    {

    }
    void get()
    {
        cout<<"\nEnter value for a: ";
        cin>>a;
        cout<<"\nEnter value for b: ";
        cin>>b;
    }
    void show()
    {
        cout<<"\nvalue of a: "<<a;
        cout<<"\nvalue of b: "<<b;
            
    }
    Person(Person &p)
    {
        a=p.a;
        b=p.b;
    }
   
};
int main()
{
    Person p;
    p.get();
   // p.show();
    Person q(p);
    q.show();
    return 0;
}