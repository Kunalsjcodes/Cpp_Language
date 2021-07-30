#include <iostream> 
using namespace std;
int max(int n, int m); 
int max(int n, int m) 
{
    if(n>m) 
    { 
        return n;
    } 
    else 
    {
    return m;
    }
}
int main() 
{
    int a,b,r;
    a=12;
    b=33;
    r=max(a,b); 
    cout<<"Max number is : "<<r;
    return 0;
}