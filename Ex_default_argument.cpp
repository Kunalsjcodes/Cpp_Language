#include<iostream>
using namespace std;
class Demo
{
    private:
        int p;
        float q;
    public:
        void setDat(int a=0, float x=0.0)
        {
            p=a;
            q=x; 
        }
        void dispDat()
        {
            cout<<"\nValue of P: "<<p;
            cout<<"\nValue of Q: "<<q;
        }
};
int main()
{
Demo A,B;
A.setDat();
A.dispDat();
B.setDat(2,5.99);
B.dispDat();
return 0;
}