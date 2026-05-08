#include <iostream>
using namespace std;
int main() {
    int num,n,a,rev=0;
    cout<<"enter number to be check if it is a PALINDROME number or not:";
    cin>>num;
    n=num;
    while(n!=0){
        a=n%10;
        n=n/10;
        rev=rev*10+a;
    }
    if(num==rev)
    cout<<num<<" is a PALINDROME number";
    else
    cout<<num<<" is not a PALINDROME number";
    return 0;
}
//pal.exe