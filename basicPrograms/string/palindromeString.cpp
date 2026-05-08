#include <iostream>
#include <string>
using namespace std;
int isPalindrome(string s){
    string s1=s;
    int l=s1.length();
    for(int i=0;i<l/2;i++){
        char x=s1[l-1-i];
        s1[l-1-i]=s1[i];
        s1[i]=x;
    }
    if(s==s1)
        return 1;
    else 
        return 0;
}
int main(){
    string s1;
    cout<<"enter the string: ";
    getline(cin,s1);
    int ans=isPalindrome(s1);
    (ans==1)?cout<<"the string "<<s1<<" is palindrome.":cout<<"the string "<<s1<<" is not palindrome.";
    return 0;
}