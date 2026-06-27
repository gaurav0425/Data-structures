// #include<iostream>
// using namespace std;

// int PerfectSum(int arr[],int index,int n,int sum){

//     if(sum==0){
//         return 1;
//     }
//     if(index==n || sum<0){
//         return 0;
//     }

//     return PerfectSum(arr,index+1,n,sum) + PerfectSum(arr,index+1,n,sum - arr[index]);
// }

// int main(){
//     int arr[] = {2,5,6,1};
//     int sum = 8;
//     cout<<PerfectSum(arr,0,4,sum);
// }






//

#include<iostream>
using namespace std;

int PerfectSum(int arr[],int index,int n,int sum){

    if(index==n){
        // if(sum==0){
        //     return 1;
        // }else{
        //     return 0;
        // }
        return sum==0;
    }

    return PerfectSum(arr,index+1,n,sum) + PerfectSum(arr,index+1,n,sum - arr[index]);
}

int main(){
    int arr[] = {1,0};
    int sum = 1;
    cout<<PerfectSum(arr,0,2,sum);
}