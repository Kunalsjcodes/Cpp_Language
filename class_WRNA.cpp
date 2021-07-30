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
    int sum()
    {
        return a+b;
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
    cout<<endl<<d.sum();
    return 0;
}