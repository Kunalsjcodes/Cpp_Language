#include <iostream>
using namespace std;
class Demo
{
    int x,y;
    public:
    void set(int a,int b)
    {
       x=a;
       y=b;
    }
    void sum()
    {
        cout<<endl<<x+y<<endl;
    }
    void show()
    {
        cout<<"value for a: "<<x<<endl;
        cout<<"value for b: "<<y;
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
        d.show();
        d.sum();
    return 0;
}