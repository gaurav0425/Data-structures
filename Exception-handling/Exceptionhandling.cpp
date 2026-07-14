#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance,account_number;

    public:
    Customer(string name,int balance,int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            cout<<amount<<" rs is credited successfully"<<endl;
        }else{
            // throw "amount should be greater than 0";
            throw runtime_error("amount should be greater than 0");
        }
    }

    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance-=amount;    
            cout<<amount<<" rs is debited successfully"<<endl;
        }else if(amount<0){
            // throw "amount should be greater than 0";
            throw runtime_error("amount should be greater than 0");
        }else{
            throw runtime_error("Balance is low");
        }
    }
};

int main(){
    Customer C1("gaurav",5000,100);
    try{
    C1.deposit(100);
    C1.withdraw(6000);
    C1.deposit(400);
    }
    // catch(const char *e){
    //     cout<<"Exception occured : "<<e;
    // }
    catch(const runtime_error &e){
        cout<<"Exception occured "<<e.what()<<endl;
    }
}