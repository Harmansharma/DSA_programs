#include<iostream>
using namespace std;
/// To search an element in array by using if else condition 

int main(){
  int arr[]= {2,3,4,5,6,7};
  int target = 5;
  int n = 6;
  for(int i=0; i<n; i++){
    if(arr[i] == target){
      cout << "fount "<< arr[i]<< endl;
      break;
    }
    else {
      cout << "notfound "<< arr[i]<< endl;
    }
  }

// 
  
  int brr[]= {2,3,4,5,6,7};
  int element = 8;
  int m = 6;
  bool found = false;
  for (int i = 0; i< m;i++){
    if (arr[i] == element){
        found = true;
    }
  }
    if (found==true){
      cout << "found";
      }
    else{
      cout << "not found";
      }
  return 0;
}