#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_number,balance;
    static int total_customer;
    static int total_balance;

    public:
    Customer(string name,int account_number,int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance+= balance;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    static void accStatic(){
        cout<<"Total number of customer : "<<total_customer<<endl;
        cout<<"Total balance : "<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }


    void display_total(){
        cout<<total_customer<<endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main(){
    Customer A1("gaurav",1,1000);
    Customer A2("nick",2,2000);
    Customer A3("harsh",3,1200);
    A1.deposit(200);
    A1.withdraw(1000);
    Customer::accStatic();

    // A1.display();
    // A2.display();
    // A3.display();

    // Customer::display_total();  ye error dega bcoz a1,a2,a3 hi display total ko access kr skte hai na ki cutomer

}