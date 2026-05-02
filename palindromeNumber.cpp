#include <iostream>
using namespace std;
int isPalindrome(int n){
    int r=0,a=n,rev=0;
    while(a!=0){
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(rev==n) return 1;
    else return 0;
}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int ans=isPalindrome(num);
    (ans==1)?cout<<"the number "<<num<<" is palindrome.":cout<<"the number "<<num<<" is not palindrome.";
    return 0;    
}