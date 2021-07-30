#include <iostream>
using namespace std;
class Demo
{
    int x,y;
    public:
    int set(int a,int b)
    {
       x=a;
       y=b;
       return 0;
    }
    int greater()
    {
        if(x>y)
        {
            return x;
        }
        else
        {
            return y;
        }
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
    d.set(a,b);
    cout<<"Greater number is :"<<d.greater();
    return 0;
}