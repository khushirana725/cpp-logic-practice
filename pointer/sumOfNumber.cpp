#include <iostream>
using namespace std;
int sum(int* n1,int* n2){
    return(*n1+*n2);
}
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"sum= "<<sum(&a,&b);
    return 0;
}