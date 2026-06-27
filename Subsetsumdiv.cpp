//Subset sum divisible by k

//This is not optimize Solution 
#include<iostream>
using namespace std;

bool subset(int arr[],int index,int n,int sum,int k){

    if(sum!=0 && sum%k==0){
        return true;
    }
    if(index==n){
        return false;
    }

    return subset(arr,index+1,n,sum,k) || subset(arr,index+1,n,sum + arr[index],k);
}

int main(){
    int arr[] = {3,1,7,5};
    int k = 6;

    cout<<subset(arr,0,4,0,k);
}