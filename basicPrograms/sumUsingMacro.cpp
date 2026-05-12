#include <iostream>
using namespace std;
#define sum(n)({\
    int i=1,s=0;\
    while(i<=n){\
        s+=i;\
        i++;\
    }\
    s;\
})
int main(){
    int num;
    cout<<"ENTER THE NUMBER: ";
    cin>>num;
    cout<<"SUM= "<<sum(num);
    return 0;
}
//macsum.exe
//g++ basicPrograms\sumUsingMacro.cpp -o macsum