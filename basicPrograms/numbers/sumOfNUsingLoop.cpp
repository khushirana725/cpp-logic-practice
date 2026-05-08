#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"enter the number:";
    cin>>n;
   for(int i=1;i<=n;i++){
       sum=sum+i;
   }
    cout<<"the sum of first "<<n<<" numbers is:"<<sum;
    return 0;
}
//sumw.exe