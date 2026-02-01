#include<iostream>
using namespace std;
class Student{//creating new datatype student 
    public:
    string name;//intialisation
    int rno;
    float gpa;
};
int main(){
    Student s ;
    s.name="Raghav";//declaration
    s.rno=76;
    s.gpa=8.2;
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa;
}