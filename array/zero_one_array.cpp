#include<iostream>
using namespace std;

void findCount(int arr[], int size){
  int zero = 0;
  int one =0;
  for(int i =0;i< size; i++){
    if(arr[i]==0){
      zero++;
    }
    if(arr[i]==1){
      one++;
    } 
  }
  cout<< "number of zero"<< zero<<endl;
  cout<< "number of one"<< one<< endl;
}

int main(){
  int arr[5]= {0,1,0,0,1};
  int size = 5;
  findCount(arr, size);
 return 0;
}