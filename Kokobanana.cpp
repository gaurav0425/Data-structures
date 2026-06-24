#include<iostream>
using namespace std;

int main(){
    int arr[4] = {3,6,7,11};
    int start = 1,end=11,mid,ans;
    int k=8;
    while(start<=end){
        mid = start + (end-start)/2;
        int hours=0;
       for(int i=0;i<4;i++){
        hours += (arr[i] + mid - 1) / mid;
       }
        if(hours<=k){
            ans = mid;
            end= mid-1;
        }else{
            start = mid + 1;
        }
    }
    cout<<ans;
}