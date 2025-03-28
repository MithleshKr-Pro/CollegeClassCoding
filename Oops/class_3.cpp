#include <iostream>
using namespace std;

class cl{

};
class cl2{
    double d;
    int i1;  
    char c1; 
    char c2; 
};

int main(){
    cout<<sizeof(cl)<<endl;
    cout<<sizeof(cl2)<<endl;
    string c;
    cout<<sizeof(c)<<endl;
    return 0;
}
