#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    // if(b==0){
    //     cout<<"Divide by zero is not possible";
    //     return 0;
    // }

    try{
        if(b==0)
        throw "Divided by 0 is not possible";
        int c = a/b;
        cout<<c<<endl;
    }catch(const char *e){
        cout<<"Exception occured : "<<e;
    }
}