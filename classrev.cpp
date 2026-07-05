#include<iostream>
using namespace std;

// class student{
//     public:
//     string name;
//     int age;

//     void setname(string s){
//         if(s.size()==0){
//             cout<<"Invalid name";
//             return;
//         }
//         name = s;
//     }
//     void getname(){
//         cout<<name<<endl;
//     }
// };

// class a{
//     int a;
//     char b;
// };

class Student{
    public:
    string name;
    int age;
};

int main(){
    // student s1;
    // s1.name = "gaurav";
    // s1.age = 22;
    // cout<<s1.name<<endl;
    // student s2;
    // s2.setname("");
    // s2.getname();

    // a obj;
    // cout<<sizeof(obj);


    Student *s = new Student;
    (*s).name = "gaurav";
    cout<<s->name;
}