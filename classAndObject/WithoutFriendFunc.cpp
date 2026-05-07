#include <iostream>
using namespace std;
class Student{
    private:
       int marks;
    public:
       Student(int marks){
        this->marks=marks;
       }
};
void display(Student s){
    cout<<"marks= "<<s.marks;//marks is private member it can't be accessed outside the class
}
int main(){
    int mark;
    cout<<"enter marks:";
    cin>>mark;
    Student s1(mark);
    display(s1);
    return 0;
}
//wff.exe