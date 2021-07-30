#include <iostream>
using namespace std;
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
   
};

class B
{
    int x,y;
    public:
    void set()
    {
        A s;
        s.get();
        s.show();
        x=5;
        y=10;
    }
     void show()
    {
        cout<<"A is: "<<x;
        cout<<"\nB is: "<<y;
    }
};

int main()
{
    B y;
    y.set();
   y.show();
    return 0;
}
