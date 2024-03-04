#include <iostream>
using namespace std ;

int main(){
  int arr[10];
  int n =10;
  int sum = 0;
  cout << "enter the input"<< endl;
  for (int i =0; i< n; i++){
    cin >> arr[i];
  }
  // sum of the array
  for (int i = 0; i< n ; i++){
      sum = sum + arr[i];
  }
  cout << "sum of element" <<sum << endl;
  
  // double value of each element in array
  for (int i =0; i< n; i++){
    arr[i] = 2*arr[i];
    cout << "double of arrray" <<arr[i]<< " ";
  }
  return 0;
}