#include <iostream>
#include <string> 
using namespace std;
int main(){
    string name;
    cout<<"enter the name:";
    getline(cin,name);
    cout<<"the name entered by you is: "<<name<<endl;
    cout<<"the length of name entered is: "<<name.length();
    return 0;
}