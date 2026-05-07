#include <iostream>
using namespace std;
int main(){
    int a=10,b=20;
    int* p=&a;
    int* p1=&b;
    cout<<"original values:"<<endl;
    cout<<"a= "<<*p<<"\t b= "<<*p1<<endl;
    a=*p+*p1;
    b=*p-*p1;
    a=*p-*p1;
    cout<<"values after swapping are:"<<endl;
    cout<<"a= "<<*p<<"\t b= "<<*p1;
    return 0;
}
//po2