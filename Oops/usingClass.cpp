#include<iostream>
using namespace std;

    class person{
        char name[30];
        int age;
        public:
            void getData(void);
            void displayData(void);          
    };
    void person::getData(void){
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Age : ";
        cin>>age;
    }
    void person::displayData(void){
        cout<<"\n Name : "<<name;
        cout<<"\n Age : "<<age;
    }

int main(){

    person p;
    p.getData();
    p.displayData();






    return 0;
}