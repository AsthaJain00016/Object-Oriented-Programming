#include<iostream>
using namespace std;
class Cricketer {
    public:
    string name;
    int runs;
    float avg;
    Cricketer (string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};
void change(Cricketer*c){
    //(*c).avg=77.2;
    c->avg=69;
};
int main(){
    Cricketer c1("Virat kohli",25000,55.2);
    //Cricketer* p1=&c1;
    //cout<<(*p1).runs;
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg;
}