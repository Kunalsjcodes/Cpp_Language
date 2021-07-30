#include <iostream>
using namespace std;
static int c;
class Demo
{
    private:

    int a;
    public:
    void get()
    {
        c++;
        cout<<"enter value: ";
        cin >> a;       
    }
    void show()
    {
        cout<<a<<endl;
    }
};
int main()
{
    Demo x;
    x.get();
    x.show();
    cout<<"\nTotal calling of get(): "<<c;
}
