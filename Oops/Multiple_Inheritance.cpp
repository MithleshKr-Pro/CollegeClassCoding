#include <iostream>

using namespace std;

class Engineer{
    public:
        string specialisation;

    void work(){
        cout<<"I'm specialised in "<<specialisation<<endl;
    }
};

class YouTuber{
    public:
        int subscribers;
    void content_creator(){
        cout<<"I've Subscriber Base of "<<subscribers<<endl;
    }
};

class CodeTeacher:public Engineer,public YouTuber{
    public:
        string name;
    CodeTeacher(string name,string specialisation, int subscribers){
        this-> name = name;
        this->specialisation = specialisation;
        this-> subscribers = subscribers;
    }

    void showcase(){
        cout<<name<<" "<<specialisation<<" "<<endl;
        work();
        content_creator();
    }
};

int main(){

    CodeTeacher C1("Rohit","CSE",171000);

    C1.showcase();

    return 0;
}