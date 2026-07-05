#include<iostream>
using namespace std;

class Student{
    string name;
    int account_no;
    int balance;

    public:
    //Default constructor 

    Student(){
        name = "nick";
        account_no = 200;
        balance = 100;
    }

    //Parameterized Constructor
    // Student(string a,int b,int c){
    //     name = a;
    //     account_no = b;
    //     balance = c;
    // }

    // Student(string name,int account_no,int balance){
    //     this->name = name;
    //     this->account_no = account_no;
    //     this->balance = balance;

    // }

    Student(string a,int b){
        name = a;
        account_no = b;
    }


    //Inline constructor
    inline Student(string a,int b,int c):name(a),account_no(b),balance(c){
    }

    //If we want to make copy constructor
    Student(Student &B){
        name = B.name;
        account_no = B.account_no;
        balance = B.balance;
    }

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"Account no. : "<<account_no<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

int main(){
//   Student s1;
//   Student s2("gaurav",123,1000);  
//   Student s3("golu",230);
//   s1.display();
//   s2.display();
//   s3.display();

//Inline
Student s1("gaurav",123,1212);
Student s2(s1);
s1.display();
s2.display();
}
 


//This object ke address ko store krke rkhta hai 

//Constructor overloading means same name but different parameteres