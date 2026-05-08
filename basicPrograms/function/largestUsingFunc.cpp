#include <iostream>
using namespace std;
void largest(int arr[],int n){
    int big=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>big){
            big=arr[i];
        }
    }
    cout<<"the largest element present in array is:"<<big;
}
int main(){
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    largest(arr,n);
    return 0;
}