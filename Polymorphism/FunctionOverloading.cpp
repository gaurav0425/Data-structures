#include<iostream>
using namespace std;

class Area{

    public:
    int calculate(int r){
        return 3.14*r*r;
    }

    int calculate(int l,int b){
        return l * b;
    }
};

int main(){
    Area A1,A2;
    cout<<A1.calculate(4)<<endl;
    cout<<A2.calculate(3,4)<<endl;
}