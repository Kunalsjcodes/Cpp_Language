#include<iostream>
using namespace std;
class Person
{
    int a,b;
    public:
    Person(int a, int b)
    {
        this->a=a;
        this->b=b;
        cout<<"Parameterizied invoked !!!!!!\n";
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
};
int main()
{
    Person p(1,2);
    p.show();
    p.get();
    p.show();
    return 0;
}