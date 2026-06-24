#include<iostream>
using namespace std;

int main(){
    // char arr[] = {'a','p','p','l','e'};
    // // cout<<arr;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i];
    // }
    // char arr[20];
    // cin>>arr;
    // cout<<arr;

    // string s = "Gaurav";
    // cout<<s;

    // string s;
    // cin>>s;
    // cout<<s;

    // string name;
    // getline(cin,name);
    // cout<<name;


    // string name = "gaurav";
    // cout<<name.size();

    // string firstname = "Gaurav";
    // string Lastname = "Nayal";

    // cout<<firstname + Lastname;

    // string name = "gaurav";
    // name.push_back('t');
    // name.pop_back();
    // cout<<name;

    // string s = "gaurav is a \"goodboy\" uk ";
    // cout<<s;

    // string s = "Gaurav";
    // for(int i=5;i>=0;i--){
    //     cout<<s[i];
    // }

    // int start = 0,end = s.size()-1;
    // while(start<end){
    //     swap(s[start],s[end]);
    //     start++;
    //     end--;
    // }
    // cout<<s;
    

    //calculate size without using size 
    // int size = 0;
    // while(s[size]!='\0'){
    //     size++;
    // }
    // cout<<size;


    //Palindrome

    // string name = "naman";
    // int start = 0,end = name.size()-1;
    // while(start<end){
    //     if(name[start]!=name[end]){
    //         cout<<"Not a palindrome";
    //         return 0;
    //     }
    //     start++,end--;
    // }
    // cout<<"palindrome";


    string address = "1.1.1.1";
    string ans;
    int index = 0;;
    while(index<address.size()){
        if(address[index]=='.'){
            ans = ans + "[.]";
        }else{
            ans = ans + address[index];
        }
        index++;
    }
    cout<<ans;
}