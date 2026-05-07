#include <iostream>
using namespace std;
int largest(int* arr,int n){
    int big=*arr;
    for(int i=1;i<n;i++){
        if(big<*(arr+i)){
            big=*(arr+i);
        }
    }
    return big;
}
int main(){
    int l=5;
    int* arr=new int[l];
    for(int i=0;i<l;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"the largest element in array is:"<<largest(arr,l);
    return 0;
}
//po4