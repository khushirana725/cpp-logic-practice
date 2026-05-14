#include <iostream>
using namespace std;
class A{
    public:
       A(){
        cout<<"BASE CLASS CONSTRUCTOR."<<endl;
       }
};
class B:public A{
    public:
      B(){
        cout<<"DERIVED CLASS CONSTRUCTOR."<<endl;
      }
};
int main(){
    B b;//Constructor workflow runs in top to bottom.
    //So, Base class Constructor will be called first and then Derived class Constructor
    return 0;
}
//ci.exe
//g++ classAndObject\inheritance\constructorInherit.cpp -o ci             