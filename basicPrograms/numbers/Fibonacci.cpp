#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,c;
    int n;
    cout<<"enter the no. of terms to be displayed:";
    cin>>n;
    if(n==1)
        cout<<a;
    else if(n==2)
        cout<<a<<" "<<b;
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }}
    return 0;
}
//fab.exe