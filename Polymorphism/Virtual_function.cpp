#include<iostream>
using namespace std;

class Animal{
    public:

   virtual void speak(){
        cout<<"hu hu"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Bark"<<endl;
    }
};

int main(){
    Animal *p;
    p = new Dog();
    p->speak();
}

//pure virtual function