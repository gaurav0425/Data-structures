// #include<iostream>
// #include<vector>
// using namespace std;

// void SubsetSum(int arr[],int index,int n,vector<int>&temp){
//     if(index==n){
//         int sum = 0;
//         for(int i=0;i<temp.size();i++){ 
//             sum+=temp[i];
//         }

//         for(int i=0;i<temp.size();i++){
//             cout<<temp[i]<<" ";
//         }
//         cout<<"=> ";
//         cout<<sum<<endl;
//         return;
//     }

//     //value not included
//     SubsetSum(arr,index+1,n,temp);

//     //value included
//     temp.push_back(arr[index]);
//     SubsetSum(arr,index+1,n,temp);

//     temp.pop_back();
// }

// int main(){
//     int arr[] = {1,2,3};
//     vector<int>temp;

//     SubsetSum(arr,0,3,temp);
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// void print(int arr[],int index,int n,int sum,vector<int>&ans){
//     if(index==n){
//         ans.push_back(sum);
//         return;
//     }

//     //value not included
//     print(arr,index+1,n,sum,ans);

//     //value included
//     print(arr,index+1,n,sum + arr[index],ans);

// }

// int main(){
//     int arr[] = {1,2,3};
//     vector<int>ans;
//     print(arr,0,3,0,ans);

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }
// }






// ****************** Target Sum ****************
#include<iostream>
using namespace std;

bool find(int arr[],int index,int n,int target){
    if(target==0){
        return 1;
    }
    if(index==n||target<0){
        return 0;
    }
    return find(arr,index+1,n,target)||find(arr,index+1,n,target-arr[index]);
}


int main(){
    int arr[] = {2,4,1,8,7};
    int target = 19;
    cout<<find(arr,0,5,target);
}