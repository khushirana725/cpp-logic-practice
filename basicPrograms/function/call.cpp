#include <iostream>
using namespace std; 
void increment(int n){
    n++;
    cout<<"number after increment:"<<n<<endl;
}
void r_increment(int*p){
    *p=*p+1;
    cout<<"number after increment:"<<*p<<endl;
}
int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"I. using call by value^.^\n";
    cout<<"number before call by value is:"<<num<<endl;
    increment(num);
    cout<<"the number after using call by value function is:"<<num<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"II. using call by reference^.^\n";
    cout<<"number before call by reference is:"<<num<<endl;
    r_increment(&num);
    cout<<"the number after using call by reference function is:"<<num;
    return 0;}
//call.exe
// g++ basicPrograms\function\call.cpp -o call