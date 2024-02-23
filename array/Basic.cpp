#include<iostream>
using namespace std;

int main(){
// To check address and size of array/////////

int a = 6;
cout<< "Size of a "<< sizeof(a)<< endl;
cout<< "Address of a "<<&a<<endl;

// to check base address and size of array///////
int arr [10];
cout << "Size of  array "<< sizeof(arr)<<endl;
cout << "Base Address of array arr "<< &arr<<endl;

// without using address sign is also show base address
cout << "Without using a sign & "<< arr<< endl;

//initization and size of array 
int brr[]= {1,2,3};
cout<< "size of array "<< sizeof(brr)/sizeof(int)<< endl;

//second way to initilize array
int crr[5] = {1,2,3,4,5};

// Initilization when size of array is more than input element 

int drr[5]= {1,2}; //IN this case two index is only fill rest of index store 0;

//  Error in initialization

//int Err[2] ={1,2,3,4};//In this case array show error

//you want a print an element in array 
// i am using a crr array for print an element

int n = 4;
// using a for loop for print an element 
for(int i = 0; i< n ; i++){
  cout <<crr[i]<< " ";
}
cout << endl;


//by using a while loop

int j = 0;
int z =3;
while(j<z){
  cout << crr[j]<<" ";
  j++;
} 

// taking input from user 
int p = 10;
for (int q=0;q<p;q++){
  cout<< "enter the input "<<q<< " " ;
  // q reperesent the index number , p  defined number of element wanted to store 
  cin>> arr[q];
  // cin take the input at the indexing  q
  cout<< endl;
}
return 0;
}