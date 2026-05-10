#include <iostream>
using namespace std;
void c_array(int new_arr[5]){
    cout<<"the copied array from the original one is:"<<endl;
    cout<<new_arr[0]<<endl;
    cout<<new_arr[1]<<endl;
    cout<<new_arr[2]<<endl;
    cout<<new_arr[3]<<endl;
    cout<<new_arr[4]<<endl;
}
int main() {
    int arr[5]={12,32,40,60,55};
    c_array(arr);
    return 0;
}
//Carr.exe
//g++ basicPrograms\function\copyArray.cpp -o Carr