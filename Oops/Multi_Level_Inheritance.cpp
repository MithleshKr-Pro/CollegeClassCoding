#include <iostream>
using namespace std;

class Person{
    protected:
        string name;

    public:

        void introduce(){
            cout<<"Hello! My name is "<<name<<endl;
        }
};

class Employee : public Person{
    protected:
        int salary;

    public:
        void monthly_salary(){
            cout<<"My monthly salary is:"<<salary<<endl;

        }
};

class Manager : public Employee{
    public:
        string department;
    Manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this -> department = department;
    }

    void work(){
        cout<<"I am leading the Department of "<<department<<endl;
    }

};

int main(){

    Manager M1("Rohit",200, "Finance");
    M1.introduce();
    M1.work();



    return 0;
}