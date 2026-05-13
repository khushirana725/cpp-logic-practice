#include <iostream>
using namespace std;
class A{
    private:
        int a;
    public:
        A(int a){
            this->a=a;
        }
        int operator>(A&obj){
            if(a>obj.a)
                return 1;
            else 
                return 0;
        }
};
int main(){
    A x(50),y(20);
    if(x>y)
        cout<<"first object is greater";
    else 
        cout<<"second object is greater";
    return 0;
}
//relOvr.exe
// g++ classAndObject\overloading\relationalOverl.cpp -o relOvr              