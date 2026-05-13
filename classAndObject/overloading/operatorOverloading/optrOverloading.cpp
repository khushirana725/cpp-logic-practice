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
    void operator++();
    void operator++(int);
    void display();
};
void opr::operator++(int){
    a++;
    b++;
    c++;
}
void opr::operator++(){
    ++a;
    ++b;
    ++c;
}
void opr::display(){
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}
int main() {
    cout<<"before method overloading"<<endl;
    opr o1(23,21,7);
    o1.display();
    cout<<"---------------------------------------------"<<endl;
    cout<<"post-increment:-"<<endl;
    o1++;
    o1.display();
    cout<<"---------------------------------------------"<<endl;
    cout<<"pre-increment:-"<<endl;
    ++o1;
    o1.display();
    return 0;}
//opOver.exe
//g++ classAndObject\overloading\operatorOverloading\optrOverloading.cpp -o opOver