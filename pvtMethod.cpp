#include <iostream>
using namespace std;
class Demo
{
    private:
    int a,b;
    void get()
    {
        cout << "Enter value for a: ";
        cin >> a;
        cout << "Enter value for b: ";
        cin >> b;
    }
    public:
    int sum()
    {
       get();
       return a+b;
    }
};
int main()
{
    Demo d;
    cout << d.sum();
    return 0;
}

