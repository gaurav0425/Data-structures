#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}

bool Armstrong(int num,int digit){
 int n = num,rem,ans=0;
 while(n){
    rem = n%10;
    n = n/10;
    ans = ans + (int)pow(rem,digit);
 }   
 if(ans==num){
    return 1;
 }else{
    return 0;
 }
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int digit = countDigit(num);
    cout<<"Digits  = "<<digit<<endl;
    cout<<Armstrong(num,digit);
}