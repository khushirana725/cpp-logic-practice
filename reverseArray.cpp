#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        arr1[i]=arr[n-1-i];
    }
    cout<<"array 1:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"copied array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<"\t";
    }
    return 0;
}