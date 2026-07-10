#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    Human(){

    }

    Human(string name,int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Human{
    private:
    int roll_no,marks;

    public:
    Student(string name,int age,int roll_no,int marks): Human(name,age){
        this->roll_no = roll_no;
        this->marks = marks;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<marks;
    }
};

class Teacher : public Human{
    int salary;

    public:
    Teacher(int salary,string name,int age){
        this->salary = salary;
        this->name = name;
        this->age = age;
    }

    void show(){
         cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};

int main(){
    // Student A1("gaurav",22,37,90);
    // A1.display();
    Teacher A2(100000,"nick",22);
    A2.show();
}