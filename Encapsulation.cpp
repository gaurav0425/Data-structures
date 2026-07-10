// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int account_number,balance;
//     int age;

//     public:
//     Customer(string name,int account_number,int balance,int age){
//         this->name = name;
//         this->account_number = account_number;
//         this->balance = balance;
//         this->age = age;
//     }

//     void deposit(int amount){
//         if(amount>0){
//             balance+=amount;
//         }
//     }

//     void withdraw(int amount){
//         if(amount<=balance && amount>0){
//             balance-=amount;
//         }
//     }

//     void setage(int age){
//         if(age>0&&age<100){
//             this->age = age;
//         }else{
//             cout<<"Invalid age"<<endl;
//         }
//     }

//     void display(){
//         cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
//     }
// };

// int main(){
//     Customer A1("gaurav",101,1000,3);
//     Customer A2("nick",102,2000,4);
//     A1.deposit(20);
//     A1.setage(-5);
//     A1.display();
// }




#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;

    public:
    //Setter function
    void setroll_no(int roll_no){
        if(roll_no>0 && roll_no<100){
            this->roll_no = roll_no;
        }
    }

    //getter function
    void getroll_no(){
        cout<<roll_no;
    }
};

int main(){
    Student s1;
    s1.setroll_no(20);
    s1.getroll_no();
}