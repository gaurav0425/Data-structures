#include<iostream>
using namespace std;

// class Student{
//     public:
//     string name;
//     int age;
//     string email;
//     //function getter and setter
//     public : 
//     void setName(string s){
//         if(s.size()==0){
//             cout<<"Invalid name";
//             return;
//         }
//         name = s;
//     }
//     void setage(int x){
//         if(x<0||x>100){
//             cout<<"Invalid age";
//             return;
//         }
//         age = x;
//     }
//     void setemail(string e){
//         email = e;
//     }

//     void getName(){
//         cout<<name<<endl;
//     }

//     void getAge(){
//         cout<<age<<endl;
//     }
//    string getemail(int pin){
//         if(pin==123){
//             return email;
//         }
//         return " ";
//     }
// };


//Padding concept

// class a{
//     char d;
//     int b;
//     char c;
//     // char d;
//     // char e;
//     // char f;
//     // char g;
// };

class student{
    public : 
    string name;
    int age;
    string grade;
};


int main(){
    // Student s1;
    // s1.name = "Gaurav";
    // s1.age = 20;
    // s1.email = "Nayalg2003@gmail.com";
    // cout<<s1.name;
    // Student s1;
    // s1.setName("Gaurav");
    // s1.getName();
    // s1.setage(20);
    // s1.getAge();
    // s1.setemail("gaurav@papa");
    // cout<<s1.getemail(1235);

    // a obj;
    // cout<<sizeof(obj);


    //Dynamically 
    //using pointers

    student *s = new student;
    (*s).name = "gaurav";
    (*s).age = 22;
    cout<<s->name;
}   