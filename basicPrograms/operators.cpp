#include <iostream>
using namespace std;
int main() {
    cout<<"LOGICAL OPERATORS:-"<<endl;
    int a,b,c;
    cout<<"enter values for a,b,c:";
    cin>>a>>b>>c;
    cout<<"which operation you would like to perform here:AND(&&)='A'OR(||)='O'"<<endl;
    char op;
    cin>>op;
    if(op=='A'||op=='a'){
        cout<<"(a>b)&&(a>c)="<<(a>b)&&(a>c);}
    else if(op=='O'||op=='o'){
        cout<<"(a>b)||(a>c)="<<(a>b)||(a>c);}
    else{
        cout<<"enter a valid operation to be performed from listed above and try again!!!"<<endl;}
    cout<<"\n-------------------------------------------------------------"<<endl;
    cout<<"CONDITIONAL OPERATORS:-"<<endl;
    int x,y;
    cout<<"enter number to be checked if even or odd:";
    cin>>x;
    y=(x%2)?0:1;
    if(y==0)
     cout<<x<<" is odd"<<endl;
    else
     cout<<x<<" is even"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"BITWISE OPERATORS:-"<<endl;
    a=5&3;
    cout<<"(1) a=5&3"<<endl;
    cout<<"a="<<a<<endl;
    a=5&8;
    cout<<"(2) a=5&8"<<endl;
    cout<<"a="<<a<<endl;
    a='A'&'D';
    cout<<"(3) a='A'&'D'"<<endl;
    cout<<"a="<<a<<endl;
    a=5<<3;
    cout<<"(4) a=5<<3"<<endl;
    cout<<"a="<<a<<endl;
    a=5>>3;
    cout<<"(5) a=5>>3"<<endl;
    cout<<"a="<<a<<endl;
    return 0;}
//opr.exe