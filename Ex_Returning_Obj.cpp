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
    Demo sumVal(Demo B)
    {
        Demo X;
        X.a=a+B.a;
        X.b=b+B.b;
        return X;
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
    C=A.sumVal(B);
    C.dispSum();
    return 0;
}