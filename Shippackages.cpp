#include<iostream>
using namespace std;

int main(){
    int arr[6] = {3,2,2,4,1,4};
    int start=4,end=16,mid,ans,days=3;
    while(start<=end){
        mid = start + (end-start)/2;
        int item=0,count=1;
        for(int i=0;i<6;i++){
            item+=arr[i];
            if(item>mid){
                count++;
                item=arr[i];
            }
        }
        if(count<=days){
            ans=mid;
            end = mid-1;
        }else{
            start = mid + 1;
        }
    }
    cout<<ans;
}