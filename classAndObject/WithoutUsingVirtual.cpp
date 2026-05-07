#include <iostream>
using namespace std;
class Parent{
    public:
       void display(){
          cout<<"Parent Class Being Displayed here";
       }
};
class Child:public Parent{
    public:
       void display(){
          cout<<"Child Class Being Displayed here";
       }
};
int main(){
    Parent *p;//pointer of Parent class is created
    Child c;//Object of Child class is created
    p=&c;//POinter of Parent class is pointing the object of Child class
    p->display();//Display func being called
    return 0;
}//as pointer is pointing the object of Child class so, expected output will be of Child class
//but Parent class func is being displayed by pointer 

//wvf.exe