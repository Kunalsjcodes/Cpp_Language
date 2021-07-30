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
    void copyVal(Demo A) 
    {
        a=A.a;
        b=A.b;
    }
    void dispDat()
    {
        Cout<<a<<endl<<b;
    }
};

int main()
{
    Demo A,B; 
    A.setVal(); 
    B.copyVal(A);
    cout<<"After copy value from object A to B"<<endl;
    B.dispDat();
    return 0;
}
