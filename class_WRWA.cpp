#include <iostream>
using namespace std;
class Demo
{
    int x,y;
    public:
    int sum(int a,int b)
    {
       x=a;
       y=b;
       return x+y;
    }
};
int main()
{
    int a,b;
    cout<<"Enter value for a: ";
    cin>>a;
    cout<<"Enter value for b: ";
    cin >> b;

    Demo d;
    cout << d.sum(a, b);
    return 0;
}