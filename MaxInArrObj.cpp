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
    int max(Demo arr[])
    {
        int m = arr[0].a;
        for (int i = 0; i <= 4; i++)
        {
            if (arr[i].a > m)
            {
                m = arr[i].a;
            }
        }
        return m;
    }

    int min(Demo arr[])
    {
        int m = arr[0].a;
        for (int i = 0; i <= 4; i++)
        {
            if (arr[i].a < m)
            {
                m = arr[i].a;
            }
        }
        return m;
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
    cout << "\nMax in Array is : " << a.max(x);
    cout << "\nMin in Array is : " << a.min(x);
    return 0;
}
