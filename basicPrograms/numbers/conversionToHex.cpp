#include <iostream>
using namespace std;
int main() {
    char hexarr[50];
    int n=0,A,num,r,i;
    cout<<"enter the number:";
    cin>>num;
    A=num;
    while(A!=0){
        A=A/10;
        n++;}
    A=num;
    for(i=0;i<n||A!=0;i++){
        r=A%16;
        A=A/16;
        if(r<10)
            hexarr[i]=r+'0';
        else
            hexarr[i]=(r-10)+'A';
    }
    cout<<"decimal=hexadecimal"<<endl;
    cout<<num<<"=";
    for(i=n-1;i>=0;i--){
        cout<<hexarr[i];}  
    return 0;}
//hex.exe
//g++ basicPrograms\numbers\conversionToHex.cpp -o hex