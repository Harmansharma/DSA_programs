#include <iostream>
using namespace std;

void sumCol(int arr[][3], int row, int col){
    for(int i =0; i< col; i++){
        int sum = 0;
        for(int j=0; j< row; j++){
            sum = sum + arr[j][i];
           
        }
          cout << "sum of col"<< sum<< endl;
    }
}

void sumRow(int arr[][3], int row, int col){
    for(int i=0; i< row; i++){
        int sum =0;
        for(int j=0; j< col; j++){
            sum = sum + arr[i][j];
        }
        cout << "sum of row"<< sum<< endl; 
    }
}
int main(){
    int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    
    sumCol(arr, row,col);
    sumRow(arr, row,col);
}