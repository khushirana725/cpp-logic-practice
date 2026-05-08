#include <iostream>
using namespace std;
int main() {
    int num,r,rev=0;
    cout<<"enter the number:";
    cin>>num;
    while(num!=0){
        r=num%10;
        num=num/10;
        rev=rev*10+r;}
    n_w:
    for( ;rev!=0; ){
        r=rev%10;
        switch(r){
        case 0:cout<<"Zero";
               break;
        case 1:cout<<"One";
               break;
        case 2:cout<<"Two";
               break;
        case 3:cout<<"Three";
               break;
        case 4:cout<<"Four";
               break;
        case 5:cout<<"Five";
               break;
        case 6:cout<<"Six";
               break;
        case 7:cout<<"Seven";
               break;
        case 8:cout<<"Eight";
               break;
        case 9:cout<<"Nine";
               break;
      }
    cout<<"\t";
    rev=rev/10;
}
    return 0;}
//niw.exe