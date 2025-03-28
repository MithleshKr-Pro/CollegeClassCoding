#include <iostream>
using namespace std;

//Student
//Boy
//Girl
//Male
//Female

class Student{
    public:
        void print(){
            cout<<"I am Student. \n";
        }
};

class Male{
    public:
        void Male_Print(){
            cout<<"I am Male"<<endl;
        }

};

class Female{
    public:
        void Female_Print(){
            cout<<"I am Female"<<endl;
        }
};

class Boy:public Student,public Male{
    public:
        void print(){
            cout<<"I am Boy"<<endl;
        }
};

class Girl:public Student,public Female{
    public:
        void Girl_Print(){
            cout<<"I am a Girl"<<endl;
        }
};



int main(){

    Girl G1;
    G1.Girl_Print();

    return 0;
}