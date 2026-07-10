#include<iostream>
using namespace std;

class Enginner{
    public:
    string specialization;

    void work(){
        cout<<"I have a specialization in "<<specialization<<endl;
    }
};

class Youtuber{
    public:
    int subscribers;

    void contentcreator(){
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};


class codeTeacher : public Enginner,public Youtuber{
    public:
    string name;

    codeTeacher(string specialization,int subscribers,string name){
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->name = name;
    }

    void displayname(){
        cout<<"My name is "<<name<<endl;
        work();
        contentcreator();
    }
};
int main(){
    codeTeacher c1("FullStack development",100000,"gaurav");
    // c1.work();
    // c1.contentcreator();
    c1.displayname();
}