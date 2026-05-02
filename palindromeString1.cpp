#include <iostream>
#include <string>
using namespace std;
int isPalindrome(string s){
    int l=s.length();
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            return 0;
        }
    }        
    return 1;
}
int main(){
    string s1;
    cout<<"enter the string: ";
    getline(cin,s1);
    int ans=isPalindrome(s1);
    (ans==1)?cout<<"the string "<<s1<<" is palindrome.":cout<<"the string "<<s1<<" is not palindrome.";
    return 0;
}