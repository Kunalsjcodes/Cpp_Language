/*
Dynamic Array / Dynamic Const
*/


#include<iostream>
using namespace std;
class DynamicArray
{
    int *p,size;
    public:
    DynamicArray()
    {
        p=NULL;
        size=0;
    } 
    DynamicArray(int s)
    {
        size=s;
        p=new int[size];
    }
    void get()
    {
        cout<<"\nEnter value for array: ";
        for(int i=0;i<size;i++)
        {
            cin>>p[i];
        }
    }
    void show()
    {
        for(int i=0;i<size;i++)
        {
            cout<<p[i]<<"\t";
        }
    }
  
};
int main()
{
    int as;
    cout<<"Enter the size of array: ";
    cin>>as;
    DynamicArray p(as);
    p.get();
    p.show();
    return 0;
}