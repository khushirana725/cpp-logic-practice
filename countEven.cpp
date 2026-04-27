#include <iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    int count_even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even++;
        }
    }
    cout<<"the number of even elements in array is:"<<count_even;
    return 0;
}