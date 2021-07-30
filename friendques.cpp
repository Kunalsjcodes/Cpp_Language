#include <iostream>
using namespace std;
class A;
class B;
class A
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
    friend void sum(A t, B d);
   
};

class B
{
    int x,y;
    public:
    void set()
    {
        x=5;
        y=10;
    }
    friend void sum(A t, B d);
};

void sum( A t, B d)
{
    int s1,s2;
    s1=t.a+d.x;
    s2=t.b+d.y;
    cout<<"Sum of a+x: "<<s1;
    cout<<"\nSum of b+y: "<<s2;
}
int main()
{
    A x;
    x.get();
    B y;
    y.set();
    sum(x,y);
    return 0;
}
