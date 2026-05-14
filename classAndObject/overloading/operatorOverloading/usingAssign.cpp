#include <iostream>
using namespace std;
class opr{
    int a,b,c;
   public:
    opr(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    opr(){}//default constructor
    opr operator++();
    opr operator++(int);
    void display();
};
opr opr::operator++(){
    ++a;
    ++b;
    ++c;
    return *this;
}
opr opr::operator++(int){
    opr temp=*this;
    a++;
    b++;
    c++;
    return(temp);
}
void opr::display(){
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}
int main() {
    cout<<"before operator overloading"<<endl;
    opr o1(23,21,7),o2;
    o1.display();
    cout<<"---------------------------------------------"<<endl;
    cout<<"storing post-incremented values using the previous object:"<<endl;
    o2=o1++;
    o2.display();
    cout<<"---------------------------------------------"<<endl;
    cout<<"storing pre-incremented values using the previous object:"<<endl;
    o2=++o1;
    o2.display();
    return 0;}
//useA.exe
//g++ classAndObject\overloading\operatorOverloading\usingAssign.cpp -o useA