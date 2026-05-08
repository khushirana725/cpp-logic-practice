#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter no. of lines you want for right half pyramid:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";}
        cout<<endl;}
    return 0;}
//star.exe