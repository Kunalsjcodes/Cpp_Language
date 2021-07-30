#include <iostream>
using namespace std;
class Demo
{
    private:
    int a;
    public:
    void get()
    {
        cin >> a;       
    }
    void show()
    {
        cout<<a<<endl;
    }
};
int main()
{
    Demo x[5];
    for(int i=0;i<=4;i++)
    {
        cout<<"Enter value of x["<<i<<"] a :";
        x[i].get();
    }
    


    for(int i=0;i<=4;i++)
    {
        cout<<"value of x["<<i<<"] a :";
        x[i].show();
    }
    return 0;
}

/*

x[0]-> a,b;
x[1]-> a,b;
x[2]-> a,b;
x[3]-> a,b;
x[4]-> a,b;

*/