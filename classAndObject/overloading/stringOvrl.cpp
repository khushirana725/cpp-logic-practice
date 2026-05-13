#include <iostream>
#include <cstring>
using namespace std;
class newstring{
    char str[100];
   public:
    newstring(const char str[100]){
        strcpy(this->str,str);
    }
    newstring(){}
    newstring operator+(newstring&k);
    void display();
};
newstring newstring::operator+(newstring&k){
    newstring temp;
    strcpy(temp.str,str);//copy first string
    strcat(temp.str,k.str);//concatenate both strings
    return temp;
}
void newstring::display(){
    cout<<str<<endl;
}
int main() {
    newstring s1("Khushi");
    newstring s2("Rana");
    newstring s3;
    s3=s1+s2;//s3=s1.operator+(s2);
    s3.display();
    return 0;}
//strOvr.exe
//g++ classAndObject\overloading\stringOvrl.cpp -o strOvr                 