#include<iostream>
using namespace std;
class Demo
{
    private:
    int a,b;
    public:
    void setVal()
    {
        a=b=10; 
    }
    void dispDat()
    { 
        cout<<a<<endl<<b;
    }
};
int main()
{
    Demo D;
    D.setVal(); 
    D.dispDat(); 
}