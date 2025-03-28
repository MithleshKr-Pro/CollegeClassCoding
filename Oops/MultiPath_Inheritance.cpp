#include <iostream>
using namespace std;

class Human{
    public:
    string name;
};

class Engineer :public Human
{
    void money()
    {
        cout<<"Hello Money\n";
    }

    public:
    string specialisation;
        
    Engineer()
    {
        cout<<"Hello Engineer\n";
    }

    void work()
    {
        cout<<"I have specialisation in "<<specialisation<<endl;
    }

};

class Youtuber : public Human{

};


int main(){



    return 0;
}