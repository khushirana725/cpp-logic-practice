#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    int small=arr[0];
    for(int i=1;i<10;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    cout<<"the smallest element present in the array is:"<<small;
    return 0;
}