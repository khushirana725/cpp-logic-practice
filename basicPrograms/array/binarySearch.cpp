#include <iostream>
using namespace std;
int main() {
 int min,i,swap,mid,low,high,element,n;
 int arr[15];
 char ans='n';
 lim: 
  cout<<"\nenter the limit of array:";
  cin>>n;
if(n>15){
    cout<<"invalid limit";
    goto lim;}
 for(i=0;i<n;i++){
     cout<<"enter arr["<<i<<"]:";
     cin>>arr[i];}
 cout<<"enter the element to be searched:";
 cin>>element;
 for(i=0;i<n-1;i++){
     min=i;
     for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
         min=j;
        }}
     swap=arr[i];
     arr[i]=arr[min];
     arr[min]=swap;
 }
 low=0;
 high=n-1;
 while(low<=high){
      mid=(low+high)/2;
      if(arr[mid]==element){
          ans='y';
          break;
      }
      else if(element>arr[mid])
          low=mid+1;
      else
          high=mid-1;
 }
 if(ans=='y')
    cout<<"element found in the array";
 else
    cout<<"element not found";
    return 0;}
//bsearch.exe