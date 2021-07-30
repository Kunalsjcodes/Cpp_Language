#include<iostream>
using namespace std;
static int x;
class Demo
{
    private:
    int a,b;
    public:
    void getDat()
    {
        x++;
        cout<<"Enter two values: ";
        cin>>a>>b;
    }
    void dispDat()
    {
        cout<<"Function call: "<<x;
        cout<<"\tValues are: "<<a<<"\t"<<b;
    }
};

int main()
{
    Demo A,B;
    A.getDat();
    A.dispDat();
    B.getDat();
    B.dispDat();
    return 0;
}