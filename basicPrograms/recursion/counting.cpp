#include <iostream>
using namespace std;
void p_num(int a,int n){
    if(a>n)
        return;
    else{
        cout<<a<<"\n";
        p_num(a+1,n);}
}
int main() {
    int num;
    cout<<"enter the number till which counting is to be displayed:";
    cin>>num;
    p_num(0,num);
    return 0;
}
//co.exe
//g++ basicPrograms\recursion\counting.cpp -o co