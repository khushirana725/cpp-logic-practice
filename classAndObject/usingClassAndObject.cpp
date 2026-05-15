#include <iostream>
#include <string>
using namespace std;
class student{
  private:
    int roll;
    string name;
  public:
    void info();
    void display();
};
void student::info(){
    cout<<"enter the roll number of student: ";
    cin>>roll;
    cout<<"enter the name of student: ";
    cin.ignore();
    getline(cin,name);
}
void student::display(){
    cout<<"the data entered is: "<<endl;
    cout<<"ROLL No.= "<<roll<<endl;
    cout<<"NAME= "<<name<<endl;
}
int main() {
    student s1;
    s1.info();
    s1.display();
    return 0;
}
//CaO.exe
//g++ classAndObject\usingClassAndObject.cpp -o CaO