#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void display(){
        cout<<"Hello my name is  : "<<name<<endl;
    }
};

class Employee : public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My monthaly salary is "<<salary<<endl;
    }
};

class Manager : public Employee{
    protected:
    string department;

    public:
    Manager(string name,int salary,string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout<<"I am leading "<<department<<" department";
    }
};

int main(){
    Manager m1("gaurav",100,"It");
    m1.display();
    m1.monthly_salary();
    m1.work();
}