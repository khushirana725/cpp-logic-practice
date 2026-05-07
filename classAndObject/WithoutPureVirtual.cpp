#include <iostream>
using namespace std;
class Vehicle{
    public:
       void price(float mrp){
             cout<<"parent class"<<endl<<mrp<<endl;
       }
};
class Car:public Vehicle{
    public:
        void price(float mrp){
            cout<<"child class"<<endl<<mrp<<endl;
        }
};
int main(){
    float price;
    cout<<"enter the price of the car:";
    cin>>price;
    Vehicle v; //will not cause an error because Vehicle is not an abstract class
    v.price(price);//run like a normal function //no abstraction is achieved in this
    Car c;
    c.price(price);
    return 0;
}
//wpv.exe