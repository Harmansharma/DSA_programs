#include <iostream>
using namespace std;

int getUnique(int arr[], int size){
    int ans = 0;
    for(int i =0; i<size;i++){
    ans = ans ^ arr[i];
    }
   return ans;
};
int main() {
    // Write C++ code here
    int arr[] = {1,2,3,4,1,2,3,4,7};
    int size = 9;
    int finalAns = getUnique(arr, size);
    cout << "final answer "<< finalAns<<endl;

    return 0;
}