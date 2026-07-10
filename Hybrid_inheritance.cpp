#include<iostream>
using namespace std;

class Student{
    public:
    void print(){
        cout<<"I am a student"<<endl;
    }
};

class Male{
    public:
    void printMale(){
        cout<<"Male"<<endl;
    }
};

class Female{
    public:
    void printFemale(){
        cout<<"Female"<<endl;
    }
};


class Boy : public Student,public Male{
    public:
    void boyprint(){
        cout<<"I am a boy"<<endl;
    }
};

class Girl : public Student,public Female   {
    public:
    void girlprint(){
        cout<<"I am a girl"<<endl;
    }
};


int main(){
    Girl g1;
    g1.printFemale();
    g1.print();
    Boy b1;
    b1.printMale();
    b1.print();
}