#include<iostream>
using namespace std;

bool prime(int n){
    if(n<2)
    return 0;

    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

int fact(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the number";
    cin>>a>>b;




    //A is prime or not
    // cout<<prime(a);
    //Factorial of A
    cout<<fact(a);

}