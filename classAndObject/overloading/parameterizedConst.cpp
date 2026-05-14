#include <iostream>
using namespace std;
class incr{
    protected:
      int n1,n2;
    public:
       incr(){}
       incr(int a,int b){
        n1=a;
        n2=b;
       }
       void inc(){
        n1++;
        n2++;
       }
       void show(){
        cout<<"after increment:"<<endl;
        cout<<n1<<"\t"<<n2<<endl;
       }
};
class decr:public incr{
    public:
       decr(int a,int b):incr(a,b){
         n1--;
         n2--;
         cout<<"after decrement:"<<endl;
         cout<<n1<<"\t"<<n2<<endl; 
       }
};
int main(){
    decr d(27,30);
    d.inc();
    d.show();
    return 0;
}
//pfc.exe
//g++ classAndObject\overloading\parameterizedConst.cpp -o pfc 