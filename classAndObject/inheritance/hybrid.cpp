#include <iostream>
using namespace std;
class Student{
    protected:
       int rollNo;
       char name [50];
    public:
      void getinfo(){
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
  };

class Marks : public Student{
    protected:
      int m1,m2,m3,m4;
    public:
      void getMarks(){
        cout << "Enter marks: "<<endl;
        cin >> m1 >> m2 >> m3 >> m4;
      }
};
class Music{
    protected:
      int mu;
    public:
      void getMusic(){
        cout << "Enter marks in Music: " ;
        cin >> mu;
      }
};
class Result : public Marks, public Music{
    private:
      int total;
      float percent;
    public:
      void calculate(){
        total = m1+m2+m3+m4+mu;
        percent = (total/125.0)*100;
      }
      void show(){
        cout <<"Roll No: " << rollNo << endl;
        cout << "Name: " << name <<endl;
        cout << "Total Marks Scored: " << total<<endl;
        cout << "percentage Scored: "<<percent << "%"<<endl;
      }
};
int main(){
    Result r;
    r.getinfo();
    r.getMarks();
    r.getMusic();
    r.calculate();
    r.show();
    return 0;
}
//hyb.exe
//g++ classAndObject\inheritance\hybrid.cpp -o hyb     