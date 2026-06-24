#include<iostream>
using namespace std;

int main(){

    int num,ans= 0,rem,mul=1;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0){
        rem = num%10;
        num=num/10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout<<ans;
}