#include <iostream>
using namespace std;

class Customer{
    private:
        string name;
        int acc_no;
        int balance;
    public:
    //Constructor Overloading
        Customer(){
            name = "SBI";
            acc_no = 123;
            balance = 0;
        }

        ////Parametrised Constructor
        // Customer(string name,int acc_no,int balance){
        //     (*this).name = name;
        //     (*this).acc_no = acc_no;
        //     (*this).balance = balance;
        // }

        Customer(string name,int acc_no){
            (*this).name = name;
            (*this).acc_no = acc_no;
            this->balance = 0;
        }
        
        //Copy Constructor
        Customer (Customer &B){
            name = B.name;
            acc_no = B.acc_no;
            balance = B.balance;
        }

        inline Customer(string a,int b, int c): name(a),acc_no(b),balance(c){

        }

        void display(){
            cout<<name<<" "<<acc_no<<" "<<balance<<endl;
        }
};

int main(){

    Customer C1("Mithlesh",1200,100);
    Customer C2;
    Customer C3("Aman",1202);
    Customer C4(C2);
    Customer C5;
    C5 = C3;

    C1.display();
    C2.display();
    C3.display();
    C4.display();
    C5.display();
    return 0;
}