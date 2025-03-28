#include<iostream>
using namespace std;

class Customer{
    string name;
    int *data;

    public:
        Customer()
        {
            data = new int;
            *data = 10;
            cout<<"Constructor is "<<name<<endl;
        }

        Customer(string name)
        {
            this->name = name;
            cout<<name<<endl;
        }

        ~Customer()
        {
            delete data;
            cout<<"Destructor is "<<name<<endl;
        }
};


int main(){

    Customer C1("1"),C2("2"),C3("3");



    return 0;
}