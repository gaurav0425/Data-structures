#include<iostream>
#include<vector>
using namespace std;

int winner(vector<bool>&person,int n,int index,int person_left,int k){
    if(person_left == 1){
        for(int i = 0;i<n;i++){
            if(person[i]==0){
                return i;
            }
        }
    }
    //Find the person to kill
    int kill = (k-1)%person_left;


    while(kill--){
        index = (index + 1)%n;
        while(person[index]==1){
            index = (index + 1) % n; //skip if person already killed
        }
    }
    person[index] = 1; //Kill the person

    //Find alive person
    while(person[index] == 1){
        index = (index + 1) % n;
    }
    return winner(person,n,index,person_left-1,k);
}

int main(){
    int n = 5;
    vector<bool>person(n,0);
    cout<<winner(person,n,0,n,3);
}