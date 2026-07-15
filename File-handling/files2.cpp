//Read the data

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin;
    //open the file

    fin.open("zoom.txt");
    //Read the file

    // char c;
    // fin>>c;

    char c;
    c = fin.get();

    while(!fin.eof()){
        cout<<c;
        // fin>>c;
        c = fin.get();
    }

    fin.close();
}