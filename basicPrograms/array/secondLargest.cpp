#include <iostream>
using namespace std;
int main() {
    int arr[50];
    int n,i,largest;
    lim: 
        cout<<"enter the limit of array:";
        cin>>n;
    if(n<=0||n>50){
        cout<<"invalid limit!!!";
        goto lim;}
    for(i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];}
    largest=arr[0];
    for(i=1;i<n;i++){
        if(largest<arr[i])
            largest=arr[i];
    }
    cout<<"the largest number present in array is:"<<largest;
    for(i=0;i<n;i++){
        if(arr[i]==largest)
            arr[i]=0;
    }
    largest=arr[0];
    for(i=1;i<n;i++){
        if(largest<arr[i])
            largest=arr[i];
    }
    cout<<"\nthe second largest number present in array is:"<<largest;
    return 0;}
//seclarge.exe