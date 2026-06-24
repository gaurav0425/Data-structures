// #include<iostream>
// using namespace std;
// void rotateclockwise(string &s){
//     char c = s[s.size()-1];
//     int index = s.size()-2;
//     while(index>=0){
//         s[index+1] = s[index];
//         index--;
//     }
//     s[0]=c;
// }

// void rotateanticlockwise(string &s){
//     char c = s[0];
//     int index=0;
//     while(index<s.size()-1){
//         s[index] = s[index + 1];
//         index++;
//     }
//     s[s.size()-1] = c;
// }
// int main(){
//     string s = "amazon";
//     string clockwise = s;
//     string anticlockwise = s;
//     rotateclockwise(clockwise);
//     rotateclockwise(clockwise);
//     cout<<clockwise<<endl;
//     rotateanticlockwise(anticlockwise);
//     rotateanticlockwise(anticlockwise);
//     cout<<anticlockwise;
// }

//a m a z o n
//0 1 2 3 4 5


//PANGRAM

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     string sentence = "the quick brown fox jumps over the lazy dog";
//     vector<int>alpha(26,0);
//     for(int i=0;i<sentence.size();i++){
//         alpha[sentence[i]-'a'] = 1;
//     }
//     for(int i=0;i<26;i++){
//         if(alpha[i]==0){
//             cout<<"Not a pangram";
//             return 0;
//         }
//     }
//     cout<<"Pangram";
// }

//Sort a string

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     string s = "eabcabd";
//     vector<int>alpha(26,0);
//     for(int i=0;i<s.size();i++){
//         alpha[s[i]-'a']++;
//     }
//     string ans;
//     for(int i=0;i<26;i++){
//         char c = 'a' + i;
//         while(alpha[i]){
//             ans+=c;
//             alpha[i]--;
//         }
//     }
//     cout<<ans;
// }



