#include<iostream>
using namespace std;

void change(int &a){
    a = 15;
}
int main(){
    int a = 6;
    change(a);
    cout<<a;
}