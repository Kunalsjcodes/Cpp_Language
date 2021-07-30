#include <iostream>
using namespace std; 
class Test 
{ 
    private: 
    int num; 
    public: 
    void get() 
    { 
        cout<<"Enter a number: ";
        cin>>num;
    }
    void show() 
    { 
        cout<<"Sum is: "<<num; 
    } 
    Test operator +(Test T)
    {
        Test X;
        X.num=num+T.num;
        return X;
    } 
}; 

int main() 
{ 
    Test a,b,c; 
    a.get();
    b.get();
    c=a+b;
    c.show();
    return 0;
}