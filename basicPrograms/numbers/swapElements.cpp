#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int temp=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;
    cout<<"\narray after swapping elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}