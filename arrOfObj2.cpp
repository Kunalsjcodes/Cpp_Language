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
    void show(Demo arr[])
    {
        
        for (int i = 0; i <= 4; i++)
        {
            cout << "\nvalue of arr[" << i << "] a :"<<arr[i].a;
        }
    }
};
int main()
{
    Demo x[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter value of x[" << i << "] a :";
        x[i].get();
    }
    Demo a;
    a.show(x);
    return 0;
}
