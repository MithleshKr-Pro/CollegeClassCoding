#include <iostream>
using namespace std;

class Human{
    private:
        string name;
        int age,weight;

    
};

class student:public Human{
    int roll_no,fees;
};

int main(){
    Human Mithlesh;
    student A;
    A.name="Mithu";




    return 0;
}