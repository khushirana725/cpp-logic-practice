#include <iostream>
using namespace std;
int main() {
    int n,i=1,sum=0;
    cout<<"enter the number:";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"the sum of first "<<n<<" numbers is:"<<sum;
    return 0;
}
//sum.exe