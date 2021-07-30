#include <iostream>
using namespace std;
class Demo
{
    private:
    int a,b;
    public:
    void get()
    {
        cout << "Enter value for a: ";
        cin >> a;
        cout << "Enter value for b: ";
        cin >> b;
    
    }
    Demo sum(Demo x)
    {
        Demo c;
        c.a = a+x.a;
        c.b = b+x.b;
        return c;
    }
    void show()
    {
        cout<<"\nSum of x.a+y.a: "<<a;
        cout<<"\nSum of y.a+y.b: "<<b;
    }
};
int main()
{
    Demo x,y,s;

    x.get();
    y.get();
    
    s=y.sum(x);
    s.show();
    return 0;
}
