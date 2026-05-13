#include <iostream>
#include <string>
using namespace std;
class add{
    int a,b,c,sum=0;
   public:
    add(int a,int b){
        this->a=a;
        this->b=b;
        sum=a+b;
    }
    add(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
        sum=a+b+c;
    }
    void display();
};
void add::display(){
    cout<<"the sum of numbers entered is:"<<sum<<endl;
}
int main() {
    cout<<"using 2 parameters:-"<<endl;
    add s1(23,45);
    s1.display();
    cout<<"---------------------------------------------"<<endl;
    cout<<"using 3 parameters:-"<<endl;
    add s2(23,20,7);
    s2.display();
    return 0;}
//cOver.exe
//g++ classAndObject\overloading\conOverloading.cpp -o cOver