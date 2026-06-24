#include<iostream>
using namespace std;

int main(){
    int arr[4] = {12,34,67,90};
    int m = 2;
    int start = 90,end = 203,mid,ans;
    while(start<=end){
        mid = start + (end-start)/2;
        int page = 0,count = 1;
        for(int i=0;i<4;i++){
            page+=arr[i];
            if(page>mid){
                count++;
                page=arr[i];
            }
        }
        if(count<=m){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout<<ans;
}