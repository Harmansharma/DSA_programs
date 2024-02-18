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
  ////////////////////////////Long if else case implement//////////////////////////////
  // if (operation == 0){
  //   answer = firstNumber + secondNumber;
  // }
  // else if(operation == 1){
  //   answer = firstNumber - secondNumber;
  // }
  // else if(operation == 2){
  //   answer = firstNumber * secondNumber;
  // }
  // else if(operation == 3){
  //   answer = firstNumber / secondNumber;
  // }
  // else
  // {
  //   cout << "invalid operation"<< endl;
  //   return 0;
  // }
////////////////////////////////////SWITCH cases impliment/////////////////////////////////////
  switch(operation){
    case 1:
      answer = firstNumber + secondNumber;
      break;
    case 2:
      answer = firstNumber - secondNumber;
      break;
    case 3:
      answer = firstNumber * secondNumber;
      break;
    case 4:
      answer = firstNumber / secondNumber;
      break;
    default:
      cout <<"default case"<< endl;
      break;
  }
  cout << "answer is" << answer<< endl;
  return 0;
}