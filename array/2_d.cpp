// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

bool findElement(int arr[][3],int row, int col, int target = 4){
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            if (arr[i][j] ==6){
            return true;
            }
        }
    }
    return false;
}

int findMax(int arr[][3], int row, int col, int max){
    for(int i = 0; i<row;i++){
        for(int j=0; j<col;j++){
            if (arr[i][j]> max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMin(int arr[][3], int row, int col, int min){
    for(int i= 0; i< row; i++){
        for(int j = 0; j< col; j++){
            if (arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int findSecondMax(int arr[][3], int row, int col, int max, int secondmax){
    for(int i = 0; i< row; i++){
        for(int j= 0; j< col; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            } 
        }
    }
    for(int i =0; i< row; i++){
        for(int j=0; j< col; j++){
            if (arr[i][j] > secondmax && arr[i][j] < max){
                secondmax = arr[i][j];
            } 
        }
    }
    return secondmax;
    
}

int main(){
  int arr[][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
  int row =  3;
  int col = 3;
  int target = 4;
  int max = INT_MIN;
  int min = INT_MAX;
  int secondmax = INT_MIN;
  cout << "find or not "<< findElement(arr,row,col,target)<< endl;
  cout << "find max elemnet "<< findMax(arr,row,col,max)<<endl;
  cout << "find min element "<< findMin(arr,row,col, min)<<endl;
  cout << "find second max element"<< findSecondMax(arr,row,col, max, secondmax)<<endl;
}
