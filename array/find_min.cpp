// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
  int arr[] = {5,2,-1,4,5};
  int size = 5;
  int ans = INT_MAX;
  int ans2 = INT_MAX;
  int ans3 = INT_MAX;
 for (int i=0; i< size; i++){
  if (arr[i]< ans){
      ans = arr[i];
    }
 }
  cout <<"min value"<<ans << endl;
  
  for (int i =0; i< size; i++){
      if(arr[i]<ans2 && arr[i]>ans){
          ans2 = arr[i];
      }
      
  }
  cout << "second element"<< ans2 <<endl;
  
    for (int i =0; i< size; i++){
      if(arr[i]<ans3 && arr[i]>ans2){
          ans3 = arr[i];
      }
      
  }
  cout << "third largest"<< ans3 <<endl;
    return 0;
}