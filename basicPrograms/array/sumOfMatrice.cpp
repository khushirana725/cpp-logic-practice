#include <iostream>
using namespace std;
int main() {
    int a[10][10],b[10][10];
    int row1,col1,row2,col2;
    lim:
       cout<<"enter the no. of rows of matrix 1:";
       cin>>row1;
       cout<<"enter the no. of columns of matrix 1:";
       cin>>col1;
       cout<<"enter the no. of rows of matrix 2:";
       cin>>row2;
       cout<<"enter the no. of columns of matrix 2:";
       cin>>col2;
    if(row1>10||row2>10||col1>10||col2>10||row1!=row2||col1!=col2){
        cout<<"invalid values entered by you!!! please re-enter---";
        goto lim;
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<"enter a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j]; }
    }
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<"enter b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j]; }
    }
    cout<<"the sum of 2 matrices entered by you is:"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<a[i][j]+b[i][j]<<"\t";}
        cout<<endl;}
    return 0;}
//summ.exe
//g++ basicPrograms\array\sumOfMatrice.cpp -o summ