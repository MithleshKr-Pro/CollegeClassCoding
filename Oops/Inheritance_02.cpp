#include<iostream>
using namespace std;

class Human{
    protected:
        string name;
        int age;
    public:
        void work(){
            cout<<"I am Working"<<endl;
        }
        
        Human(string name,int age){
            this->name = name;
            this->age  = age;
        }
};

class Student:public Human{
    int roll_no,fees;
    public:
        Student(string name, int age, int roll_no, int fees) : Human(name,age){
            this->roll_no = roll_no;
            this->fees = fees;
        }
};

int main(){
    Student A1("Rohit",26,32,99);
    A1.work();

    return 0;
}