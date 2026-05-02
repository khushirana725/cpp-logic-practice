#include <iostream>
#include <string>
using namespace std;
string reverseString(string s1,int l){
    char x;
    for(int i=0;i<l/2;i++){
        x=s1[l-1-i];
        s1[l-1-i]=s1[i];
        s1[i]=x;
    }
    return s1;
}
int main(){
    string old;
    cout<<"enter the string to be reversed:";
    getline(cin,old);
    cout<<"the reversed string is: "<<reverseString(old,old.length());
    return 0;
}