#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int x = 40;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            cout<<i;
            return 0;
        }
    }
    cout<<"No element found";
    return 0;
}