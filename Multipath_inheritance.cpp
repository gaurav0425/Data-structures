#include<iostream>
using namespace std;

class Human{
    public:
    string name;

    void display(){
        cout<<"My name is "<<name<<endl;
    }
};

class Enginner : public virtual Human{
    public:
    string specialization;

    void work(){
        cout<<"I have a specialization in "<<specialization<<endl;
    }
};

class Youtuber : public virtual Human{
    public:
    int subscribers;

    void contentcreator(){
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};


class codeTeacher : public Enginner,public Youtuber{
    public:
    int salary;

    codeTeacher(string specialization,int subscribers,string name,int salary){
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->name = name;
        this->salary = salary;
    }
};
int main(){
   codeTeacher C1("developer",120,"gaurav",200);
   C1.contentcreator();
   C1.work();
   C1.display();
}