// #include<iostream>
// #include<vector>
// using namespace std;

// void subsequence(int arr[],int index,int n,vector<vector<int > >&ans,vector<int>&temp){
//     if(index==n){
//         ans.push_back(temp);
//         return;
//     }

//     //value not included
//     subsequence(arr,index + 1,n,ans,temp);
    
//     //value included
//     temp.push_back(arr[index]);
//     subsequence(arr,index+1,n,ans,temp);
//     temp.pop_back();
// }

// int main(){
//     int arr[] = {1,2,3};
//     vector<vector<int> >ans;
//     vector<int>temp;
//     subsequence(arr,0,3,ans,temp);

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



#include<iostream>
#include<vector>
using namespace std;

void Subset(string &s,int index,int n,vector<string>&ans,string &temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }

     //Not included
    Subset(s,index+1,n,ans,temp);

    //included
    temp.push_back(s[index]);
    Subset(s,index+1,n,ans,temp);
    
    temp.pop_back();
}

int main(){
    string s = "abcd";
    vector<string>ans;
    string temp;
    Subset(s,0,s.size(),ans,temp);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}