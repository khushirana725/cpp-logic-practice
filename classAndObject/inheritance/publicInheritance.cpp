#include <iostream>
using namespace std;
class add{
    protected:
       int x,y;
    public:
       void getdata(){
        cout<<"enter two numbers: ";
        cin>>x>>y;
       }
       void addition(){
        cout<<"the sum is: "<<x+y<<endl;
       }
};
class Minus:public add{
    public:
    void subtract(){
        cout<<"the subtraction of numbers is: "<<x-y<<endl;
    } 
};
int main(){
    cout<<"using parent/base class:-"<<endl;
    add a;
    a.getdata();
    a.addition();
    cout<<"using derived class:-"<<endl;
    Minus m;
    m.getdata();
    m.addition();
    m.subtract();
    return 0;
}
//pi.exe
//g++ classAndObject\inheritance\publicInheritance.cpp -o pi