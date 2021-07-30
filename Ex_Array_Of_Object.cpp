#include<iostream>
using namespace std;
class Demo
{
    private:
    int rn,age;
    public:
    void getDat()
    {
        cout<<"Enter your Roll No: ";
        cin>>rn;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void dispDat()
    {
        cout<<rn<<"\t"<<age;
    }
};

int main()
{
    Demo A[2];  
    int i;
    for(i=0;i<=1;i++)
    {
        A[i].getDat();
    }
    cout<<"RollNo\tAge";
    for(i=0;i<=1;i++)
    {
        A[i].dispDat();
    }
}