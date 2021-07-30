#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout<<"\nAnimal eats!!!";
    }
};
class Dog
{
    public:
    void bark()
    {
        cout<<"\nDog barks!!";
    }
    
};
class Pet: public Dog, public Animal
{
    public:
    void pet()
    {
        cout<<"\nthese can be pets!!";
    }
    
   
};
int main()
{
    Pet p;
    p.eat();
    p.bark();
    p.pet();
  
}