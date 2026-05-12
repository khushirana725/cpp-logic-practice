#include <iostream>
using namespace std;
#define PI 3.14
#define SQUARE(x) ((x)*(x))
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"SQUARE = "<<SQUARE(n)<<endl;
    cout<<"Value of PI = "<<PI<<endl;
    #ifdef PI
        cout<<"PI is defined."<<endl;
    #endif
    #ifndef AREA
        cout<<"AREA is not defined!!!"<<endl;
    #endif
    return 0;
}
//ppd.exe
//g++ basicPrograms\preProcessorDirective.cpp -o ppd