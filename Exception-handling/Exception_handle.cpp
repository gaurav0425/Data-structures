#include<iostream>
using namespace std;

int main(){

    try{
    // int *p = new int[100000000];
     size_t n = 1000000000;   // 1 billion
        int *p = new int[n];
    cout<<"Memory allocation is successfull";
    delete[] p;
    }catch(const bad_alloc &e){
        cout<<"Exception occured : "<<e.what()<<endl;
    }
}