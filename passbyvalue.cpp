#include<iostream>
using namespace std;

int increment(int a){
    a = a + 1;
    cout<<a;
}
int main(){
    int a = 5;
    increment(a);
    cout<<endl;
    cout<<a;
}