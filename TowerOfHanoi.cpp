#include<iostream>
using namespace std;

void Toh(int n,int sour,int help,int dest){
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
        return;
    }
    Toh(n-1,sour,dest,help);
    cout<<"Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
    Toh(n-1,help,sour,dest);
}

int main(){
    int n=3;
    Toh(n,1,2,3);
}