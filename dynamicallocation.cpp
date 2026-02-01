#include<iostream>
using namespace std;
class cricketer{
    public:
    string name ;
    int runs;
    cricketer(string name, int runs){
        this->name = name;//here this keyword is used
        this->runs= runs;
    }
};
int main(){
    cricketer c1("virat kohli",25000);
    cricketer *c2=new cricketer("Rohit Sharma",16000);//this will store in heap
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs;
}