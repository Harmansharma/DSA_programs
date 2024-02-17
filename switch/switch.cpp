#include <iostream>
using namespace std;
int main(){
  float firstNumber, secondNumber;
  cout << "Enter the two numbers"<< endl;
  cin>>firstNumber>>secondNumber;
  int operation;
  cout << "Enter the  operation"<< endl;
  cin >> operation;
  float answer = 0;
  if (operation == 0){
    answer = firstNumber + secondNumber;
  }
  else if(operation == 1){
    answer = firstNumber - secondNumber;
  }
  else if(operation == 2){
    answer = firstNumber * secondNumber;
  }
  else if(operation == 3){
    answer = firstNumber / secondNumber;
  }
  else 
  {
    cout << "invalid operation"<< endl;
    return 0;
  }
  cout << "answer is" << answer<< endl;
  return 0;
}