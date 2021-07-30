#include<iostream>
using namespace std;
class Demo
{
    private:
    int a,b;
    public:
    void setVal()
    {
        cout<<"Enter value for a and b: ";
        cin>>a>>b;
    }
    void sumVal(Demo A, Demo B)
    {
        a=A.a+B.a;
        b=A.b+B.b;
    }
    void dispSum()
    {
        cout<<"Sum of A->a + B->a is :"<<a;
        cout<<"\nSum of A->b + B->b is :"<<b;
    }
};

int main()
{
    Demo A,B,C; 
    A.setVal();
    B.setVal(); 
    C.sumVal(A,B);
    C.dispSum();
    return 0;
}