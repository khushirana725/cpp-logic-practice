#include <iostream>
using namespace std;
int mul(int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
int main() {
    int n1,n2;
    cout<<"enter the 1st number:";
    cin>>n1;
    cout<<"enter the 2nd number:";
    cin>>n2;
    cout<<"the multiplication result of "<<n1<<" and "<<n2<<" is:"<<mul(n1,n2)<<endl;
    cout<<"the subtraction result of "<<n1<<" and "<<n2<<" is:"<<sub(n1,n2);
    return 0;
}
//som.exe
//g++ basicPrograms\function\subOrMul.cpp -o som
