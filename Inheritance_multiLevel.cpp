#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void get()
    {
        cout<<"\nEnter value for a & b respectively: ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"\nA is : "<<a;
        cout<<"\nB is : "<<b;
    }
};
class B: public A
{
    public:
    void sum()
    {
        cout<<"\nsum is : "<<a+b;
    }
    void sub()
    {
        cout<<"\nSub is : "<<a-b;
    }
};
class C: public B
{
    public:
    void multi()
    {
        cout<<"\nMultiply is : "<<a*b;
    }
    void remi()
    {
        cout<<"\nReminder is : "<<a%b;
    }
};
int main()
{
    C obj;
    obj.get();
    obj.show();
    obj.sub();
    obj.sum();
    obj.multi();
    obj.remi();
}