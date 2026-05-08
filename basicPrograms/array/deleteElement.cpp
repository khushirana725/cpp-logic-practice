#include <iostream>
using namespace std;
int main() {
    int arr[15];
    int n,index;
    lim:
        cout<<"enter the limit of array:";
        cin>>n;
    if(n<=0||n>15){
        cout<<"invalid limit entered"<<endl;
        goto lim;}
    for(int i=0;i<n;i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];}
   ind:
      cout<<"enter the index of element to be deleted:";
      cin>>index;
   if(index<0||index>n-1){
       cout<<"invalid index entered\n reenter the index:";
       goto ind;}
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];}
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
    return 0;}
//del.exe