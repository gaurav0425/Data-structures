#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int rem,ans = 0,mul=1;

    while(num>0){
        //remainder
        rem = num&1;
        // quotient
        num=num>>1;
        // ans
        ans=rem*mul + ans;
        // mul
         mul*=10;
    }
    cout<<ans<<endl;
}
