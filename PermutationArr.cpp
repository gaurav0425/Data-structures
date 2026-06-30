// #include<iostream>
// #include<vector>
// using namespace std;

// void permutation(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited){

//     if(visited.size()==temp.size()){
//         ans.push_back(temp);
//         return;
//     }

//     for(int i=0;i<visited.size();i++){
//         if(visited[i]==0){
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permutation(arr,ans,temp,visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }

// int main(){
//     int arr[] = {1,2,3};
//     vector<vector<int>>ans;
//     vector<int>temp;
//     vector<bool>visited(3,0);
//     permutation(arr,ans,temp,visited);

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// If we not use temp nd visited vector

// #include <iostream>
// #include <vector>
// using namespace std;

// void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
// {

//     if (index == arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }

//     for (int i = index; i < arr.size(); i++)
//     {
//         swap(arr[i], arr[index]);
//         permut(arr, ans, index + 1);
//         swap(arr[i], arr[index]);
//     }
// }

// int main()
// {
//     vector<int> arr;
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     vector<vector<int>> ans;

//     permut(arr, ans, 0);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


//Permutation II

//Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

// #include<iostream>
// #include<vector>
// using namespace std;

// void permut(vector<int>&arr,vector<vector<int>>&ans,int index){

//     if(index==arr.size()){
//         ans.push_back(arr);
//         return;
//     }

//     vector<bool>use(21,0);
//     for(int i=index;i<arr.size();i++){
//         if(use[arr[i] + 10]==0){
//             swap(arr[i],arr[index]);
//             permut(arr,ans,index+1);
//             swap(arr[i],arr[index]);
//             use[arr[i] + 10] = 1;
//         }
//     }
// }

// int main(){
//     vector<int>arr;
//     arr.push_back(1);
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(2);
//     vector<vector<int>>ans;
    
//     permut(arr,ans,0);


//      for (int i = 0; i < ans.size(); i++)
//      {
//          for (int j = 0; j < ans[i].size(); j++)
//          {
//              cout << ans[i][j] << " ";
//          }
//        cout << endl;
// }
// }



//Ways to sum n 

#include<iostream>
#include<vector>
using namespace std;

int ways(vector<int>&arr,int sum,int n){

    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=ways(arr,sum-arr[i],n);
    }
    return ans;
}

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(6);
    int sum = 7;

    cout<<ways(arr,sum,arr.size());
}