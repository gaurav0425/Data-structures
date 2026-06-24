#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    int ans = 0,mul=1,rem;
    while(num>0){
        rem = num%8;
        num=num/8;
        ans = rem * mul + ans;
        mul = mul*10;
    }
    cout<<ans;
}