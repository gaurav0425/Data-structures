#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // //create vector declare
    // vector<int>v;
    // vector<int>v1(5,2);

    // //Size and capacity
    // cout<<"size of v : "<<v.size()<<endl;
    // cout<<"Capacity of v : "<<v.capacity()<<endl;
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(8);
    // cout<<"size of v : "<<v.size()<<endl;
    // cout<<"Capacity of v : "<<v.capacity()<<endl;

    // //Update value
    // v[1] = 5;
    // cout<<"size of v : "<<v1.size()<<endl;
    // cout<<"Capacity of v : "<<v1.capacity()<<endl;
    // v1.push_back(9);
    // cout<<"size of v : "<<v1.size()<<endl;
    // cout<<"Capacity of v : "<<v1.capacity()<<endl;

    // Delete from vector
    // vector<int> vnew;
    // vnew.push_back(5);
    // vnew.push_back(7);
    // vnew.push_back(8);
    // vnew.push_back(9);
    // vnew.push_back(3);
    // vnew.pop_back();
    // cout << "size of vnew : " << vnew.size() << endl;
    // cout << "Capacity of vnew : " << vnew.capacity() << endl;
    // vnew.erase(vnew.begin() + 2);
    // cout << "size of vnew : " << vnew.size() << endl;
    // cout << "Capacity of vnew : " << vnew.capacity() << endl;

    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // vnew.insert(vnew.begin() + 1, 50); // Insert value
    // cout << endl;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // vnew[1] = 69;
    // cout<<endl;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout<<endl;
    // vnew.clear();
    // cout << "size of vnew : " << vnew.size() << endl;
    // cout << "Capacity of vnew : " << vnew.capacity() << endl;
    

    // vector<int>arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);


    // //Front element
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    
    // //Last element
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // //copy value of 1 vector to another
    // vector<int>a;
    // a = arr;
    // cout<<a.size();
    // cout<<endl;
    // for(auto it = arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto i:arr)
    // cout<<i<<" ";

    //Sort

    vector<int>ans;
    ans.push_back(30);
    ans.push_back(20);
    ans.push_back(5);
    ans.push_back(2);
    ans.push_back(25);

    //Sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    // //sort in decreasing order

    // // sort(ans.begin(),ans.end(),greater<int>());
    
    // //Aletrnative way
    
    // sort(ans.rbegin(),ans.rend());
    //  for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    //Binary search 

    // cout<<binary_search(ans.begin(),ans.end(),5)<<endl;

    //Find index of an element
    cout<<find(ans.begin(),ans.end(),25)-ans.begin()<<endl;
}