#include <iostream>
using namespace std;
class Demo;
class Test
{
    private:
    int a;
    public:
    void get()
    {
        cout<<"Enter a value for a: ";
        cin>>a;
          
    }
    void show()
    {
        cout<<"A is: "<<a;
    }
    friend void swap(Test &t, Demo &d);
   
};

class Demo
{
    int x;
    public:
    void set()
    {
        x=12;
       
    }
    friend void swap(Test &t, Demo &d);
};

void swap( Test &t, Demo &d)
{
    int x;
    x=t.a;
    t.a=d.x;
    d.x=x;
    cout<<"After swap A is :"<<t.a;
    cout<<"\nAfter swap X is :"<<d.x;
    
}
int main()
{
    Test x;
    x.get();
    Demo y;
    y.set();
    swap(x,y);
    return 0;
}
