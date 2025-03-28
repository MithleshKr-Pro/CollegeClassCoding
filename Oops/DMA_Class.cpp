#include <iostream>
using namespace std;
class student{
    private:
        string name;
        string grade; 
        int roll_no;
        int age;

    public:
        void stud_data(){
            cout<<"Enter your Name : ";
            cin>>name;
            cout<<"Enter your Roll No. : ";
            cin>>roll_no;
            cout<<"Enter your Age : ";
            cin>>age;
            cout<<"Enter your Grade : ";
            cin>>grade;
            cout<<name<<" "<<roll_no<<" "<<age<<" "<<grade<<endl;
        }
        
};

int main(){
    student *s1 = new student;
    student *s2 = new student;
    student *s3 = new student;

    cout<<sizeof(student)<<endl;
    (*s1).stud_data();
    (*s2).stud_data();
    (*s3).stud_data();

    return 0;
}