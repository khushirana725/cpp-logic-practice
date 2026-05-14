#include <iostream>
using namespace std;
class ATM1{
    private:
      int pin=1234,Pin;//pin=actual pin;    Pin=entered pin;
      double amount=50000.5;
    public:
      ATM1(){
        cout<<"ENTER THE PIN: ";
        cin>>Pin;
        (pin==Pin)?cout<<"ACCESS GRANTED"<<endl:cout<<"INCORRECT PIN!!"<<endl;
      }
      void withdraw(){
        if(pin==Pin){
            double Amount;
            cout<<"ENTER AMOUNT TO WITHDRAW: ";
            cin>>Amount;
            if(amount>=Amount&&Amount>0){
                cout<<"WITHDRAWAL IS BEING INITIATED"<<endl;
                amount=amount-Amount;
                cout<<"THE CURRENT AMOUNT IN YOUR ACCOUNT IS: "<<amount<<endl;
            }
            else if(Amount==0){
                cout<<"NO AMOUNT WAS WITHDRAWN AS YOU ENTERED 0 RUPEES TO WITHDRAW."<<endl;
            }
            else{
                cout<<"INVALID AMOUNT OR INSUFFICIENT BALANCE."<<endl;
            }
        }
        else{
            cout<<"ACCESS DENIED"<<endl;
        }
      }
      void deposit(){
        if(pin==Pin){
            double Amount;
            cout<<"ENTER THE AMOUNT TO DEPOSIT: ";
            cin>>Amount;
            if(Amount>0){
                amount=amount+Amount;
                cout<<"BALANCE UPDATED ^_^\nCURRENT BALANCE: "<<amount<<endl;
            }
            else{
                cout<<"INCORRECT AMOUNT ENTERED TO DEPOSIT"<<endl;
            }
        }
        else
            cout<<"ACCESS DENIED"<<endl;
       }
};
int main(){
    ATM1 a;
    char choice;
    cout<<"DO YOU WANT TO WITHDRAW CASH('y'/'n'): ";
    cin>>choice;
    if(choice=='y'||choice=='Y'){
        a.withdraw();
    }
    cout<<"DO YOU WANT TO DEPOSIT CASH('y'/'n'): ";
    cin>>choice;
    if(choice=='y'||choice=='Y'){
        a.deposit();
    }
    return 0;
}
//atms.exe
//classAndObject\encapsulation\atm_single_user.cpp -o atms.exe