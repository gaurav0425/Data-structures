// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     //File ko open
//     ofstream fout;
//     fout.open("zoom.txt");  //If file present ni hui to create krdega nd open krega
//     //Write in that file
//     fout<<"hello india";

//     fout.close();  //Resources release
// }

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr(5);

    cout << "Enter the input : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // open file
    ofstream fout;
    fout.open("zero.text");

    fout << "Original data\n";
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }

    fout << "\nSorted data\n";
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }

    fout.close();
}