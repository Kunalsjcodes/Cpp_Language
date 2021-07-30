#include <iostream>
using namespace std;
class Demo
{
    int a,b;
    public:
    void get()
    {
        cout << "Enter value for a: ";
        cin >> a;
        cout << "Enter value for b: ";
        cin >> b;
    }
    int sum(Demo x)
    {
        int t,y;
        t=x.a;
        y=x.b;
       return t+y;
    }
};
int main()
{
    Demo d;
    d.get();
    Demo A;
    cout << A.sum(d);
    return 0;
}

/*

        d
        /\
       a   b
       4   6


*/