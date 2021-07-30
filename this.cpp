#include <iostream>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    void get(int a, int b)
    {
      this->a=a;
      this->b=b;
        
    }
    void show()
    {
        cout<<"A is: "<<a;
        cout<<"\nB is: "<<b;
    }
   
};
int main()
{
    Test x;
    x.get(12,21);
    x.show();
}
