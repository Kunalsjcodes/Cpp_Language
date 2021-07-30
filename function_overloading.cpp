#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void sum(int a, int b)
    {
        cout<<a+b;
    }
    void sum(int a, int b,int c)
    {
        cout<<endl<<a+b+c;
    }
};
int main()
{
    demo d;
    d.sum(1,2);
    d.sum(4,1,2);
    return 0;
}
