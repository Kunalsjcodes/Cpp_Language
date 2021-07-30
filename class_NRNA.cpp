#include <iostream>
using namespace std;
class Demo
{
    int a,b;

    public:
    void get()
    {
        cout<<"Enter value for a: ";
        cin>>a;
        cout<<"Enter value for b: ";
        cin>>b;
    }
    void sum()
    {
        cout<<endl<<a+b<<endl;
    }
    void show()
    {
        cout<<"value for a: "<<a<<endl;
        cout<<"value for b: "<<b;
    }

};
int main()
{
    Demo d;
    d.get();
    d.show();
    d.sum();
    return 0;
}
/* 


    d
    /\
   a  b         [accessing through public methods->get() and show()]



    e
    /\
   a  b         [accessing through public methods->get() and show()]



    */