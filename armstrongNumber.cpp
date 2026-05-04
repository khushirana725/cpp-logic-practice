#include <iostream>
using namespace std;
int isArmstrong(int n){
    if(n==0) return 1;
    int num=n,count=0,arm=0;
    while(num!=0){
        num=num/10;
        count++;
    }
    num=n;
    while(num!=0){
        int cube=1,d=num%10;
        for(int i=0;i<count;i++){
            cube=cube*d;
        }
        arm+=cube;
        num=num/10;
    }
    if(n==arm) return 1;
    else  return 0;
}
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    int ans=isArmstrong(num);
    (ans==1)?cout<<num<<" is an armstrong number.":cout<<num<<" is not an armstrong number";
    return 0;
}