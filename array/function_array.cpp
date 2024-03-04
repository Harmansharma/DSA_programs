#include<iostream>
using namespace std;

//basic function just print array by function 

void printArray(int arr[], int size){
  for (int i=0; i<size;i++){
    cout<< arr[i]<<" ";
  }
  cout << endl;
};

// when to find element in array then use a function is present or not 

bool findElement(int arr[], int size, int target){
  for(int i = 0; i< size; i++){
    if (arr[i]== target){
      return true;
    }
  }
  return false;
}

int main(){
  int arr[5]={1,2,3,4,5};
  int size = 5;
  int target = 4;
  //printArray(arr,size);
 bool ans = findElement(arr,size,target);
 if (ans==true){
    cout<< "target found"<< endl;
 }
  else {
    cout<< "not found"<< endl;
 }
  return 0;
}