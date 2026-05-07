#include <iostream>
using namespace std;
class Vehicle{//Vehicle is the abstract class here which should have atleast 1 pure virtual function
    public:
       virtual void price(float mrp)=0;
};
class Car:public Vehicle{
    public:
        void price(float mrp){//function overridding of pure virtual function
            cout<<mrp;
        }
};
int main(){
    //Vehicle v; //will cause an error
    Car c;
    float price;
    cout<<"enter the price of the car:";
    cin>>price;
    c.price(price);//price function of class Car will be executed
    return 0;
}
//pv.exe