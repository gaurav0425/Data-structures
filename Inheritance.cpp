// #include<iostream>
// using namespace std;

// class Human{
//     private:
//     int a;
//     protected:
//     int b;
//     void fun(){
//         a = 10;
//         b = 20;
//         c = 30;
//     }
//     public:
//     int c;


//     // void fun(){
//     //     a = 10;
//     //     b = 20;
//     //     c = 30;
//     // }
// };

// int main(){
//     Human gaurav;
//     // gaurav.a = 10; gives error because a is private
//     // gaurav.b=20; we also cannot use protected member like this
//     gaurav.c = 30;
//     cout<<gaurav.c;
//     // gaurav.fun();
// }



//Inheritance

#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age,weight;
};

// class Student : public Human{
//     int roll_no,fees;
// };

class Student : private Human{
    private : 
    int roll_no,fees;

    // public:
    // void fun(string a,int b,int c){
    //     name = a;
    //     age = b;
    //     weight = c;
    // }

    // void display(){
    //     cout<<name<<" "<<age<<" "<<weight;
    // }

    public:
    Student(string name,int age,int weight,int roll_no,int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" age is "<<age<<" nd its weight is "<<weight<<" roll no is "<<roll_no<<" nd fees is "<<fees;
    }

};

int main(){
    Student A("gaurav",22,55,37,120000);
    A.display();
    // A.name = "gaurav";
    // A.fun("gaurav",22,55);
    // A.display();
}