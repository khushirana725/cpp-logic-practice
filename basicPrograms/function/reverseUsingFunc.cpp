#include <iostream>
using namespace std;
void reverseArray(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"\nORIGINAL ARRAY:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nREVERSED ARRAY:"<<endl;
    reverseArray(arr,n);
    return 0;
}