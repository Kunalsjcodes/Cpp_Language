#include<iostream>
using namespace std;
class Person
{
    int a,b;
    public:
    Person()
    {
        cout<<"Defalut Constructor!!";
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
    ~Person()
    {
        cout<<"\nDestructor Invoked!!!";
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