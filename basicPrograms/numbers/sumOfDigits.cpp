#include <iostream>
using namespace std;
int main() {
    int n,num,a,sum=0;
    cout<<"enter the number:";
    cin>>n;
    num=n;
   for( ;n!=0; ){
       a=n%10;
       sum=sum+a;
       n=n/10;
   }
    cout<<"the sum of individual digits of  "<<num<<" is:"<<sum;
    return 0;
}
//sod.exe