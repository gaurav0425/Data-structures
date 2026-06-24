#include <iostream>
using namespace std;

int sum(int a,int b){
    int ans = a+b;
    return ans;
}

int mul(int a,int b){
    return a * b;
}
void hello(){
    cout<<"Hello world";
}

int main(){
    int a,b;
    cout<<"Enter 2 number : ";
    cin>>a>>b;
    cout<<"sum is "<<sum(a,b)<<endl;
    cout<<"mul is "<<mul(a,b)<<endl;

    hello();
}