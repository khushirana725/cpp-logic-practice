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
            cin>>arr[i][j];
        }
    }
    cout<<"the diagonal elements of the matrix are:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(i==j)
            cout<<arr[i][j]<<"\t";
        }
    }
    return 0;}
//dia.exe
//g++ basicPrograms\array\diagonal.cpp -o dia