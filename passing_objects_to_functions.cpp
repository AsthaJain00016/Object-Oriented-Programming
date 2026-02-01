#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;
    string type;
};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type;
}
int main(){
    car c1;
    c1.name="honda city";
    c1.price=1500000;
    c1.seats=5;
    c1.type="sedan";

    car c2;
    c2.name="maruti suzuki";
    c2.price=700000;
    c2.seats=5;
    c2.type="hatchback";
    print(c1);
    cout<<endl;
    print(c2);
}