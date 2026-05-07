#include <iostream>
using namespace std;
class Student{
    private:
       int marks;
    public:
       Student(int marks){
        this->marks=marks;
       }
    friend void display(Student s);
};
void display(Student s){
    cout<<"marks= "<<s.marks;//friend function is treated as a trusted function and private/protected member can be accessed here
}
int main(){
    int mark;
    cout<<"enter marks:";
    cin>>mark;
    Student s1(mark);
    display(s1);
    return 0;
}
//ff.exe