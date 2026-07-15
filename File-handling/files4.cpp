#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>arr(5);
    

    cout<<"Enter the number : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    //open file
    ofstream fout;
    fout.open("practice.txt");

    fout<<"Original array\n";
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }

    fout<<"\nSorted array\n";
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout.close();

    ifstream fin;
    fin.open("practice.txt");


    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}