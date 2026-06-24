#include<iostream>
using namespace std;

int main(){
    int A,B,C,D;
    cout<<"Enter the value of rectangle sides : ";
    cin>>A>>B>>C>>D;
    if((A==B && C==D) || (A==C && B==D) || (A==D && B==D)){
         cout<<1;
    }else{
        cout<<0;
    }
}