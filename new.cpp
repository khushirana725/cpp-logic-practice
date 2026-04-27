#include<iostream>
using namespace std;
int main(){
    int arr[10]={25,54,57,52,12,24,35,87,88,45};
    int big,sec_big;
    big=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>big){
            big=arr[i];
        }
    }

    sec_big=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>sec_big && arr[i]!=big){
            sec_big=arr[i];
        }
    }  
   std::cout<<"the first largest element present in array is:"<<big<<std::endl;  
   std::cout<<"the second largest element present in array is:"<<sec_big;
   return 0;
}