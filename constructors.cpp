#include<iostream>
using namespace std;
class Student{//creating new datatype student 
    public:
    string name;//intialisation
    int rno;
    float gpa;
//creating constructor parametrized
    Student(string s, int r, float g){// this is a parametrized constructor as it takes parameters
        name=s;
        rno=r;
        gpa=g;
    }
    Student(string s, int r){// multiple constructor
        name=s;
        rno=r;
    }
    //default constructor
    Student(){

    }
};
int main(){
    Student s1("Alice", 78,8.2);
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    Student s2("radhika",88,9.2);
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    Student s3(s1);// copy constructor
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;


}