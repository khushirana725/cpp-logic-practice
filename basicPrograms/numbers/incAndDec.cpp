#include <iostream>
using namespace std;
int main() {
    int a=6,b;
    cout<<"initially a= "<<a<<endl;
    cout<<"after operating b=a++"<<endl;
    b=a++;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    b=++a;
    cout<<"after operating b=++a"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    return 0;
}
//iad.exe