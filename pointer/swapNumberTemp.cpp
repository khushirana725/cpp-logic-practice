#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int* p=&a;
    int* p1=&b;
    cout<<"original values:"<<endl;
    cout<<"a= "<<*p<<"\t b="<<*p1<<endl;
    int temp=*p;
    *p=*p1;
    *p1=temp;
    cout<<"values after swapping:"<<endl;
    cout<<"a= "<<*p<<"\t b= "<<*p1;
    return 0;
}
//po1