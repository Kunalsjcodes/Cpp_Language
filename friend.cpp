#include <iostream>
using namespace std;
class Demo;
class Test
{
    private:
    int a,b;
    public:
    void get()
    {
        cout<<"Enter a value for a: ";
        cin>>a;
        cout<<"Enter a value for b: ";
        cin>>b;       
    }
    void show()
    {
        cout<<"A is: "<<a;
        cout<<"\nB is: "<<b;
    }
    friend void sum(Test t, Demo d);
   
};

class Demo
{
    int x,y;
    public:
    void set()
    {
        x=12;
        y=11;
    }
    friend void sum(Test t, Demo d);
};

void sum( Test t, Demo d)
{
    int s1,s2;
    s1=t.a+d.x;
    s2=t.b+d.y;
    cout<<"Sum of a+x: "<<s1;
    cout<<"Sum of b+y: "<<s2;
}
int main()
{
    Test x;
    x.get();
    Demo y;
    y.set();
    sum(x,y);
    return 0;
}
