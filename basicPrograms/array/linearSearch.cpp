#include <iostream>
using namespace std;
int main() {
    int arr[50];
    int n,i,element;
    char ans='n';
    lim:
        std::cout<<"enter the limit of array:";
        std::cin>>n;
    if(n<=0||n>50){
        std::cout<<"invalid limit!!!";
        goto lim;}
    for(i=0;i<n;i++){
        std::cout<<"enter arr["<<i<<"]:";
        std::cin>>arr[i];}
    std::cout<<"enter element to be searched in array:";
    std::cin>>element;
    for(i=0;i<n;i++){
        if(element==arr[i]){
            ans='y';
            break;}}
    if(ans=='y')
        std::cout<<"the search element "<<element<<" is found at "<<i<<"th position";
    else
        std::cout<<"element not found in the array!!!";
    return 0;}
//lsearch.exe