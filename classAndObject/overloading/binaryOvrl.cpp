#include <iostream>
using namespace std;
class opr{
    int a;
   public:
    opr(int a){
        this->a=a;
    }
    opr(){}//default constructor
    opr operator+(opr&k);
    void display();
};
opr opr::operator+(opr&k){
    opr temp;
    temp.a=a+k.a;
    return temp;
}
void opr::display(){
    cout<<"o1+o2= "<<a<<endl;
}
int main() {
    opr o1(23),o2(5),o3;
    o3=o1+o2;//o3=o1.operator+(o2);
    o3.display();
    return 0;}
//bOvr.exe
//g++ classAndObject\overloading\binaryOvrl.cpp -o bOvr