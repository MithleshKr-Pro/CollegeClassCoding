#include <iostream>
using namespace std;

class customer{
    string name;
    int acc_no,bal;

    static int total_customers;
    static int total_money;

    public:
        customer(string name, int acc_no, int bal){
            (*this).name = name;
            this->acc_no = acc_no;
            (*this).bal = bal;
            total_customers ++;
            total_money += bal;
        }
    static void display(){
            // cout<<name<<" "<<acc_no<<" "<<bal<<endl;
            cout<<total_customers<<endl;
            cout<<total_money<<endl;
    }
    
    void deposit(int amount){
        if (amount>0){
            bal += amount;
            total_money += amount;
        }
    }

    void withdraw(int amount){
        if(bal>0 && amount<=bal){
            bal -= amount;
            total_money -= amount;
        }
    }

};

int customer::total_customers = 0;
int customer::total_money = 0;

int main(){
    customer c1("Mithlesh",01,1000);
    customer c2("Aman",02,1000);
    customer c3("Amit",03,1000);
    c3.withdraw(100);
    c1.deposit(500);
    customer::display();

    return 0;
}