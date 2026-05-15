#include <iostream>
#include <string>
using namespace std;
class atm{
  int pin;
  static string city;
 public:
  atm(int pin){
      this->pin=pin;
    }
  atm(atm&obj){
      pin=obj.pin;
    }
  void display();
};
string atm::city="panipat";
void atm::display(){
    cout<<"branch :"<<city<<endl;
    cout<<"atm pin read successfully!!!^_^"<<endl;
    cout << "Access granted. Account verified." << endl;
}
int main() {
    int pswrd;
    cout<<"enter the atm pin for getting your account info: ";
    cin>>pswrd;
    cout<<"---------------------------------------------"<<endl;
    cout<<"using constructor:-"<<endl;
    atm a1(pswrd);
    a1.display();
    cout<<"---------------------------------------------"<<endl;
    cout<<"using copy constructor:-"<<endl;
    atm a2(a1);
    a2.display();
    return 0;
}
//cons.exe
//g++ classAndObject\constructor.cpp -o cons