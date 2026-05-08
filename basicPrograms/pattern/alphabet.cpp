#include <iostream>
using namespace std;
int main() {
    int num,lim;
    char alpha;
    cout<<"enter no. between 65-91:";
    cin>>lim;
    for(int i=1;i<=lim-64;i++){
        num=65;
            for(int j=1;j<=i&&num<=lim;j++){
                alpha=num;
                cout<<alpha;
                num++;}
        cout<<endl;}
    return 0;}
//alpha.exe