#include <iostream>
using namespace std;
int main() {
    int num,n,a,sum=0;
    cout<<"enter number to be check if it is an ARMSTRONG number or not:";
    cin>>num;
    n=num;
    while(n!=0){
        a=n%10;
        n=n/10;
        sum=sum+(a*a*a);
    }
    if(num==sum)
    cout<<num<<" is an ARMSTRONG number";
    else
    cout<<num<<" is not an ARMSTRONG number";
    return 0;
}
//arm.exe