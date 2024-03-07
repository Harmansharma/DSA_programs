#include <iostream>
using namespace std;

int main() {
 char ch[100];
 cout << "Take input single word"<<endl;
 cin>>ch;
 cout<<"input  " <<ch<<endl;
 
 cout <<"To check the value of last index is null"<<endl;
 for(int i=0; i< 10; i++){
     cout << "print value in array in indexwise "<<i<< " value "<< ch[i]<<endl; 
 }
 
 cout <<"Value print at 6 index is null to check check the null value "<<endl;
 char temp = ch[6];
 int value = (int)temp;
 cout <<"value of temp index "<<value<<endl;
 cout<< "That mean value of null char is zero "<<endl;
 
 cout << "Taking input by space"<<endl;
 cin>>ch;
 cout<<"iput "<<ch<<endl;
 
 cout<<"Taking input by tab"<<endl;
 cin>>ch;
 cout<< "Input"<<endl;
 
 cout<<"Taking input by using new line char"<<endl;
 cin>>ch;
 cout<<"Input"<<ch<<endl;
 
 cout <<"In all above case adding a tab, add a space , adding a enter only print left side char"<<endl;
 return 0;
}