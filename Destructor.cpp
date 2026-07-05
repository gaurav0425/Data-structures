#include<iostream>
using namespace std;

class Student{
    string name;
    int *data;

    public:
    Student(){
        cout<<"Constructor is called";
    }

    //Destructor
    ~Student(){
        cout<<"Destructor is called";
    }
};

int main(){

}