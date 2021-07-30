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
int main()
{
    B obj;
    obj.get();
    obj.show();
    obj.sub();
    obj.sum();

}