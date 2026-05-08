#include <iostream>
using namespace std;
int primeNum(int num){
    int result=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            result=0;
            break;
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"enter a number to be check if prime or not:";
    cin>>n;
    int ans=primeNum(n);
    (ans==0)?cout<<n<<" is not a prime number":cout<<n<<" is a prime number";
    return 0;
}