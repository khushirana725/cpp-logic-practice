#include <iostream>
using namespace std;
int main() {
    int arr[10][10];
    int row,col;
    lim:
       cout<<"enter the no. of rows of matrix:";
       cin>>row;
       cout<<"enter the no. of columns of matrix:";
       cin>>col;
    if(row>10||col>10||row!=col){
        cout<<"invalid values entered by you!!! please re-enter---";
        goto lim;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter arr["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];}
    }
    cout<<"the lower triangle of the matrix is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j<=i)
               cout<<arr[i][j]<<"\t";
        
            else
              cout<<"\t";}
        cout<<endl;
    }
    cout<<"the upper triangle of the matrix is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j<i)
              cout<<"\t";
            else
              cout<<arr[i][j]<<"\t";}
        cout<<endl;}
    return 0;}
//tri.exe
//g++ basicPrograms\array\triangleOfMatrix.cpp -o tri