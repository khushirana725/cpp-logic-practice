#include <iostream>
using namespace std; 
int main() {
    int num;
    int *p=&num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"the number is:"<<num<<endl;
    cout<<"the adress of number enetered by you is:"<<&num<<endl;
    cout<<"the pointer stores the memory address of variable by p="<<p<<endl;
    cout<<"variable can be accessed using the memory address stored in pointer: by \"*p=\""<<*p<<endl;
    return 0;
}
//p.exe
//g++ basicPrograms\useP.cpp -o p