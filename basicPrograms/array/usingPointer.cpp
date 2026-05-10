#include <iostream>
using namespace std;
int main() {
    int arr[5]={12,31,16,19,27};
    int*p=arr;
    cout<<"accessing the elements of array using pointer:"<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"*(p+1)="<<*(p+1)<<endl;
    cout<<"*(p+2)"<<*(p+2)<<endl;
    cout<<"*(p+3)"<<*(p+3)<<endl;
    cout<<"*(p+4)"<<*(p+4)<<endl;
    return 0;
}
//up.exe
//g++ basicPrograms\array\usingPointer.cpp -o up