//Longest palindrome


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     string s = "abccccdd";                      
//     vector<int>lower(26,0),upper(26,0);
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='a'){
//             lower[s[i]-'a']++;
//         }else{
//             upper[s[i]-'A']++;
//         }
//     }
//     int count=0;
//     bool odd=0;
//     for(int i=0;i<26;i++){
//         if(lower[i]%2==0){
//             count+=lower[i];
//         }else{
//             count+=lower[i]-1;
//             odd=1;
//         }
//         if(upper[i]%2==0){
//             count+=upper[i];
//         }else{
//             count+=upper[i]-1;
//             odd=1;
//         }
//     }
//     cout<<count + 1;
// }


//Sorting a sentence


#include<iostream>
#include<vector>

// using namespace std;

// int main(){
//     vector<string>ans(10);
//     string s = "is2 sentence4 this1 a3";
//     string temp;
//     int count =0,index = 0;
//     while(index<s.size()){
//         if(s[index]==' '){
//             int pos = temp[temp.size()-1]-'0';
//             temp.pop_back();
//             ans[pos] = temp;
//             temp.clear();
//             count++;
//         }else{
//             temp+=s[index];
//         }
//         index++;
//     }
//      int pos = temp[temp.size()-1]-'0';
//             temp.pop_back();
//             ans[pos] = temp;
//             temp.clear();
//             count++;
//             for(int i=1;i<=count;i++){
//                 temp+=ans[i];
//                 temp+=' ';
//             }
//             temp.pop_back();
//             cout<<temp;

// }

//Sort vowels

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     string s = "lEetcOde";
//     vector<int>upper(26,0);
//     vector<int>lower(26,0);

//     for(int i=0;i<s.size();i++){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//             lower[s[i]-'a']++;
//             s[i]='#';
//         }else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
//             upper[s[i]-'A']++;
//             s[i] = '#';
//         }
//     }
//     string ans;
//     for(int i=0;i<26;i++){
//         char c = 'A' + i;
//         while(upper[i]){
//             ans+=c;
//             upper[i]--;
//         }
//     }
//     for(int i=0;i<26;i++){
//         char c = 'a' + i;
//         while(lower[i]){
//             ans+=c;
//             lower[i]--;
//         }
//     }
//     int first = 0,second=0;
//     while(second<ans.size()){
//         if(s[first]=='#'){
//             s[first]=ans[second];
//             second++;
//         }
//         first++;
//     }
//     cout<<s;
// }



//ADD two strings


// #include<iostream>
// #include<algorithm>
// using namespace std;

// string addStrings(string num1,string num2){
//     int index1=num1.size()-1,index2 = num2.size()-1;
//     string ans;
//     int sum,carry=0;
//     while(index2>=0){
//         sum = (num1[index1]-'0') + (num2[index2]-'0') + carry;
//         carry = sum/10;
//         char c = '0' + sum%10;
//         ans+=c;
//         index2--;
//         index1--;
//     }
//     while(index1>=0){
//          sum = (num1[index1]-'0') + carry;
//          carry = sum/10;
//           char c = '0' + sum%10;
//         ans+=c;
//         index1--;
//     }
//     if(carry){
//         ans+='1';
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;

// }

// int main(){
//     string num1 = "26583";
//     string num2 = "698";
//     if(num1.size()<num2.size()){
//         cout<<addStrings(num2,num1);
//     }else{
//         cout<<addStrings(num1,num2);
//     }
// }


//Roman to integer

// #include<iostream>
// using namespace std;
// int num(char c){
//     if(c=='I'){
//         return 1;
//     }else if(c=='V'){
//         return 5;
//     }else if(c=='X'){
//         return 10;
//     }else if(c=='L'){
//         return 50;
//     }else if(c=='C'){
//         return 100;
//     }else if(c=='D'){
//         return 500;
//     }else{
//         return 1000;
//     }
// }
// int main(){
//     string s = "LVIII";
//     int sum=0;
//     int index=0;
//     while(index<s.size()-1){
//         if(num(s[index])<num(s[index+1])){
//             sum-=num(s[index]);
//         }else{
//             sum+=num(s[index]);
//         }
//         index++;
//     }
//     sum+=num(s[index]);
//     cout<<sum;
// }



// ******************************** Sliding window  *************************



//Longest substring without repeating character

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s = "abcdecbeadf";

//     vector<bool>count(256,0);
//     int first = 0,second=0,len=0;
//     while(second<s.size()){
//         while(count[s[second]]){
//             count[s[first]] = 0;
//             first++;
//         }
//         count[s[second]] = 1;
//         len = max(len,second-first+1);
//         second++;
//     }
//     cout<<len;
// }


//Small distinct window

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s = "AABBBCBBAC";
//     vector<int>count(256,0);
//     int first=0,second=0,len=INT8_MAX,diff=0;
//     while(first<s.size()){
//         if(count[s[first]]==0){
//             diff++;
//         }
//         count[s[first]]++;
//         first++;
//     }

//     for(int i=0;i<256;i++){
//         count[i] = 0;
//     }

//     first = 0;
//     while(second<s.size()){

//         // diff  exist krta hai it means sarre unique char ni mile
//         while(diff && second<s.size()){
//             if(count[s[second]]==0)
//             diff--;
            
//             count[s[second]]++;
//             second++;
//         }
//         len = min(len,second-first);
//         //diff ki value 1 na ho jaye tb tk character remove krte raho jaise hi 1 ho it means sarre unique character ni hai
//         while(diff!=1){
//             len = min(len,second-first);
//             count[s[first]]--;
//             if(count[s[first]]==0)
//             diff++;

//             first++;
//         }
//     }
//     cout<<len;
// }




// PREFIX nd SUFFIX

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
    
// int arr[6] = {6,4,5,-3,2,8};
// // vector<int>prefix(6);
// // prefix[0] = arr[0];
// // for(int i=1;i<6;i++){
// //     prefix[i] = prefix[i-1] + arr[i];
// // }

// // for(int i=0;i<6;i++){
// //     cout<<prefix[i]<<" ";
// // }

// // vector<int>suffix(6);
// // suffix[5] = arr[5];
// // for(int i=4;i>=0;i--){
// //     suffix[i] = arr[i] + suffix[i+1];
// // }
// // for(int i=0;i<6;i++){
// //     cout<<suffix[i]<<" ";
// // }
// }



// longest prefix sufix 

//Brute approach

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     string s = "ABCDEABCD";
//     int n = s.size();
//     vector<string>prefix(n);
//     vector<string>suffix(n);

//     prefix[0] = s[0];
//     for(int i=1;i<n;i++){
//         prefix[i] = prefix[i-1] + s[i];
//     }

//     suffix[8] = s[8];
//     for(int i = n-2;i>=0;i--){
//         suffix[i] = s[i] + suffix[i+1];
//         // cout<<suffix[i]<<" ";
//     }
//     // cout<<prefix[0]<<endl;
//     // cout<<suffix[0];
//     string ans = "";

//     for(int len = n-1; len >= 1; len--) {
//         if(prefix[len-1] == suffix[n-len]) {
//             ans = prefix[len-1];
//             break;
//         }
//     }

//     cout << ans;
// }


//longest prefix nd sufix
//kmp

// #include<iostream>
// using namespace std;
// int main(){
//     string s = "ABCABDABCABDABDAB";
//     vector<int>lps(s.size(),0);
//     int pre=0,suf=1;
//     while(suf<s.size()){
//         if(s[pre]==s[suf]){
//             lps[suf] = pre+1;
//             pre++;
//             suf++;
//         }else{
//             if(pre==0){
//                 lps[suf] = 0;
//                 suf++;
//             }else{
//                 pre = lps[pre-1];
//             }
//         }
//     }
//     cout<<lps[s.size()-1];
// }



// //circular pattern matching

// #include<iostream>
// using namespace std;

// int main(){
// string s = "cdeabroab";
// string ans = "abcd";

// string doubletext = s + s;


// }



//Min char add to make palindrome

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s = "ROORSP";
    int size = s.size();
    string rev = s;
    reverse(rev.begin(),rev.end());
    s+='$';
    s+=rev;
    int n = s.size();
    vector<int>lps(n,0);
    int pre = 0,suf = 1;
    while(suf<s.size()){
        if(s[pre]==s[suf]){
            lps[suf] = pre+1;
            pre++;
            suf++;
        }else{
            if(pre==0){
                lps[suf] = 0;
                suf++;
            }else{
                pre = lps[pre-1];
            }
        }
    }
    cout<<size - lps[n-1];

}
